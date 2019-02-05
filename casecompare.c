#include<stdio.h>
#include<string.h>
main()
{
int i=0;
int j=0;
char str[20]="keerthi";
char word[20]="KeerThi";
for(i=0;(str[i]&&word[i])!=0;i++)
{
if((str[i]==word[i])||(str[i]==word[i]-32)||(str[i]==word[i]+32))
continue;
else
break;
}
if(str[i]=='\0'&&word[i]=='\0')
printf("equal \n");
else
{
printf("notequal");
}
}

