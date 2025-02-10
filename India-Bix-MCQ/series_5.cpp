#include <iostream>
using namespace std;

int main(){
//	this series:53, 53, 40, 40, 27, 27, ...  

   	int first_number = 53;
	int second_number = 53;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=13;
		second_number-=13;
		
	}
   
	return 0;
}
