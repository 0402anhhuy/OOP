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
    Person(){}
    //Parameter Constructor
    Person(string name, int age, string address){
        cout << "Here is the information of ";
        this->name = name;
        this->age = age;
        this->address = address;
    }

    virtual void show(){
        cout << "A person is working!\n";
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
    Student(){}
    // Nếu không chỉ rõ constructor nào thì lớp con sẽ luôn gọi default constructor
    Student(string name, int age, string address, double gpa) : Person(name, age, address){
        cout << "student\n";
        this->gpa = gpa;
        this->student_name = name;
    }

    /*
        - Nếu hàm trùng tên với method (Overriding - Ghi đè phương thức) 
        thì phải chỉ rõ method đó thuộc class nào để tránh lặp vô hạn

        - Hoặc có thể đổi tên hàm trong class con

        void show(){
            display();
            cout << "GPA: " << getGpa() << "\n";
        }
    */

    void display(){
        Person::display();
        cout << "GPA: " << gpa << "\n";
    }

    void show() override{
        cout << "A student is learning!\n";
    }
};

class Teacher : public Person{
private:
    int salary;

public:
    Teacher(){}

    Teacher(string name, int age, string address, int salary) : Person(name, age, address){
        cout << "teacher\n";
        this->salary = salary;
    }

    //Overriding
    void display(){
        Person::display();
        cout << "Salary: " << salary << "\n";
    }

    void show() override{
        cout << "A teacher is teaching!\n";
    }
};

class Worker : public Person{
private:
    int timeWorking;
public:
    Worker(){}

    Worker(string name, int age, string address, int timeWorking) : Person(name, age, address){
        this->timeWorking = timeWorking;
    }

    void display(){
        Person::display();
        cout << "Time Working: " << timeWorking << "\n";
    }

    void show() override{
        cout << "A worker is working!\n";
    }
};

int main(){
    /*
        Không cần set value cho các attribute vì có hàm Constructor
    */
    Person *student = new Student();
    Person *teacher = new Teacher();
    Person *worker = new Worker();

    Person *person_list[3];

    person_list[0] = student;
    person_list[1] = teacher;
    person_list[2] = worker;

    for(int i = 0; i < 3; i++) person_list[i]->show();
    return 0;
}