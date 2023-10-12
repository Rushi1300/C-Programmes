#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,x,x1,x2,d;
    printf("enter the value of a,b,c (ax^2+bx+c): ");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d==0){
        x=(-b)/(2*a);
        printf("Roots are equal and it is: %d",&x);
    }
    else if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots are unequal and it is: %d %d",&x1,&x2);
    
    }
    else if(d<0){
        printf("roots are imaginary");
    }
    
}