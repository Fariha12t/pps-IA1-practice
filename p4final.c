#include<stdio.h>
int input_array_size()
{
  int k;
  printf("Enter the size of array : \n");
  scanf("%d", &k);
  return k;
}
void input_array(int m, int *a)
{
  int i;
  printf("Enter the value of array\n");
  for (  i=0; i<m; i++)
  {
    scanf("%d" , &a[i]);
  }
}
int sum_n_arrays(int m,int a[m])
{
  int i,sum;
  for( i=0; i<m; i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int m,int a[m], int sum)
{
  int i;
  for(i=0;i<m-1;i++)
  printf("%d+",a[i]);
  printf("%d=%d",a[m-1],sum);
}
int main()
{
  int n,x;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  x=sum_n_arrays(n,a);
  output(n,a,x);
  return 0;
}

