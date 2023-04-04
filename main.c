#include <stdio.h>
#include <stdlib.h>

#include "add.h"

int main(int argc, char** argv) {
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]); 
  
  
  if(argc != 3) {
      printf("Usage: addNums number1 number2\n");
      exit(1);
   }

   int answer = addTwoNums(num1, num2);
   printf("%d + %d =  %d.\n",num1, num2, answer);

   return 0; 
}
