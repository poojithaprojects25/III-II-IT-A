%{
#include<stdio.h>
int v = 0;
int c = 0;
%}

%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
%%

int yywrap(void) {}

int main() {
printf("Enter the String : ");
yylex();
printf("No of Vowels = %d",v);
printf("\nNo of Consonants = %d",c);
return 0;
}
