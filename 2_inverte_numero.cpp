#include <pilha.h>
#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	system("CLS"); //limpar a tela
	
	// Definindo o struct do header Pilha
	struct Pilha P1;
	iniPilha(&P1);	
	
	// Definindo as variaveis
	int x;
	bool b = true;
	
	// empilhamento dos números
	while (b){
		
		cout << "Digite um número inteiro decimal ou 999 para encerrar: ";
		cin >> x;
		
		if (x != 999){
			// empilha o número digitado
			Push(&P1, x);
		}
		else
			b = false;
	}
	
	// remove da pilha e inverte o valor
	while(!pilhaVazia(&P1))
	{
		x = Pop(&P1);
		cout << x << ", ";
	}
	
	cout << endl;
	
	// fim
	system("PAUSE");
	return 0;
}
