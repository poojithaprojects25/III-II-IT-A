#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
void pm();
void plus();
void divi();
int i,ch,j,l,addr=100;
char ex[10], xp[10] ,xp1[10],xp2[10],id1[5],op[5],id2[5];
void main()
{
while(1)
{
printf("\n1.assignment\n2.arithmetic\n3.relational\n4.Exit\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the expression with assignment operator:");
scanf("%s",xp);
l=strlen(xp);
xp2[0]='\0';
i=0;
while(xp[i]!='=')
{
i++;
}
strncat(xp2,xp,i);
strrev(xp);
xp1[0]='\0';
strncat(xp1,xp,l-(i+1));
strrev(xp1);
printf("Three address code:\ntemp=%s\n%s=temp\n",xp1,xp2);
break;
case 2:
printf("\nEnter the expression with arithmetic operator:");
scanf("%s",ex);
strcpy(xp,ex);
l=strlen(xp);
xp1[0]='\0';
for(i=0;i<l;i++)
{
if(xp[i]=='+'||xp[i]=='-')
{
if(xp[i+2]=='/'||xp[i+2]=='*')
{
pm();
break;
}
else
{
plus();
break;
}
}
else if(xp[i]=='/'||xp[i]=='*')
{
divi();
break;
}
}
break;
case 3:
printf("Enter the expression with relational operator");
scanf("%s%s%s",&id1,&op,&id2);
if(((strcmp(op,"<")==0)||(strcmp(op,">")==0)||(strcmp(op,"<=")==0)||(strcmp(op,">=")==0)||(strcmp(op,"==")==0)||(strcmp(op,"!=")==0))==0)
printf("Expression is error");
else
{
printf("\n%d\tif %s%s%s goto %d",addr,id1,op,id2,addr+3);
addr++;
printf("\n%d\t T:=0",addr);
addr++;
printf("\n%d\t goto %d",addr,addr+2);
addr++;
printf("\n%d\t T:=1",addr);
}
break;
case 4:
exit(0);
}
}
}
void pm()
{
strrev(xp);
j=l-i-1;
strncat(xp1,xp,j);
strrev(xp1);
         
printf("Three address code:\ntemp=%s\ntemp1=%c%ctemp\n",xp1,xp[j+1],xp[j]);
}
void divi()
{
strncat(xp1,xp,i+2);
printf("Three address code:\ntemp=%s\ntemp1=temp%c%c\n",xp1,xp[i+2],xp[i+3]);
}
void plus()
{
strncat(xp1,xp,i+2);
printf("Three address code:\ntemp=%s\ntemp1=temp%c%c\n",xp1,xp[i+2],xp[i+3]);
}



