%{

/*
1. Give input
2. Check num1 is even and num2 is odd or not
3. Print 
*/

#include<stdlib.h>
#include<stdio.h>

int num_1;
int num_2;
%}

number_sequence[0-9]*

%%
{number_sequence}[0|2|4|6|8] {
printf("The Length of given Even Number is %d",yyleng);
return atoi(yytext);
}

{number_sequence}[1|3|5|7|9] {
printf("The Length of given Odd Number is %d",yyleng);
return atoi(yytext);
}
%%

int yywrap(void) {}

int main() {
printf("Enter any Even number and an Odd Number: ");
num_1 = yylex();
num_2 = yylex();

if(num_1 % 2 == 0 && num_2 % 2 != 0) {
printf("\nThe given input is in the form of Even number and then odd Number");
printf("\nResult : Correct");
}

else {
printf("\nThe given input is not in the form of Even number and then Odd Number");
printf("\nResult : Incorrect");
}

return 1;
}

