//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float a,s1,s2,celsius;
    printf("\n\n\t\t Enter the temperatur fahrenheit:");
    scanf("\n\n\t\t %f",&a);
    s1=a-32;
    s2=s1*5;
    celsius=s2/9;
    printf("\n\n\t\t fahrenheit :%.2f ",a);
    printf("\n\n\t\t fahrenheit to celsius:%.2f",celsius);
}
