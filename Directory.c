//Perla Vanessa Jaime Gaytán             
//A00344428
#include<stdio.h>
//Create a program that creates a directory structure in the computer. The program should accept the following commands:
// mkdir - add node


//ls - print

//rm - delete node

//find - find

//cd - abrir carpeta


//main
int main(){
  while (1){
      char comand[6];
      printf("Enter a comand: ");
      scanf("%s",comand);
      printf("\nComando: %s",comand);
      if (comand == "mkdir"){
      }
      else if(comand == "ls"){
      }
      else if(comand == "rm"){
      }
      else if(comand == "find"){
      }
      else if(comand == "cd"){
      }

      else if(comand =="exit"){
        return 0;
      }
      else{
        printf("\nThe comand is not valid");
      }
  }
}
