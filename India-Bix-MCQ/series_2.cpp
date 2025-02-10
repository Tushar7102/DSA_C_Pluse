#include <iostream>
using namespace std;

int main(){
//	this series: 7, 10, 8, 11, 9, 12, ...

   	int first_number = 7;
	int second_number = 10;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number++;
		second_number++;
		
	}
   
	return 0;
}
