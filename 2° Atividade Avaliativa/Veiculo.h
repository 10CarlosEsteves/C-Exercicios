#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include "Pessoa.h"

using namespace std;

class Veiculo{
	
	public:
		string nomeFabrica;
		int numeroCilindros;
		Pessoa proprietario;
		
	public:
		//Aqui se encontram os 3 construtores da classe Veiculo. responsáveis por inicializar
		//as instancias da classe Veiculo.
		//-Veiculo() é o construtor padrão, inicializa o nome da fábrica como "NÃO DEFINIDO", o
		//número de cilindros como 0 e usa o construtor padrão do proprietário.
		//-Veiculo(string nF, int nC, string nP), inicializa o objeto com os valores providenciados
		//dentro do construtor.
		//-Veiculo(const Veiculo& veiculoObjeto) é o construtor de cópia.
		Veiculo();
		Veiculo(string nF, int nC, string nP);
		Veiculo(const Veiculo& veiculoObjeto);
		
		
		//Encapsulamentos Acessores (Getters), use-os para acessar algum parametro da classe ou objeto.
		string getNomeFabrica();
		int  getNumeroCilindros();
		string getDadosProprietario();
		
		
		//Encapsulamentos Mutadores (Setters), use-os para modificar algum parametro da classe ou objeto.
		void setNomeFabrica(string nF );
		void setNumeroCilindros(int nC);
		void setDadosProprietario(string nP); 
		
		
		//Abaixo se encontra um operador de atribuição sobrecarregado, use-o para copiar os campos
		//de um objeto para o outro
		Veiculo& operator= (const Veiculo& ladoDir);
		
		
		//Por fim, aqui estão a sobrecarga dos operadores cin e cout respesctivamente, use para
		//tornar mais prático as modificações ou acessos aos valores do objeto.
		
		//Tipo de Operador cin para a classe veiculo
		friend istream& operator>>(istream& inStream, Veiculo& veiculoObjeto);
		//Tipo de Operador cout para a classe veiculo
		friend ostream& operator<<(ostream& outStream, const Veiculo& veiculoObjeto);
		
};

#endif
