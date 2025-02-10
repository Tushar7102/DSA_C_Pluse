#include<iostream>
using namespace std;

int main(){
	//	this series: 8, 22, 8, 28, 8, ...

   	int first_number = 8;
	int second_number = 22;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number+=0;
		second_number+=6;
		
	}
	return 0;
}
