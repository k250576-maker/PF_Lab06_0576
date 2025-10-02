#include <stdio.h>

int main() {
   int a,b,m=0,d=0;
   printf("Enter a number:");
   scanf("%d",&a);
   printf("Enter another number:");
   scanf("%d",&b);
   for(int i=1;i<=a;i++){
       m+=b;
   }
   while(a>=b){
        a=a-b;
        d++;
   }
    printf("multiplication is %d\n",m);
    printf("%d is division",d);
   
    return 0;
}
