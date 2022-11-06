#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(){ nome = "NAO DEFINIDO"; }

Pessoa::Pessoa(string n){ nome = n;}

Pessoa::Pessoa(const Pessoa& oObjeto){ nome = oObjeto.getnome(); }

string Pessoa::getnome() const { return nome; }

void Pessoa::setnome(string n){ nome = n; }


Pessoa& Pessoa::operator= (const Pessoa& ladoDir) {  nome = ladoDir.getnome(); }

ostream& operator<<(ostream& outStream, const Pessoa& pessoaObjeto){
    outStream << "NOME DO PROPRIETARIO: ";
    outStream << pessoaObjeto.nome;
    return outStream;
}

istream& operator>>(istream& inStream, Pessoa& pessoaObjeto){
    inStream >> pessoaObjeto.nome;
    return inStream;
}
