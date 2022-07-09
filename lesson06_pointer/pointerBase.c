#include<stdio.h>

int main()
{//创建指针
  int a = 0;
  int* pa = &a;
  printf("addr a = %p\n",pa);
  printf("addr pa = %p\n",&pa);
  //使用指针访问变量
  *pa = 15;
  printf("a = %d\n",a);
  printf("a = %d\n",*pa);
  return 0;
}