
#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, ci;
    /* printf("Enter principle amount");
     scanf("%f",&p);
     printf("Enter interest rate ");
     scanf("%f",&r);
     printf("Enter time period of laon");
     scanf("%f",&t);*/
    printf("Enter P R T");
    scanf("%f%f%f", &p, &r, &t);
    ci = p * pow((1 + r / 100), t) - p;
    printf("Compound Intrest: %.2f", ci);
    return 0;   
    
}


 
 
