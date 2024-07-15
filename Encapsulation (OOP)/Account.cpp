#include<iostream>
using namespace std;

class Account{
private:
	int id;
	string name;
	int balance = 0;

public:
	Account(int id, string name){
		this->id = id;
		this->name = name;
	}

	Account(int id, string name, int balance){
		this->id = id;
		this->name = name;
		this->balance = balance;
	}

	int getId(){
		return id;
	}

	string getName(){
		return name;
	}

	void setName(string name){
		this->name = name;
	}

	int getBalance(){
		return balance;
	}
	void deposit(int amount){
		balance += amount;
	}
	void withdraw(int amount){
		if(balance >= amount){
			balance -= amount;
		} 
        else cout << "That amount exceeds your current balance." << endl;
	}
	void display(){
		cout << "Id: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Balance: " << balance << endl;
	}
};

int main(){
	Account *account1 = new Account(1000, "Anh Huy", 2005);
	account1->display();
	account1->withdraw(2100);
	account1->deposit(600);
	cout << "Balance: " << account1->getBalance() << endl;
	account1->withdraw(2100);
	cout << "Balance: " << account1->getBalance() << endl;
	return 0;
}