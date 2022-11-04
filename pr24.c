#include<stdio.h>
#include<conio.h>

void main(){
    int i , n ;
    float t , sum = 0 ;
    printf("\n Enter total terms : ");
    scanf("%d", &n);
    i = 1 ;
    printf("\n first %d terms of series are : \n", n);
    while (i<=n)
    {
       printf("%5d", i*i*i);
       sum  = sum + (i * i* i);
       i++ ;
    }
    printf("\n sum of above numbers are  %f", sum);
    getch();
}