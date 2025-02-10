#include<iostream>
using namespace std;

int main(){
//	 this series: 80, 10, 70, 15, 60, ... 
	
	int frist_number=80;
	int second_number=10;
	
	for(int i=1;i<=10;i++)
	{
		cout << frist_number << " " << second_number  << " ";
		
		frist_number -=10;
		second_number +=5;
	}
	
	return 0;
}
