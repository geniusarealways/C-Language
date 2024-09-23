#include<stdio.h>
void main(){
	  int n;
	  printf("Enter Number:");
	  scanf("%d",&n);
	  if(n<0){
	  	n=n*(-1);
	  }
	  printf("Absolute value is:%d",n);
}
