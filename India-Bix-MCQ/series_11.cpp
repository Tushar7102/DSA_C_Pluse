#include<iostream>
using namespace std;

int main(){
//	 this series: 1.5, 2.3, 3.1, 3.9, ... 
	
	double frist_number=1.5;
	double second_number=2.3;
	
	for(double i=1;i<=10;i++)
	{
		cout << frist_number << " " << second_number  << " ";
		
		frist_number +=1.6;
		second_number +=1.6;
	}
	
	return 0;
}
