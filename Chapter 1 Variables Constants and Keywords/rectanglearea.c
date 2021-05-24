// Program to calculate the area of rectangle

#include <stdio.h>

    int main(){
        int l,b,area;
        printf("Enter the Length and Breadth of rectangle: \n");
        scanf("%d%d",&l,&b);
        area = l*b;
        printf("The Area of Rectangle is : %d",area);
    return(0);
}