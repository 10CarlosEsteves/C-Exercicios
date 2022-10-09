#include <iostream>
#include <string>

using namespace std;
 
int main(){
	
	string palavra;
	char alvo;
	int ocorrencia;
	int i;
	
	cout<<"DIGITE QUALQUER COISA: "<<endl;
	getline(cin,palavra);
	

	while(palavra.length()!=0){
		
		alvo=palavra[0];
		ocorrencia=0;
		
		
		for(i=0;i<palavra.length()+1;i++){
			if(palavra[i]==alvo){
				palavra.erase(i,1);
				ocorrencia++;	
			}
		}
		
		cout<<"OCORRENCIA:"<<endl;
		cout<<alvo<<": "<<ocorrencia<<endl;
	};
	return 0;	
}
