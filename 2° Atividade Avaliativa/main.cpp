#include <iostream>
#include "Pessoa.h"
#include "Veiculo.h"
#include "Caminhao.h"

using namespace std;

/*
Crie uma classe-base chamada Veiculo que tenha o nome da fábrica (tipo string),
o número de cilindros do motor (tipo int) e o proprietário (tipo Pessoa). Crie, então,
uma classe chamada Caminhao que seja derivada de Veiculo e tenha propriedades 
adicionais, a capacidade de carga em toneladas (tipo double) e capacidade de
tração em libras (tipo int). Assegure-se de que suas classes sejam completadas
adequadamente com construtores e métodos de acesso, um operador de atribuição
sobrecarregado e um construtor de cópia.
Escreva um programa-driver (main.cpp) para testar todos os seus métodos.
Lembre-se de utilizar compilação separada.
*/

int main(){
	cout<<"-------------------------------------"<<endl;
	cout<<"HISTORIA 1"<<endl;
	
	Pessoa max("Max Verstappen"), ladrao;
	
	cout<<"Era uma vez uma pessoa chamada Max, em seu registro de carro, havia a seguinte linha: "<<endl;
	cout<<max;
	
	ladrao = max;
	cout<<"\n\nMax foi vitima de um ladrao, que roubou o registro de seu carro e escreveu o nome de max no";
	cout<<"seu proprio registro. O ladrao escreveu: "<<endl;
	cout<<ladrao;
	cout<<"\nFIM DA HISTORIA 1"<<endl;
	cout<<"-------------------------------------"<<endl;
	
	
	//INICIO DA HISTORIA 2 E UTILIZACAO COMPLETA DA BIBLIOTECA "Veiculo.h"
	cout<<"\n\nHISTORIA 2"<<endl;
	Veiculo prototipo("General Motors", 770, "GM LTDA"), aMontar, defeituoso("General Motors", 200, "GM LTDA"), perfeito = prototipo ;
	
	cout<<"Na General Motors, um prototipo eh construido e apartir dai, os demais carros devem ser"<<endl;
	cout<<"montados em cima de sua plataforma. Hoje um novo prototipo saiu e os carros devem ser  "<<endl;
	cout<<"montados em cima de suas especificacoes, aqui o novo modelo da GM: "<<endl;
	
	cout<<prototipo;
	
	cout<<"\n A GM produziu 2 carros e esta a montar o terceiro. O primeiro tem um defeito no motor"<<endl;
	cout<<"E aguarda manutencao, porem o segundo saiu de acordo com o esperado. Eis os resultados:"<<endl;
	cout<<defeituoso<<endl;
	cout<<perfeito<<endl;
	cout<<aMontar<<endl;
	
	defeituoso.setNumeroCilindros(770);
	aMontar = prototipo;
	
	cout<<"Apos a devida manutencao do motor e perfeita montagem do terceiro carro, eis os resultados"<<endl;
	cout<<"finais da linha de montagem: "<<endl;
	cout<<defeituoso<<endl;
	cout<<perfeito<<endl;
	cout<<aMontar<<endl;
	cout<<"Apos um dia exaustivo configurando as linhas de montagem, o engenheiro mecatronico volta feliz"<<endl;
	cout<<"para sua casa com a sensacao de dever cumprido"<<endl;
	cout<<"\nFIM DA HISTORIA 2"<<endl;
	cout<<"-------------------------------------"<<endl;
	
	//INICIO DA HISTÓRIA 3 E UTILIZAÇÃO COMPLETA DA BIBLIOTECA "Caminhao.h"
	cout<<"\n\nHISTORIA 3"<<endl;
	cout<<"A organizacao mae da Mercedes, Daimler-Benz, decidiu construir um caminhao, para fazer frente a volvo"<<endl;
	cout<<"As novas especificacoes do novo caminhao da mercedes foram construidas pelo time de engenharia: "<<endl;
	
	Caminhao mercedes("Mercedes", 780, "Daimler-Benz", 117, 160);
	
	cout<<mercedes<<endl;
	
	Caminhao volvo;
	cout<<"Bono, um engenheiro insatisfeito, resolveu vender em segredo o projeto para a volvo, a volvo aceitou"<<endl;
	cout<<"Sua traicao e resolveu montar um novo caminhao prototipo de linha de montagem. O resultado saiu disso: " <<endl;
	cout<<""<<endl;
	cout<<volvo<<endl;
	
	cout<<"PARA ISSO : "<<endl;
	volvo = mercedes;
	cout<<volvo<<endl;
	
	cout<<"Para nao ficar muito na cara o plagio, a volvo decidiu fazer umas modificacoes..."<<endl;
	volvo.setNomeFabrica("VOLVO");
	volvo.setNumeroCilindros(800);
	volvo.setDadosProprietario("VOLVO CARS");
	volvo.setCapacidadeCargas(150);
	volvo.setCapacidadeTracao(200);
	cout<<"O resultado final foi este: "<<endl;
	
	cout<<volvo<<endl;
	
	cout<<"\nFIM DA HISTORIA 3"<<endl;
	cout<<"-------------------------------------"<<endl;
	
	
	
	
	
		
	return 0;
}
