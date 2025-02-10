#include<iostream>
using namespace std;
int main (){
//	this series: 2, 6, 18, 54, ...
	
	int abc = 2;
	
	for(int i=1;i<=10;i++)
	{
		cout << abc << " ";
		abc *= 3;
	}
	return 0;
}
