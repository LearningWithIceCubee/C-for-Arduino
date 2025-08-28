#include<stdio.h>

int number;
char name = 'a';

int main(){
    
    printf("Name before %c", name);
    printf("\nEnter a charactor : ");
    scanf("%c", &name);
    printf("Name after %c", name);
    
    printf("\n");
    
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("You entered the number %d", number);
    
    return 0;
}
