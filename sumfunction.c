#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,result;
    printf("Enter A AND B=");
    scanf("%d%d",&a,&b);
    sum(a,b);
    printf("RESULT=%d",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}