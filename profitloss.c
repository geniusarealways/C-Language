#include<stdio.h>
void main()
{
	int cp,sp;
	printf("Enter Cost Price and Selling Price of Product:");
	scanf("%d%d",&cp,&sp);
	if(sp-cp>0){printf("Profit");
	}
	if(sp==cp){printf("Neither Loss nor Profit");
	}
		else{printf("Loss");
	}
	
}
