#include<iostream>
using namespace std;

int main(){
//	 this series: 31, 29, 24, 22, 17, ...
	
	int frist_number=31;
	int second_number=29;
	
	for(int i=1;i<=10;i++)
	{
		cout << frist_number << " " << second_number  << " ";
		
		frist_number -=7;
		second_number -=7;
	}
	
	return 0;
}
