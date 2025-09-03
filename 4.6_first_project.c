/*
Input 1 = a
Input 2 = b

Compare a & b, which is greater
a > b ==> a is greater
a < b ==> b is greater

Expression ==> (a > b) * a + (a < b ) * b

eg. a = 10; b = 10;

(a > b) * a = 0 * 10 = 0

(a < b) * b = 0 * 10 = 0

(a > b) * a + (a < b ) * b = 0 + 0 = 0

0 is greater.

*/

#include<stdio.h>

int a;
int b;

int main(){
    printf("User a : ");
    scanf("%d", &a);
    printf("User b : ");
    scanf("%d", &b);
    
    int result = (a > b) * a + (a < b) * b;
    printf("%d is greater.", result);
    
    return 0;
}

