#include<stdio.h>
//指针的加减
int main()
{
  char* a = "I love the world";
  printf("The first char is %c\n",*a);
  printf("the thirt char is %c\n",*(a+2));
  //指针的加减就是往下找元素
  printf("the thirt char is %c\n",a[2]);//可以看到数组和指针高度相似
  char b[] ="Will i be loved?";
  printf("the first char is %c\n",*b);
  printf("the thirt char is %c\n",*(b+2));
  return 0;
}