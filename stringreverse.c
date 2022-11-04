#include<stdio.h>
#include<conio.h>
#include<string.h>

void main (){
    char s1[50];
    printf("\n Enter a string : ");
    scanf("%s",&s1);
    strrev(s1);
    printf("%s",s1);
}