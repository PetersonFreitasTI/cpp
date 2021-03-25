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
	int x, z, w;
	
	cout << "Digite um número inteiro decimal para converter em octal: ";
	cin >> x;
	
	z = x % 8; // guarda o resto da divisão
	w = x / 8; // guarda o valor inteiro do divisor
	Push(&P1, z); // empilha o resto da divisão
	
	// continua empilhando até resto igual a zero
	while(w != 0)
	{
		x = w;
		z = x % 8;
		w = x / 8;
		Push(&P1, z);
	}
	
	// remove da pilha e inverte o valor
	while(!pilhaVazia(&P1))
	{
		x = Pop(&P1);
		cout << x;
	}
	
	cout << endl;
	
	// fim
	system("PAUSE");
	return 0;
}
