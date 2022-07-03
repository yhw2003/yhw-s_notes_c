#include <stdio.h>

int main(){
  char charA = 'a';
  char charB[] = "this is a group of chars";
  printf("%c\n",charA);
  printf("%s\n",charB);
  printf("%c\n",charB[2]);
  return 0;
}