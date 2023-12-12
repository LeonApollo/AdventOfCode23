#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lng 60

int readline (char str[]) {
    int first, last, i;

    //to find 1st digit on the line
    for(i = 0; i <= lng; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            //printf("1i = %c\n", str[i]);
            first = str[i] - '0';
            break;
        }
    }

    //to find last digit on line
    for(i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] >= '0' && str[i] <= '9') {
            //printf("2i = %c\n", str[i]);
            last = str[i] - '0';
            break;
        } 
    }

    //printf("ret %d\n", (first * 10) + last);
    return (first * 10) + last;
}

int main() { 
    char str[lng];
    int sum = 0;

    //printf("0\n");
    FILE* fp = fopen("day1.txt", "r");
    //printf("1\n");

    //while (readline(fgets (str, lng, fp)) != EOF &&  strcmp(str, "") != 0) {
    for (int i = 0; i < 1000; i++) {
        fgets (str, lng, fp);
        sum += readline(str);
        //printf("sum %d\n", sum);
    }

    printf("%d\n", sum);

}