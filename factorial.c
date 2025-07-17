#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the Factorial of a Number-");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Not Defined");
    }
   else 
   {
       int result=factorial(n);
       printf("Factorial=%d",result);
   }
    return 0;

}
int factorial(int n)
{
  if(n==0 || n==1)
  {
      return 1;
  }
  else
  {
      return n*factorial(n-1);
  }
}
