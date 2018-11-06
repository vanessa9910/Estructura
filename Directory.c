//============================================================================
// Name        : Directory.cpp
// Author      : Vanessa Jaime
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//profe tuve muchisimas dificultades para este proyecto más que nada con el manejo de las carpetas en string  y nisiquiera pude terminarlo
//al principio si jalaba en terminl y todo y meti comandos y todo bien, despues me marco el error de que estba comparndo nodes con string y ya
//no supe que onda 
//est tarea lo hice yo sola e intenté basarme lo menos posible en geek for geeks

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <io.h>
using namespace std;

//Create a program that creates a directory structure in the computer. The program should accept the following commands:

struct node
{
  int lenCarpetas;
  string data;
  struct node *Carpetas[5];
  struct node *Principal;
};

 //inicializar un nodo
node *newNode(string nameN){    //basado de geek for geeks https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

	  node*temp = (struct node *)malloc(sizeof(struct node));
	  temp->data = nameN;
	  temp->lenCarpetas = 0;
	  temp->Principal = NULL;
	  return temp;
}

node *root = newNode("C:-Users-Escritorio>");
node *actual =root;

//para imprimir  el path:

void imprPath(node *nodeN){
	if(nodeN != NULL){
		imprPath(nodeN-> Principal);
		cout<<nodeN->data<<"/";
	}

}
//crear un nuevo nodo
// mkdir - add node
int insert(string nameN)
{
	int len = actual->lenCarpetas;

	if( actual->Carpetas[0]->data == nameN ||actual->Carpetas[1]->data == nameN ||actual->Carpetas[2]->data == nameN ||actual->Carpetas[3]->data == nameN || actual->Carpetas[4]->data == nameN ||actual->Carpetas[5]->data == nameN ) {
		  cout<<"The file "<<nameN<<"already exists";
	  	  return 0;
	  }
	else if (len<5){
		  actual->Carpetas[len]= newNode(nameN);
		  actual->Carpetas[len]->data = nameN;
		  actual->lenCarpetas++;
		  return 0;
	  }

	printf("There is no space on the file");
	return 0;



}

//ls - print
int print(){
	printf("File: ");
	imprPath(actual);
	if(actual->Carpetas[0]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[0]->data;
		printf("\n");
	}
	if(actual->Carpetas[1]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[1]->data;
		printf("\n");
	}
	if(actual->Carpetas[2]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[2]->data;
		printf("\n");
	}
	if(actual->Carpetas[3]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[3]->data;
		printf("\n");
	}
	if(actual->Carpetas[4]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[4]->data;
		printf("\n");
	}

	if(actual->Carpetas[5]->data != ""){

		printf("d----      05/11/2018       10:30am   .");
		cout<<actual->Carpetas[5]->data;
		printf("\n");
	}
	return 0;

  }

//rm - delete node
struct node*deleteNode(struct node* root, string key)
{
	if (root == NULL)
		return root;
	else if(root->data == key ){
		struct node *temp = newNode("");
        free(root);
        root = temp;
        return root;
	}

	return root->Carpetas[0] = deleteNode(root->Carpetas[0],key);
	return root->Carpetas[1] = deleteNode(root->Carpetas[1],key);
	return root->Carpetas[2] = deleteNode(root->Carpetas[2],key);
	return root->Carpetas[3] = deleteNode(root->Carpetas[3],key);
	return root->Carpetas[4] = deleteNode(root->Carpetas[4],key);
	return root->Carpetas[5] = deleteNode(root->Carpetas[5],key);

};

//find - find
/*int find(string dt)
{
	//struct node*temp =actual;
	//for( )
}

//cd - abrir carpeta

*/
//main

int main(){
	//int m = 1;


	while (1){
		   string com;
			printf("C:-Vanessa-Escritorio>");
			cin>>com;
		  if(com=="mkdir"){
			string file;
			printf("C:-Vanessa-Escritorio>mkdir ");
			cin>>file;
			insert(file);
			}

		  else if(com == "ls"){
			printf("C:-Vanessa-Escritorio>ls");
			printf("\n");
			print();
			//break;
		  }
		  else if(com == "rm"){
		  	printf("C:-Vanessa-Escritorio>rm ");
		  	printf("\n");
		  	string file;
		  	cin>>file;
		  	actual = deleteNode(actual,file);
		  	//break;

		  }
		  else if(com== "find"){
			printf("C:-Vanessa-Escritorio>find ");
		  	printf("\n");
		  	//break;

		  }
		  else if(com== "cd"){
		  	printf("C:-Vanessa-Escritorio>cd");
		  	printf("\n");
		  	//break;
		  }

		  else if(com =="exit"){
		  	printf("C:-Users-Escritorio>exit");
		  	return 0;
		  }
		  else{
			printf("\nThe comand is not valid");
		  }
	  }
}
