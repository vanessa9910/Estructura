//============================================================================
// Name        : quiz.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <io.h>
using namespace std;


struct list{
	int data;
	struct list* next;
	struct list* down;
};
struct node{
	int num;
};

struct list*lista= (struct list)malloc(sizeof(struct list)); 

struct list* connect(node*node1, node*node2, list*lista){
	
	
	if(lista->data == NULL){
		lista->data = node1->num;
		lista->next = node2;
		return lista;
	}
	connect(node1,node2,lista->next);
	if (lista->down == NULL){
		lista->down == node2;
		return lista;
	}
	return lista = connect(node1,node2,lista->down);
	
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
