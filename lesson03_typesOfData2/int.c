#include<stdio.h>
#include<math.h>

int main(){
  long int num = pow(2,31) - 1 ;
  long int num2 = pow(2,32) - 1;
  printf("the max number of int is %ld\n",num);
  printf("the max number of unsigned int is %ld\n",num2);
}