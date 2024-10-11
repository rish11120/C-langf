
#include <stdio.h>

int main() {
    int marks ;
    scanf("%d",&marks);

    if (marks >= 1 && marks < 30) {
        printf("fail\n");
    } else if (marks >= 30 && marks < 45) {
        printf("pass\n");
    } else if (marks >= 45 && marks < 60) {
        printf("avg\n");
    } else if (marks >= 60 && marks < 80) {
        printf("first\n");
    } else if (marks >= 80 && marks < 90) {
        printf("topper\n");
    } else if (marks >= 90 && marks <= 100) {
        printf("A++\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}

