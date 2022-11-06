#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "Veiculo.h"

using namespace std;


class Caminhao : public Veiculo{
	
	private:
		double capacidadeCargas;
		int    capacidadeTracao;		
		
	public:
		//Aqui se encontram os 3 construtores da classe Veiculo. responsáveis por inicializar
		//as instancias da classe Veiculo.
		//-Caminhao() é o construtor padrão, usa o construtor padrão de Veiculo, zera a capacidade
		//de cargas e zera também a capacidade de tração.
		//-Caminhao(string nF, int nC, string nP, double cC, int cT), inicializa o objeto com os 
		//valores providenciados dentro do construtor.
		//-Caminhao(const Caminhao& caminhaoObjeto) é o construtor de cópia.
		Caminhao();
		Caminhao(string nF, int nC, string nP, double cC, int cT);
		Caminhao(const Caminhao& caminhaoObjeto);
		
		
		//Encapsulamentos Acessores (Getters), use-os para acessar algum parametro da classe ou objeto.
		double getCapacidadeCargas();
		int    getCapacidadeTracao();
		
		//Encapsulamentos Mutadores (Setters), use-os para modificar algum parametro da classe ou objeto.
		void   setCapacidadeCargas(double cC);
		void   setCapacidadeTracao(int cT);
		
		//Abaixo se encontra um operador de atribuição sobrecarregado, use-o para copiar os campos
		//de um objeto para o outro
		Caminhao& operator = (const Caminhao& ladoDir);
		
		//Por fim, aqui está a sobrecarga do operador cout. Use para exibir todas as informações
		//do objeto.
		friend ostream& operator<<(ostream& outStream, const  Caminhao& caminhaoObjeto);
		
};



#endif
