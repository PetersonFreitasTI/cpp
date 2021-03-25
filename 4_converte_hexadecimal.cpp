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
	
	cout << "Digite um número inteiro decimal para converter em hexadecimal: ";
	cin >> x;
	
	z = x % 16; // guarda o resto da divisão
	w = x / 16; // guarda o valor inteiro do divisor
	Push(&P1, z); // empilha o resto da divisão
	
	// continua empilhando até resto igual a zero
	while(w != 0)
	{
		x = w;
		z = x % 16;
		w = x / 16;
		
		Push(&P1, z); // empilha o resto da divisão
	}
	
	// remove da pilha e inverte o valor
	while(!pilhaVazia(&P1))
	{
		x = Pop(&P1);
		
		if (x <= 9)
			cout << x;
		else {
			switch(x){
				case 10:
					cout << "A";
					break;
				case 11:
					cout <<  "B";
					break;
				case 12:
					cout << "C";
					break;
				case 13:
					cout << "D";
					break;
				case 14:
					cout << "E";
					break;
				case 15:
					cout << "F";
					break;
			}
		}
	}
	
	cout << endl;
	
	// fim
	system("PAUSE");
	return 0;
}
