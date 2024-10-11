/*#include<stdio.h>
int main()
{
    int a,b,t;
    a=4;
    b=9;
    //
    t=a;
    //
    a=b;
    //
    b=t;
    printf("A=%d,B=%d\n",a,b);
return 0;
}*/
// ARITHMETIC

/*#include <stdio.h>

int main() {
    int a, b;

    a = 10;
    b = 20;

    a = a + b; // a now contains the sum of a and b
    b = a - b; // b now contains the original value of a
    a = a - b; // a now contains the original value of b

    printf("a = %d, b = %d\n", a, b);

    return 0;

}*/


//VARIABL METHOD
#include <stdio.h>


int main() {
    int a, b, temp;

    a = 10;
    b = 20;

    temp = a; // Store the value of a in temp
    a = b; // Assign the value of b to a
    b = temp; // Assign the value of temp (which is the original value of a) to b

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

