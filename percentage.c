#include <stdio.h>
void main() {
    float totalmarks, obtainedmarks, percentage;
    float physics, chemistry, maths, english, hindi;
     printf("Enter the Physics marks: "); 
      scanf("%f", &physics);
	 printf("Enter the Chemistry marks: ");
	  scanf("%f", &chemistry);
	  printf("Enter the Mathematics marks: ");
	   scanf("%f", &maths);
	   printf("Enter the English marks: ");
	    scanf("%f", &english);
	    printf("Enter the Hindi marks: ");
	     scanf("%f", &hindi);
	     totalmarks=physics+chemistry+maths+english+hindi;
    printf("Total marks:%f",totalmarks);
	        percentage=totalmarks/5.0;
    printf("\nPercentage: %f", percentage);
}

