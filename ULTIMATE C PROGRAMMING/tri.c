/*#include<stdio.h>
int main ()
{
    printf("        /|\n");
    printf("       / |\n");
    printf("      /  |\n"); 
    printf("     /   |\n");
    printf("    /    |\n");
    printf("   /     |\n");
    printf("  /      |\n");
    printf(" /       |\n");
    printf("/________|\n");

    return 0;
}
#include<stdio.h>
int a,b,c;
int main()
{int a=51;
    printf("Enter Number");
    scanf("%d%d%d",&a,&b,&c);
    printf("NEter two numbeer");
    scanf("%d%d",&b,&c);
    printf("Total= %d\n",a+b+c);
    
    
    printf("Sec total:%d",a+b-c);
    return 0;
}*/
#include <stdio.h>

int a, b, c;

int main() {
    int a = 51; // Local variable 'a' initialized to 51
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c); // Reading three numbers into 'a', 'b', and 'c'
    
    printf("Enter two more numbers: ");
    scanf("%d%d", &b, &c); // Reading two more numbers into 'b' and 'c'
    
    printf("Total = %d\n", a + b + c); // Printing the sum of 'a', 'b', and 'c'
    printf("Sec total = %d\n", a + b - c); // Printing the result of 'a + b - c'
    
    return 0;
}
