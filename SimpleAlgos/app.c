#include<stdio.h>

// this is a program that checks if a number is odd or even
void main() {
     int num;
     printf("\n enter an integer: ");
     scanf("%d", &num);
     if(num % 2 == 0){
          printf("the number is an even number");
     }else{
          printf("the number is an odd number");
     }
}