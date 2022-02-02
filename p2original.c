#include<stdio.h>
int input()
{
  int n;
  printf("enter the value ");
  scanf("%d",&n);
  return n;
}
int cmp(int a, int b, int c)
{
  int largest;
  if(a>b)
        if(a>c)
          largest = a;
      else
          largest = c; 
      
 else
          if(b>c)
     
          largest = b;
    else
          largest = c;
     

 return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("largest among the %d, %d, and %d = %d\n",a,b,c,largest);
}
int main()
{
  int a, b, c, largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;

}
