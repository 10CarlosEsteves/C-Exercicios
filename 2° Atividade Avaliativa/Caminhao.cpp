#include <iostream>
#include "Caminhao.h"

using namespace std;

Caminhao::Caminhao():Veiculo(), capacidadeCargas(0), capacidadeTracao(0)
{}


Caminhao::Caminhao(string nF, int nC, string nP, double cC, int cT) : Veiculo(nF,nC,nP)
{
	capacidadeCargas = cC;
	capacidadeTracao = cT;
}


Caminhao::Caminhao(const Caminhao& caminhaoObjeto) : Veiculo(caminhaoObjeto){
	capacidadeCargas = caminhaoObjeto.capacidadeCargas;
	capacidadeTracao = caminhaoObjeto.capacidadeTracao;
}


double Caminhao::getCapacidadeCargas(){
	return capacidadeCargas;
}


int Caminhao::getCapacidadeTracao(){
	return capacidadeTracao;
}


void Caminhao::setCapacidadeCargas(double cC){
	capacidadeCargas = cC;
}


void Caminhao::setCapacidadeTracao(int cT){
	capacidadeTracao = cT;
}


Caminhao& Caminhao::operator=(const Caminhao& ladoDir){
	Veiculo::operator=(ladoDir);
	capacidadeCargas = ladoDir.capacidadeCargas;
	capacidadeTracao = ladoDir.capacidadeTracao;
}


ostream& operator<<(ostream& outStream,  const Caminhao& caminhaoObjeto){
	
	outStream <<"---------------------------------------"<<endl;
	outStream <<"NOME DA FABRICANTE : "<<caminhaoObjeto.nomeFabrica<<endl;
	outStream <<caminhaoObjeto.proprietario<<endl;
	outStream <<"QUANTIDADE DE CILINDROS : "<<caminhaoObjeto.numeroCilindros<<endl;
	outStream <<"CAPACIDADE DE CARGAS (Ton) : "<<caminhaoObjeto.capacidadeCargas<<endl;
	outStream <<"CAPACIDADE DE TRACAO  : "<<caminhaoObjeto.capacidadeTracao<<endl;
	outStream <<"---------------------------------------"<<endl;
}

