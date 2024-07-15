#include<bits/stdc++.h>
using namespace std;

class Math{
public:
	static int abs(int x){
		return x < 0 ? -x : x;
	}

	static int add(int x, int y){
		return x + y;
	}

	static int subtract(int x, int y){
		return x - y;
	}

	static int min(int x, int y){
		return x < y ? x : y;
	}

	static int max(int x, int y){
		return x > y ? x : y;
	}

	static int pow(int x, int y){
		int power = 1;
		for(int i = 0; i < y; i++){
			power *= x;
		}
		return power;
	}
};

class ArrayCalculator{
public:
	static int sumOfArray(int arr[], int n){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += arr[i];
		}
		return sum;
	}

	static double sumOfArray(double arr[], int n){
		double sum = 0;
		for(int i = 0; i < n; i++){
			sum += arr[i];
		}
		return sum;
	}
};

int main(){
    system("cls");
	cout << Math::abs(-2) << endl;
	cout << Math::add(2, 3) << endl;
	cout << Math::subtract(2, 3) << endl;
	cout << Math::min(2, 3) << endl;
	cout << Math::max(2, 3) << endl;
	cout << Math::pow(2, 3) << endl << endl;
    int arr1[] = {1, 2, 3};
    double arr2[] = {1.3, 3.3, 4.5, 5};
    cout << ArrayCalculator::sumOfArray(arr1, 3) << endl;
    cout << ArrayCalculator::sumOfArray(arr2, 4) << endl;
	return 0;
}