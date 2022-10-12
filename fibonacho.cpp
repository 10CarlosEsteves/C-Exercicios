#include <iostream>

using namespace std;

int Fibonacho_N(int num);

int main(){
   int numero;
   
   cout<<"Digite um numero e diremos qual numero representa na sequencia de fibonacho:";
   cin>>numero;
   
   cout<<Fibonacho_N(numero-1)<<endl;
   
   
   return 0;
}

int Fibonacho_N(int num){
	
	if(num<=0){
		return 1; 
	}
	
	else{
		return Fibonacho_N(num-1)+Fibonacho_N(num-2);
	}
	
	
}
