/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <stdlib.h>
#include "myLinkedList.h"
using namespace std;

struct node {
    int data;
    struct node * next;
};

node* head;

void addNode(node* head){ 
    cout << "jcp";
    
}

void deleteNode(int n){
    struct Node*temp1 = head;
    int i;
    for (i=0; i<n-2; i++)
      temp1 = temp1->next;
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void Print();
node* createLinkedList(){
    if(head == NULL){
        head = (node*)malloc(sizeof (struct node));
    }
    else{
        return head;
    }
}
int manin (){
  head = NULL;
  
}
