#include<iostream>
using namespace std;
int main (){
	
//	this series: 14, 28, 20, 40, 32, 64, ...
	
	int abc = 14;
	for(int i=1;i<=10;i++)
	{
		cout << abc << " ";
		if(i%2==0){
			abc -=8;
		}
		else{
			abc*=2;
		}
	}
	return 0;
}
