#include<stdio.h>

void input(int *a,int *b)
{
  printf("Enter the numbers:\t");
  scanf("%d%d" ,a , b);
}

void add(int a, int b, int *sum)
{
  *sum=a+b;
}

void output(int a, int b, int sum)
{
  printf("sum is %d+%d=%d\n" , a,b,sum);
}

int main()
{
  int p,q,r;
  input(&p,&q);
  add(p,q,&r);
  output(p,q,r);
  return 0;
}
