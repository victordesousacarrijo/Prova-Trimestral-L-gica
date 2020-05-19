#include <bits/stdc++.h>
using namespace std;
int main() {
        int compras, atrasos, score, sInadimplencia, sForma;
        char forma;
        double ticket;
        
        
        cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
        cout << "----------------------------" << endl;
        cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;
        cout << "Quantas compras o cliente fez no último ano? ";
        cin >> compras;
        cout << "Qual o ticket médio? ";
        cin >> ticket;
        cout << endl;
        cout << "Quantas vezes o cliente atrasou o pagamento? ";
        cin >> atrasos;
        cout << "A maioria das compras foi em dinheiro, cartão ou boleto (D/C/B)? ";
        cin >> forma;
        if(compras == 0) {
                score = 0;
        }
        else if(compras * ticket <= 3000 && compras <= 2) {
                score = 20;
        }
        else if(compras * ticket <= 3000 && compras > 2) {
                score = 40;
        }
        else if(compras > 3000) {
                score = 60;
        }
        cout << endl;
        cout << "Score do volume de compras: " << score << endl;
        if(atrasos > 1 || compras == 0) {
                sInadimplencia = 0;
        } 
        else if(atrasos == 1) {
                sInadimplencia = 15;
        } 
        else if(atrasos == 0 && compras > 0) {
                sInadimplencia = 30;
        }

        if(forma == 'D') { 
                sForma = 5;
        } 
        else if (forma == 'C' || forma == 'B') {
                sForma = 10;
        }

        cout << "Score de inadimplência: " << sInadimplencia << endl;
        cout << "Score de forma de pagamento: " << sForma << endl;
         if(score + sInadimplencia + sForma <= 25) {
                cout << "Classificação final: CLIENTE BRONZE" << endl;
        } 
        else if(score + sInadimplencia + sForma <= 75) {
                cout << "Classificação final: CLIENTE PRATA" << endl;
        }
        else {
                cout << "Classificação final: CLIENTE OURO" << endl;
        }
}
