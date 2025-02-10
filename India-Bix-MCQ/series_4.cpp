#include <iostream>
using namespace std;

int main(){
//	this series: 22, 21, 23, 22, 24, 23, ... 

   	int first_number = 22;
	int second_number = 21;

	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number+=1;
		second_number+=1;
		
	}
   
	return 0;
}
