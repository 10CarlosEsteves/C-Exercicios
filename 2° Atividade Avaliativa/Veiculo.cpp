#include <iostream>
#include "Veiculo.h"

using namespace std;

Veiculo::Veiculo(){
	nomeFabrica = "NAO DEFINIDO";
	numeroCilindros = 0;
	proprietario = Pessoa();
}

Veiculo::Veiculo(string nF, int nC, string nP){
	nomeFabrica = nF;
	numeroCilindros = nC;
	proprietario = Pessoa(nP);
}

Veiculo::Veiculo(const Veiculo& veiculoObjeto){
	nomeFabrica = veiculoObjeto.nomeFabrica;
	numeroCilindros = veiculoObjeto.numeroCilindros;
	proprietario = veiculoObjeto.proprietario;
	
}

string Veiculo::getNomeFabrica(){
	return nomeFabrica;
}

int Veiculo::getNumeroCilindros(){
	return numeroCilindros;
}

string Veiculo::getDadosProprietario(){
	return proprietario.getnome();
}


void Veiculo::setNomeFabrica(string nF){
	nomeFabrica = nF;
}

void Veiculo::setNumeroCilindros(int nC){
	numeroCilindros = nC;
}

void Veiculo::setDadosProprietario(string nP){
	proprietario.setnome(nP);
}


Veiculo& Veiculo::operator=(const Veiculo& ladoDir){
	nomeFabrica = ladoDir.nomeFabrica;
	numeroCilindros = ladoDir.numeroCilindros;
	proprietario = ladoDir.proprietario;
}


istream& operator>>(istream& inStream, Veiculo& veiculoObjeto){
    
	inStream >> veiculoObjeto.nomeFabrica;
	inStream >> veiculoObjeto.proprietario;
	inStream >> veiculoObjeto.numeroCilindros;
    return inStream;
}


ostream& operator<<(ostream& outStream, const Veiculo& veiculoObjeto){
	outStream <<"---------------------------------"<<endl;
	outStream <<"NOME DA FABRICANTE : "<<veiculoObjeto.nomeFabrica<<endl;
	outStream <<"NOME DO PROPRIETARIO : "<<veiculoObjeto.proprietario.getnome()<<endl;
	outStream <<"QUANTIDADE DE CILINDROS : "<<veiculoObjeto.numeroCilindros<<endl;
	outStream <<"---------------------------------"<<endl;
    
    return outStream;
}



