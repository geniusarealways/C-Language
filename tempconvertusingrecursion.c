#include<stdio.h>
float converttemp(float cecius);
int main()
{
    float celcius;
    printf("Enter temp in Celcius=");
    scanf("%f",&celcius);
    float fahrenite=converttemp(celcius);
    printf("TEMPERATURE IN FAHRENITE=%f",fahrenite);
    return 0;
    
}
float converttemp(float celcius)
{
    float far=celcius*(9.0/5.0)+32;
    return far;
}
