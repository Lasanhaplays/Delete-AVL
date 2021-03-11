#include<stdio.h>
#include "avl.c"

int main()
{
	Info *tempInfo;
	AVL *avl=createAVL();

	tempInfo=createInfo(50);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(60);
  	insertAVL(&avl,tempInfo);
  	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(70);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(80);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(90);
	if(insertAVL(&avl,tempInfo))
    printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(100);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(110);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(30);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(80);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(72);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(70);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(60);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);

	tempInfo=createInfo(92);
	insertAVL(&avl,tempInfo);
	printf("\n\nNo %d inserido",tempInfo->value);
	printAVL(avl);



	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

// verificar se elemento existe
	printf("\n\n\n***2) Buscar por um elemento na Arvore AVL***");
	tempInfo=createInfo(12);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n\nElemento %d Pertence a AVL ",tempInfo->value);
	}
	tempInfo=createInfo(22);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n\nElemento %d Pertence a AVL ",tempInfo->value);
	}
	else printf("\n\nElemento %d NAO Pertence a AVL ",tempInfo->value);
	tempInfo=createInfo(92);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n\nElemento %d Pertence a AVL ",tempInfo->value);
	}
	printf("\n\n\n***3) Calcular a altura (height) da Arvore AVL***");
	printf("\n\nAltura da arvore AVL eh= %d",heightAVL(avl));

// PARA VERIFICAR A EXECUCAO DO deleteAVL, DESCOMENTAR O CODIGO A SEGUIR E
//	EXECUTAR O TESTE.


	printf("\n\n\n***9) Deletar Elementos da Arvore AVL***");
	tempInfo=createInfo(80);
	printf("\n\nDeletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

	tempInfo=createInfo(23);
	printf("\n\nDeletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

	tempInfo=createInfo(12);
	printf("\n\nDeletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

	printf("\n\n\n***10) Inserir Elementos na Arvore AVL***");
	tempInfo=createInfo(180);
	printf("\n\nInserir um elemento %d na arvore AVL\n",tempInfo->value);
	insertAVL(&avl,tempInfo);
	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

	tempInfo=createInfo(39);
	printf("\n\nInserir um elemento %d na arvore AVL\n",tempInfo->value);
	insertAVL(&avl,tempInfo);
	printf("\n\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
    printf("n %d",isAVL(avl));

}
