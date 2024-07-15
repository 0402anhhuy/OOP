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

    void show(){
        cout << "A person is working!\n";
    }

// Protected: Có thể truy cập được từ class con và không thể từ bên ngoài
};

class Student : public Person{
private:
    double gpa;
    string student_name;
public:
    Student(){
        student_name = "No one";
    }
    // Nếu không chỉ rõ constructor nào thì lớp con sẽ luôn gọi default constructor
    Student(string name, int age, string address, double gpa) : Person(name, age, address){
        cout << "student\n";
        this->gpa = gpa;
        this->student_name = name;
    }
    
    void show(){
        cout << "A student is learning!\n";
    }
};

int main(){
    //Cách 1 (Down-casting)
    Student *s1 = new Student;
    Person *p1 = s1;
    ((Student *)p1)->show();

    //Cách 2
    Person *s2 = new Student();
    s2->show();

    //Up-casting
    Person *p2 = new Person();
    ((Student *)p2)->show();
    return 0;
}