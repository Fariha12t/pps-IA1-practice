#include<stdio.h>
float input()
{
  float x;
  printf("Enter any number for which you want square root\n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float x)
{
  float sqrt;
  float a=x/2;
  float a2=x;
  while(a2!=a)
  {
    a2=a;
    a=((x/a)+a)/2;
  }
  return a;
}
void output(float x, float result)
{
  printf("The square root of %f is %f\n",x,result);
}
int main()
{
  float a, result;
  a=input();
  result=my_sqrt(a);
  output(a,result);
  return 0;
}