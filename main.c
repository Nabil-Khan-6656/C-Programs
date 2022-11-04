#include<stdio.h>
#include<conio.h>

void main(){
    int n , rem , rev = 0 , t   ;
    printf("\n Enter any Number : ");
    scanf("%d", &n);
    t = n ;
    while (n > 0)
    {
        rem = n % 10 ;
        rev = rem + (rev * 10);
        n = n / 10 ;
    }
    printf("\n Reverse of Number is %d", rev);
    if(rev == t){
        printf("\n Number is palindrome ");
    }

    else{
         printf("\n Number is not palindrome ");
    }


}