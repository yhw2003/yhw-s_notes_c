#include<stdio.h>

int main()
{
  //数组和指针非常相似，
  char* c = "abcdefg\n";//等同于 char c[] = "abcdefg";
  printf(c);
  //数组实际上指向了第一个变量的地址
  int Ints[] = {1,5,3,1,5,8};
  printf("the first num of Ints = %d\n",*Ints);
  return 0;
}