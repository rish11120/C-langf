
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,r,t,ci,x;
    printf("Enter p amount, rate interest, time");
    scanf("%f%f%f",&p,&r,&t);
    x=pow(1+r/100,t);
    ci=p*x-p;
    printf("Compound Interset  is : %.2f",ci);
    
    return 0;

}


 