#include<stdio.h>
#include<conio.h>

void main(){
    int i, n , f1 = 1 , f2 = 0, f = 0 ,  sum = 1 ;
    printf("\n Program to find sum of fibonacci series");
    printf("\n Enter total terms of fibonnaci series : ");
    scanf("%d", &n );
    // printf("\n First %d terms of fibonnaci series are :);
    for(i= 1 ; i<=n ; i++){
       f = f1 + f2 ;
       f1 = f2 ;
       f2 = f ;
       printf("%d \n", f);
       sum = sum + f ;
    }

    

    printf("\n Sum of the above sum of series = %d",sum);
    getch();

}