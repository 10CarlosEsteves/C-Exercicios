#include <iostream>

using namespace std;

int fact(int num);

int main(){
   int numero;
   
   cout<<"Digite um numero e retornaremos o fatorial:";
   cin>>numero;
   
   cout<<fact(numero);
   
   
   
   return 0;
}

int fact(int num){
	
	if(num==0){
		return 1; 
	}
	
	else{
		return fact(num-1)*num;
	}
}
