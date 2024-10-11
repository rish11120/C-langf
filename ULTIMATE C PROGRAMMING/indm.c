#include<stdio.h>
int A,B;
int main()
{
    printf("Enetr a number");
    scanf("%d",&A);
    printf("new:%d,%d\n",A,B=++A);
    printf("new:%d,%d\n",A,B=--A);
    printf("new:%d,%d\n",A,B=A++);
    printf("new:%d,%d\n",A,B=A--);
    return 0;

}