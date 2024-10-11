#include<stdio.h>
int main()
{
    int cnt=2,a;
    printf("Enter a number");
    scanf("%d",&a);

    while (cnt<=a)
    {
       // scanf("%d",&a);
        printf("%d   ",cnt);
        cnt=cnt+2;
    }
return 0;    
}
