#include<bits/stdc++.h>
using namespace std;

class Person{};

class Vehicle{
private:
    string name;
    // Những kiểu dữ liệu tham chiếu phải khởi tạo ngay khi khai báo
    const int manufactureYear;
    Person &owner;
    float frameSize[3];
public:
    //Initialization list
    Vehicle(string name, int year, Person &person) : 
        name(name), 
        manufactureYear(year), 
        owner(person),
        frameSize{1.5, 2, 3.4}
    {}
    
    void display(){
        cout << "Name: " << name << endl;
        cout << "Year: " << manufactureYear << endl;
    }
};

int main(){
    return 0;
}