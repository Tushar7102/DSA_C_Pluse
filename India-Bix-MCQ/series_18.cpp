#include<iostream>
using namespace std;
int main (){
//	this series: 5.2, 4.8, 4.4, 4, ...
	
	double abc = 5.2;
	
	for(double i=1;i<=10;i++)
	{
		cout << abc << " ";
		abc -= 0.4;
	}
	return 0;
}
