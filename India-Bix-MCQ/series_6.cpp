#include <iostream>
using namespace std;

int main(){
//	this series: 21, 9, 21, 11, 21, 13, 21, ...  

   	int first_number = 21;
	int second_number = 9;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number+=0;
		second_number+=2;
		
	}
   
	return 0;
}
