#include<iostream>
using namespace std;

int main(){
//	 this series: 2, 4, 6, 8, 10, ...
	
	int frist_number=2;
	int second_number=4;
	
	for(int i=1;i<=10;i++)
	{
		cout << frist_number << " " << second_number  << " ";
		
		frist_number +=4;
		second_number +=4;
	}
	
	return 0;
}
