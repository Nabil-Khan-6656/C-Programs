#include<stdio.h>
#include<conio.h>

void main(){
    int i , n , s = 1 , t , sum = 0 ;
    printf("\n Enter total terms : ");
    scanf("%d", &n);
    i = 1 ;
    printf("\n first %d terms of series are : \n", n);
    while (i<=n)
    {
        t = 2 * (i -1);
        printf(" %5d ", t * t * s);
        sum = sum + (t * t * s);
        s = -s ;
        i++ ;
    }
    printf("\n sum of above numbers are  %d", sum);
    getch();
}