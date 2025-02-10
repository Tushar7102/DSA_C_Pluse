#include <iostream>
using namespace std;

int main(){
//	this series: 36, 34, 30, 28, 24, ...

   	int first_number = 36;
	int second_number = 34;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=6;
		second_number-=6;
		
	}
   
	return 0;
}
