//============================================================================
// Name        : quiz.cpp
// Author      : Vanessa Jaime
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
struct node*node1= (struct node)malloc(sizeof(struct node));
struct node*node2= (struct node)malloc(sizeof(struct node));
node1-> num = 5;
node2-> num = 3;
struct list*aabajo(list*lista){
	if (lista->down == NULL){
		lista->down == node2;
		return lista;
	}
	return lista = aabajo(ista->down);
}
struct list* connect(node*node1, node*node2, list*lista){
	
	
	if(lista->data == NULL){
		lista->data = node1->num;
		lista->next = node2;
		return lista;
	}
	lista = connect(node1,node2,lista->next);
	return aabajo(lista);
	
	
	
}
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	connect(node1,node2,lista);
	return 0;
}