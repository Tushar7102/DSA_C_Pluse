#include<iostream>
using namespace std;
int main (){
//	this series: 544, 509, 474, 439, ...
	
	int abc = 544;
	
	for(int i=1;i<=10;i++)
	{
		cout << abc << " ";
		abc -= 35;
	}
	return 0;
}
