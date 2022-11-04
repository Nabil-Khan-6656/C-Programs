#include<stdio.h>
#include<conio.h>
#include<string.h>
void main (){
    int i ,len ;
    char s [30];

    printf("\n Enter any string : ");
    gets(s);
    len = strlen(s);
    printf("\n Given String %s ", s);

    for(i=0 ; i < len ; i++){
        if(s[i] > 64 && s[i] < 91){
            s[i] = s[i] + 32 ;
        }

        else if (s[i] > 96 && s[i] < 123){
            s[i] = s[i] - 32 ;
        }

    }

    printf("\n Converted String = %s", s);
    getch();
}