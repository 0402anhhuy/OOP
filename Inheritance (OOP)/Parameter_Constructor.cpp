#include<bits/stdc++.h>
using namespace std;

class Person{
//Private: Chỉ có thể truy cập trong class chứa nó
private:
    string name;
    int age;
    string address;

//Public: Có thể truy cập được ở bất cứ đâu
public:
    //Parameter Constructor
    Person(string name, int age, string address){
        cout << "Here is the information of ";
        this->name = name;
        this->age = age;
        this->address = address;
    }

// Protected: Có thể truy cập được từ class con và không thể từ bên ngoài
protected:
    void display(){
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Address: " << address << "\n";
    }
};

class Student : public Person{
private:
    double gpa;
    string student_name;
public:
    // Nếu không chỉ rõ constructor nào thì lớp con sẽ luôn gọi default constructor
    Student(string name, int age, string address, double gpa) : Person(name, age, address){
        cout << "student\n";
        this->gpa = gpa;
        this->student_name = name;
    }

    void display(){
        Person::display();
        cout << "GPA: " << gpa << "\n\n";
    }
};

class Teacher : public Person{
private:
    int salary;

public:
    Teacher(string name, int age, string address, int salary) : Person(name, age, address){
        cout << "teacher\n";
        this->salary = salary;
    }

    //Overriding
    void display(){
        Person::display();
        cout << "Salary: " << salary << "\n\n";
    }
};

int main(){
    /*
        Không cần set value cho các attribute vì có hàm Constructor
    */
    Student *s1 = new Student("Anh Huy", 18, "Nha Trang", 9.5);
    s1->display();

    Teacher *t1 = new Teacher("Huyen My", 20, "Nha Trang", 5000000);
    t1->display();
    return 0;
}