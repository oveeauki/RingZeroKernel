#include "print.h"

void kernel_main(){
 const char *stra = {"hello\0"};
  print(PRINT_COLOR_BLUE,stra);
}

void print(int color,const char *str){
int pos = 0;
char *BASE = 0;
BASE = (char*)0xb8000; 
  while(*str != '\0') {
          BASE[pos++] = *str; 
          BASE[pos++] = color; 
          str++;
      }
}
