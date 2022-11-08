#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Personagem{

    public:
        string nome;
        int pontosDeVida;
        int armadura;
        int municaoPlasma;
        float creditos;

        Personagem(){
            nome = "NAO_DEFINIDO";
            pontosDeVida = 0;
            armadura = 0;
            municaoPlasma = 0;
            creditos = 0.0;
        }
        Personagem(string s, int pv, int arm, int mun, float cr){
            nome = s;
            pontosDeVida = pv;
            armadura = arm;
            municaoPlasma = mun;
            creditos = cr;
        }


};

int main(){

    Personagem Isaac_Clark;

    ifstream streamDeEntrada;
    ofstream streamDeSaida;

    int opcoes;

    while(opcoes!=0){
        cout<<" BEM VINDO AO MENU  "<<endl;
        cout<<" 0 - FECHAR         "<<endl;
        cout<<" 1 - SALVAR O JOGO  "<<endl;
        cout<<" 2 - CARREGAR O JOGO"<<endl;
        cout<<" >";
        cin>>opcoes;

        if(opcoes==1){
            streamDeSaida.open("Slot1.txt");

            if(streamDeSaida.fail()){
                cout<<"ERRO FATAL AO TENTAR ABRIR O ARQUIVO"<<endl;
            }
            else{
                streamDeSaida<<Isaac_Clark.nome<<" \n"<<Isaac_Clark.pontosDeVida<<" \n"
                <<Isaac_Clark.armadura<<" \n"<<Isaac_Clark.municaoPlasma<<" \n"<< Isaac_Clark.creditos;

                cout<<"ARQUIVOS SALVOS COM SUCESSO!!!"<<endl;
            }
            streamDeSaida.close();
        }

        else if( opcoes==2){
            streamDeEntrada.open("Slot1.txt");

            if(streamDeEntrada.fail()){
                cout<<"ERRO FATAL AO TENTAR ABRIR O ARQUIVO"<<endl;
            }

            else{

                string nome;
                int pontosDeVida;
                int armadura;
                int municaoPlasma;
                float creditos;
                
                streamDeEntrada>>nome>>pontosDeVida>>armadura>>municaoPlasma>>creditos;

                cout<<"DADOS RECUPERADOS DO SLOT :"<<endl;
                cout<<"NOME: "<<nome<<endl;
                cout<<"PV : "<<pontosDeVida<<endl;
                cout<<"ARMADURA : "<<armadura<<endl;
                cout<<"MUNICOES DE PLASMA : "<<municaoPlasma<<endl;
                cout<<"CREDITOS : "<<creditos<<endl;
            }

            streamDeEntrada.close();
        }

    }

    system("pause");
}
