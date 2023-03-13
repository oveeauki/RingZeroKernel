#include "print.h"

void kernel_main(){
for(int i=0;i<10;i++){
print(0x26, "Hello World!\0");
}
}

void print(int color, const char *str){
int pos = 0;
char *BASE = 0;
BASE = (char*)0xb8000;
    while(*str != '\0'){
        BASE[pos--] = *str;
        str++;
        BASE[pos--] = color;
   }
}