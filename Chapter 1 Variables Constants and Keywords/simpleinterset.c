/* 

Write a program to calculate simple interest for a set of values representing principle, no of years, 
and rate of interest.

*/

#include <stdio.h>

    int main(){
    int n;
    float p,r,si;
    
    printf("Enter the Principle Value: ");
    scanf("%f",&p);
    printf("Enter the Number of years: ");
    scanf("%d",&n);
    printf("Enter the Rate of intrest: ");
    scanf("%f",&r);
    
    si= (p*n*r)/100;
    printf("The Simple intrest is : %f",si);
    return(0);
}