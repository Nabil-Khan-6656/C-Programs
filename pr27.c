#include<stdio.h>
#include<conio.h>

void main(){
    int i , n , f1 = 1 , f2 = 0 , f , sum = 0 , s= 1 , fact = 1;
    printf("\n Enter total terms : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++){
        f= f1 + f2 ;
        f1 = f2 ;
        f2 = f ;
        fact = fact * i ;
        sum = sum ++ * s + fact ;
        s = -s ;
    }

    printf("\n Sum of above series = %d", sum);
    getch();
}