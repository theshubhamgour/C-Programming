//Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>

    int main(){
    float celcius, far;
    printf("Enter the value of celcius: \n");
    scanf("%f",&celcius);
    far= (celcius * 9/5) + 32;
    printf("The value of celcius temperature in farenheit is %f",far);
    return(0);
}