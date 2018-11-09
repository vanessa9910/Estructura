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

struct list*aabajo(list*lista, node* node2){
	if (lista->down == NULL){
		list*temp = (struct node *)malloc(sizeof(struct node));
		temp->data= node2->num;
		return temp;
	}
	return lista->down = aabajo(lista->down,node2);
}
struct list* connect(node*node1, node*node2, list*lista){
	if(lista->data  == NULL){
		list*temp = (struct node *)malloc(sizeof(struct node));
		temp->data = node1->num;
		temp->next = node2;
		return temp;
	}
	lista->next = connect(node1,node2,lista->next);
	lista->down = aabajo(lista,node2);
	return lista;

}
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	connect(node1,node2,lista);
	return 0;
}
