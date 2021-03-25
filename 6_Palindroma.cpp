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
	string name1, name2;
	
	cout << "Digite uma palavra (*pode conter espaço): ";
	getline(cin,name1);
		
	l = name1.length();
	
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
		name2 += name1[x];
	}
	
	cout << "Palavra digitada: " << name1 << endl;
	cout << "Palavra invertida: " << name2 << endl;
	
	bool b = true;
	for(x=0; x < l; x++){
		if(name1[x] != name2[x]){
			b = false;
			break;
		}	
	}
	

	
	if (b)
		cout << "\nPalavra é Palindroma.";
	else
		cout << "\nInfelismente, a palavra não é Palindroma.";


	// Pula uma linha
	cout << endl << endl;
			
	// fim
	system("PAUSE");
	return 0;
}
