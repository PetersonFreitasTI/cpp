#include <pilha.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	system("CLS"); //limpar a tela
	
	// Definindo o struct do header Pilha
	struct Pilha P1;
	iniPilha(&P1);	
	
	// Definindo as variaveis
	int x, l;  // x variavel e l de limite de tamanho
	string s, t;
	
	cout << "Digite uma palavra: ";
	getline(cin, s);
	
	
	l = s.length();
	
	// continua empilhando até resto igual a zero
	for(x=0; x < l; x++)
	{
		Push(&P1, x);
	}
	
	// Pula uma linha
	cout << endl;
	
	// remove da pilha e inverte o valor
	while(!pilhaVazia(&P1))
	{
		x = Pop(&P1);
		cout << s[x];
	}
	
	cout << endl;
	
	// fim
	system("PAUSE");
	return 0;
}
