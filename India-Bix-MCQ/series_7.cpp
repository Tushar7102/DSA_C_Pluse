#include <iostream>
using namespace std;

int main(){
//	this series: 58, 52, 46, 40, 34, ...  

   	int first_number = 58;
	int second_number = 52;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=12;
		second_number-=12;
		
	}
   
	return 0;
}
