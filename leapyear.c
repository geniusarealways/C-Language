#include<stdio.h>
void main(){
	  int y;
	  printf("Enter Year:");
	  scanf("%d",&y);
	  if(y%4==0){
	  	printf("%d is a Leap Year",y);
	  	}
else {
	printf("%d is not a Leap Year",y);
}
}
