#include<bits/stdc++.h>
using namespace std;

//Abstract class
class Person{
private:
    string name;
    int age;
    string address;
public:
    Person(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    virtual void display() = 0;   // Pure Virtual Function
};

class Student : public Person{
private:
    double gpa;
public:
    Student(string name, int age, string address, double gpa) : Person(name, age, address){
        this->gpa = gpa;
    }

    void display() override{
        cout << "A student is learning!\n";
    }
};

class Teacher : public Person{
private:
    int salary;
public:
    Teacher(string name, int age, string address, int salary) : Person(name, age, address){
        this->salary = salary;
    }

    void display() override{
        cout << "A teacher is teaching!\n";
    }
};


int main(){
    Person *s1 = new Student("Anh Huy", 18, "Nha Trang", 9.6);
    Person *t1 = new Teacher("Huyen My", 19, "Nha Trang", 5000000);
    s1->display();
    t1->display();
    return 0;
}