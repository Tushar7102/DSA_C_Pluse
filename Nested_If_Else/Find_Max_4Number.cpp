#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4;
	cout << "Enter a Number1 , Number2 , Number3 , Number4 : ";
	cin >> num1 >> num2 >> num3 >> num4;
	if(num1>num2){
		if(num1 > num3){
			if(num1 > num4){
				cout << "Number 1 is Maximum";
			}
			else{
				cout << "Number 4 is Maximum";
			}
		}
		else{
			cout << "Number 3 is Maximum";
		}
	}
	else {
		if(num2 > num3){
			if(num2 > num4){
				cout << "Number 2 is Maximum";
			}
			else{
				cout << "Number 4 is Maximum";
			}
		}
		else{
			if(num3 > num4){
				cout << "Number 3 is Maximum";
			}
			else{
				cout << "Number 4 is Maximum";
			}
		}
	}
}
