#include<stdio.h>
 
int main() {
   int i = 0;
   char ch;
 
   for (i = 0; i < 256; i++) {
      printf("%c : %d \n", ch, i);
      ch = ch + 1;
   }
}