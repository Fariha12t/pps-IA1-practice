#include<stdio.h>

void input(int *a,int *b)
{
  printf("Enter two numbers\n");
  scanf("%d%d" , a,b);
}

void add(int a,int b, int *sum)
{
  *sum=a+b;
}

void output(int a, int b, int sum)
{
  printf("sum of %d+%d is %d\n", a,b,sum);
}

int main()
{
  int p,q,r;
  input(&p,&q);
  add(p,q,&r);
  output(p,q,r);
  return 0;
}