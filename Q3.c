#include <stdio.h>

int main() {
   int num,last,first;
   printf("Enter a number:");
   scanf("%d",&num);
   last=num%10;
   while(num>10){
       num/=10;
   }
   first=num;
   printf("Sum of first and last digit is %d",first+last);
    return 0;
}
