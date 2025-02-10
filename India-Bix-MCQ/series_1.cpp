#include<iostream>
using namespace std;

int main(){
//	this series: 2, 1, (1/2), (1/4), ...

   	int first_number = 2;
	int n = 2;
	cout << first_number << " "<< "1" << " ";
	
	for(int i = 1;i<=10;i++)
	{
		cout << "1/" << n << " ";
		n*=2;
	}
	return 0;
}
