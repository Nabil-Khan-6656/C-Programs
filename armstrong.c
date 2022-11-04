#include<stdio.h>
#include<conio.h>

void main(){
    int n , sum = 0 , t , rem ;
    printf("\n Enter any number : ");
    scanf("%d", &n);
    t = n ;

    while (n > 0)
    {
        rem = n % 10 ;
        sum = sum + (rem * rem * rem) ;
        n = n / 10 ;
    }

    printf("%d", sum);

    if(sum == t){
        printf("\n Given Number %d is armstrong number ", t);
    }
    else{
         printf("\n Given Number %d is not armstrong number ", t);
    }
    
}