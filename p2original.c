#include<stdio.h>
int cmp(int a, int b, int c)
{
  if (a>b)
  {
    if (a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else
  {
    if (b>c)
    {
      return b;
    }
    else
    {
      return c;
    }
  }
}
int input()
{
  int x;
  scanf("%d", &x);
  return x;
}
void output(int a, int b, int c, int lar)
{
   printf("Greatest number among \" %d \t %d \t %d \t %d \n", a , b ,c, lar );
}
int main()
{
  int a,b,c,large;
  printf("enter three numbers:\n");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("%d is the largest of them all\n",large);
  return 0; 
}


