#include<stdio.h>

int num1 = 10;
int num2 = 15;
int num3 = 3;
int num4 = 5;

int main(){
    int add = num1 + num2;
    int minus = num2 - num1;
    int multiply = num1 * num2;
    int division = num2 / num1;
    int remain = num2 % num1;
    
    printf("Add = %d", add);
    printf("\nMinus = %d", minus);
    printf("\nMultiply = %d", multiply);
    printf("\nDivision = %d", division);
    printf("\nRemain = %d", remain);
    
    num3++; // num3 = num3 + 1;
    printf("\nNum3 = %d", num3);
    // num 3 = num4
    num3--;
    printf("\nNum3 = %d", num3);
    
    // num4 = 5;
    num4+=1; // num4 = num4 + 1;
    printf("\nNum4 = %d", num4);
    // num4 = 6
    num4-=1; // num4 = num4 - 1
    printf("\nNum4 = %d", num4);
    
    return 0;
}
