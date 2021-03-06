#include <stdio.h>
#include <stdlib.h>

struct Node { 
    int data; 
    struct Node *next; 
}; 

void addNode(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 

void deleteNode(struct Node **head_ref, int key) 
{ 
    // Store head node 
    struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 
void printList(struct Node *node) 
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
}

int searchNode(struct Node* head, int x) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
      
    // If key is present in current node, return true 
    if (head->data == x) 
        return 1; 
  
    // Recur for remaining list 
    return searchNode(head->next, x); 
} 

int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    addNode(&head, 7); 
    addNode(&head, 1); 
    addNode(&head, 3); 
    addNode(&head, 2); 
    printList(head); 
    printf("\n");
    deleteNode(&head, 2); //elimina el numero de la lista
    printList(head); 
    printf("\n");
    searchNode(head, 21)? printf("This number is on the list") : printf("This number is not on the list"); //busca el número en la lista
    return 0; 
}
