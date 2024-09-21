#include<stdio.h>
void main()
{
	float a,c;
	int b;
	//a=value  b=GIF  c=FP
	printf("Enter value of a=");
	scanf("%f",&a);
	b=a;
	printf("b=%d",b);
	c=a-b;
	printf("\n Fractional Part=%f",c);
}
