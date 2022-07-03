#include<stdio.h>

int main(){
  //数字类
  short int sInt = 0;
  int intNum = 1;
  long int lInt =2;
  long long int llInt = 3;
  float fl = 0.1;
  double db = 0.2;
  long double lDb = 0.3;
  //字符类
  char a = 'a';
  char b[] = "abc";
  //布尔
  _Bool bl = 1;
  // printf("%d\n",bl);
  printf("the size of short int is %ld\n",sizeof sInt);
  printf("the size of int is %ld\n",sizeof intNum);
  printf("the size of long int is %ld\n",sizeof lInt);
  printf("the size of long long int is %ld\n",sizeof llInt);
  printf("the size of float is %ld\n",sizeof fl);
  printf("the size of double is %ld\n",sizeof db);
  printf("the size of long double is %ld\n",sizeof lDb);
  printf("the size of char is %ld\n",sizeof a);
  printf("the size of chars is %ld\n",sizeof b);
  printf("the size of _Bool is %ld\n",sizeof bl);
  return 0;
}