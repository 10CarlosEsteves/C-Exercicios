#include <iostream>

using namespace std;
 
 void Factorial(int num, int resp=1);
 
int main(){
	
	
	Factorial(7);
	return 0;	
}


void Factorial(int num, int resp){
	
	if(num!=1){
		cout<<resp*num<<endl;
		Factorial(--num, resp*num);
	}
	
}
