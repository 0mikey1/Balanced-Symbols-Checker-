#include "balance.h"
#include <stdio.h>
#include <string.h>

int top = -1;
char stackArray[300];
int i = 0;
int o_count = 0;
int c_count = 0;

 int check(char str[]){




int j = 0;

   printf("Checking... %s   \n Opening symbols are %s  \n Closing symbols are %s  \n", str, opening_symbols, closing_symbols);
   for (i = 0; i < strlen(str); i++){
     for( j = 0; j < (strlen(opening_symbols) + strlen(closing_symbols)); j++){

       if(str[i] == opening_symbols[j]){
         Push(str[i]);
         printf("Pushed - ");
          }


       if(str[i] == closing_symbols[j]){
          for(int k = 0; k < strlen(closing_symbols); k++ ){
            if(closing_symbols[k] == closing_symbols[j]){
              c_count = k;
            }

          }

          for (int z = 0; z < strlen(opening_symbols); z++){
            if (stackArray[top] == opening_symbols[z]){
                o_count = z;
            }
          }

         if(c_count == o_count){
           Pop(str[i]);
           printf("Popped - ");
         }
       }

    }
}
      if(top == -1){
          return 1;
        } else return 0;
   }


void Push(char x){
  top++;
  stackArray[top] = x;


};

void Pop(char x){
top--;
};
