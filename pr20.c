#include<stdio.h>
#include<conio.h>

void main(){
    int  a , b , c ;
    char oper ;
    printf("\n Enter first Number : ");
    scanf("%d", &a);
    printf("\n Enter second Number : ");
    scanf("%d", &b);
    printf("\n Enter operator : ");
    oper = getchar();
    scanf("%c", &oper);
    switch (oper)
    {
    case ('+') :
        c = a + b ;
        printf("%d", c);
        break;
    case ('-') :
        c = a - b ;
         printf("%d", c);
        break;
    case ('*') :
        c = a * b ;
         printf("%d", c);
        break;
    case ('/') :
        c = a / b ;
         printf("%d", c);
        break;
    }

}