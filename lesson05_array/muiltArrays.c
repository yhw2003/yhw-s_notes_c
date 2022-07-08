#include<stdio.h>

int main()
{
  printf("\n");
  int Ints[4][3] = {{0,5,6},{6,6,4},{5,8,6},{6,8,9}};
  // int Ints[4][3] = {0,5,6,6,6,4,5,8,6,6,8,9}; <=-也可
  printf("{");
  for(int i=0;i<4;i++)
  {
    printf("{");
    
    for(int j=0;j<3;j++)
    {
      printf("%d",Ints[i][j]);
    }
    printf("}");
    if (i!=3)
    {
      printf("\n");
    }
  }
  printf("}\n");
}