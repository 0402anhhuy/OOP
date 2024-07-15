#include<bits/stdc++.h>
using namespace std;

class Person{
    // Encapsulation
private:
    int id;
    string name;
    int age;
    string address;
public:
    // Default Constructor
    Person(int id, string name, int age, string address){
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
    }

    // Getter
    int getId(){
        return id;   
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getAddress(){
        return address;
    }
};

int main(){
    Person *p1 = new Person(1001, "Huyen My", 18, "Nha Trang");
    cout << "Id: " << p1->getId() << endl;
	cout << "Name: " << p1->getName() << endl;
	cout << "Age: " << p1->getAge() << endl;
	cout << "Address: " << p1->getAddress() << endl;
    return 0;
}