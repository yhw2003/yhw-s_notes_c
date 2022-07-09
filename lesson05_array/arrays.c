#include<stdio.h>
int main()
{
  int Ints[6] = {0,1,2,3,4,5};//也可以不指定元素数，会自动指定
  for(int i=0;i<6;i++)
  {
    printf("%d",Ints[i]);
  }
  printf("\n");
  return 0;
}