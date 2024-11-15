#include <stdio.h>
#include <algorithm>
#include <chrono>

//how powerful is an if statement and a while and for loop?
int main () {
   char ch;

   for(ch = 'A' ; ch <= 'L' ; ch++) {
      putchar(ch);
   }
   
   return(0);
}