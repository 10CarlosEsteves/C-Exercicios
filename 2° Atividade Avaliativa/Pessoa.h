#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;


class Pessoa{
	
	
	private:
		string nome;
		
	public:
		
		//Aqui estão as funções construtoras, responsáveis por inicializar o objeto tipo pessoa.
		//Pessoa() inicia o objeto com o nome "NAO DEFINIDO".
		//Pessoa(string n) inicia o objeto com a string fornecida.
		//Pessoa(const  Pessoa& oObjeto) é um construtor de cópia , inicia o objeto com outro
		//objeto fornecido
		Pessoa();
		Pessoa(string n);
		Pessoa(const  Pessoa& oObjeto);

		
		//Abaixo estão as funções Getters e Setters ou Acessoras e Mutadoras, as funções podem
		//modificar ou simplismente acessar os valores do objeto.
		string getnome() const;
		void setnome(string n);
		
		
		//Abaixo se encontra um operador de atribuição sobrecarregado, use-o para copiar os campos
		//de um objeto para o outro
		Pessoa& operator= (const Pessoa& ladoDir);
		
		
		//Por fim, aqui estão a sobrecarga dos operadores cin e cout respesctivamente, use para
		//tornar mais prático as modificações ou acessos aos valores do objeto.
		friend istream& operator>>(istream& inStream, Pessoa& pessoaObjeto);
		friend ostream& operator<<(ostream& outStream, const Pessoa& pessoaObjeto);
};



#endif
