#include <stdio.h>
#include <string.h>
#include "balance.h"



void pair(char str[]){

  int i = 0;
  int count = 5;

  for (i = 0; i < strlen(str); i++){
      opening_symbols[i] = str[i];
      if(i>0){
        opening_symbols[i] = str[i*4];
      }
  }

  for (i = 0; i < strlen(str); i++){
      if(i == 0){
        closing_symbols[i] = str[i+2];
      }
      else{
      closing_symbols[i] = str[i+count];
      count = count + 3;
    }
  }

for (i = 0; i < strlen(opening_symbols); i++){
  if(opening_symbols[i] == ',' || opening_symbols[i] == '\n' || opening_symbols[i] == ' ' || opening_symbols[i] == '  '){
    printf("ERROR: commas, new-lines, tabs, and whitespace characters NOT allowed.\n");
    return;
  }
}

for (i = 0; i < strlen(closing_symbols); i++){
  if(closing_symbols[i] == ',' || closing_symbols[i] == '\n' || closing_symbols[i] == ' ' || closing_symbols[i] == '  '){
    printf("ERROR: commas, new-lines, tabs, and whitespace characters NOT allowed.\n");
    return;
  }
}

}
