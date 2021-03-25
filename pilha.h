#include<string.h>

#define MAX 50
struct Pilha
{
	int item[MAX];
	int topo;
};

// Protótipo das funções
void iniPilha(struct Pilha *ps);
bool pilhaVazia(struct Pilha *ps);
bool pilhaCheia(struct Pilha *ps);
int Push(struct Pilha *ps, int x);
int Pop(struct Pilha *ps);
int Top(struct Pilha *ps);

// Inicia uma pilha vazia
void iniPilha(struct Pilha *ps)
{
	ps->topo= -1;
}

// Verifica se a pilha está vazia
bool pilhaVazia(struct Pilha *ps)
{
	if(ps->topo == -1)
		return true;
	else
		return false;
}

// Verifica se a pilha está cheia
bool pilhaCheia(struct Pilha *ps)
{
	if(ps->topo == MAX - 1)
		return true;
	else
		return false;
}

// Inclui mais um item na pilha, caso não esteja cheia
int Push(struct Pilha *ps, int x)
{
	if(pilhaCheia(ps))
	{
		printf("overflow!!\n");
		return (0);
	}
	else
	{
		ps->topo++;
		return ps->item[ps->topo]=x;
	}
}

// Apresenta o resultado do topo e remove da pilha
int Pop(struct Pilha *ps)
{
	if(pilhaVazia(ps))
	{
		printf("underflow!!\n");
		return (0);
	}
	else		
		return (ps->item[ps->topo--]);
}

// Apresenta o resultado do topo sem remover da pilha
int Top(struct Pilha *ps)
{
	if(pilhaVazia(ps))
	{
		printf("underflow!!\n");
		return (0);
	}
	else		
		return (ps->item[ps->topo]);
}
