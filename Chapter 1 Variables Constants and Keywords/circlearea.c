// Program to calculate the area of Circle

#include <stdio.h>
#include <math.h>
    int main(){
        float r,area;
        printf("Enter the radius of the circle: \n");
        scanf("%f",&r);
        area = M_PI*pow(r,2);
        printf("The area of circle is : %f",area);
    return(0);
}