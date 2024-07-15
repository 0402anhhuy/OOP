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
    //Setter và Getter
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    
    void setAddress(string address){
        this->address = address;
    }
    string getAddress(){
        return address;
    }

// Protected: Có thể truy cập được từ class con và không thể từ bên ngoài
protected:
    void display(){
        cout << "Name: " << getName() << "\n";
        cout << "Age: " << getAge() << "\n";
        cout << "Address: " << getAddress() << "\n";
    }
};

class Student : public Person{
private:
    double gpa;
    string student_name;
public:
    //Setter và Getter (Ưu tiên dùng Parameter Constructor)
    void setGpa(double gpa){
        this->gpa = gpa;
    }
    double getGpa(){
        return gpa;
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
        cout << "GPA: " << gpa << "\n\n";
    }
};

class Teacher : public Person{
private:
    int salary;

public:
    //Setter và Getter
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }

    //Overriding
    void display(){
        Person::display();
        cout << "Salary: " << salary << "\n\n";
    }
};

int main(){
    Student *s1 = new Student;
    s1->setName("Anh Huy");
    s1->setAge(18);
    s1->setAddress("Nha Trang");
    s1->setGpa(9.5);
    s1->display();

    Teacher *t1 = new Teacher;
    t1->setName("Huyen My");
    t1->setAge(18);
    t1->setAddress("Nha Trang");
    t1->setSalary(5000000);
    t1->display();
    return 0;
}