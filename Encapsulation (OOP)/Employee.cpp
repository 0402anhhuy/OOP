#include<iostream>
using namespace std;
class Employee{
private:
	int id;
	string firstName;
	string lastName;
	int salary;

public:
	Employee(int id, string firstName, string lastName, int salary){
		this->id = id;
		this->firstName = firstName;
		this->lastName = lastName;
		this->salary = salary;
	}

	int getId(){
		return id;
	}

	void setId(int id){
		this->id = id;
	}

	string getFirstName(){
		return firstName;
	}

	void setFirstName(string firstName){
		this->firstName = firstName;
	}

	string getLastName(){
		return lastName;
	}

	void setLastName(string lastName){
		this->lastName = lastName;
	}

	string getFullName(){
		return firstName + " " + lastName;
	}

	int getSalary(){
		return salary;
	}

	void setSalary(int salary){
		this->salary = salary;
	}
};

int main(){
	Employee *e = new Employee(1, "Kien", "Hoang", 1000);
	cout << "Id: " << e->getId() << endl;
	cout << "Name: " << e->getFullName() << endl;
	cout << "Salary: " << e->getSalary() << endl;
	return 0;
}