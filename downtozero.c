#include<stdio.h>
#include <math.h>
#include<stdlib.h>
int cnt;
int checkone(int min)
{
	int out,one=0;
	if(min==1)
	{
		out=min-1;
		printf("out=%d\n",out);
		one++;
	}
	return one;
}

int checkprime(int min)
{
	int i;  
	for(i=2;i<=sqrt(min);i++ )
		if ( min%i == 0 )
			return 0;
	return 1;
}

int findfactorsandmin(int num)
{
	int min,i,k,quo[10],j=0;
	printf("cnt is %d\n",cnt);
	for(i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			quo[j]=num/i;
			printf("i=%d quo=%d\n",i,quo[j]);
			j++;
		}
	}
	for(k=0;k<j;k++)
		printf("quo=%d\n",quo[k]);
	min=quo[0];
	for(i=1;i<j;i++)
	{
		if(min<quo[i])
			continue;
		else
			min=quo[i];
	}
	printf("min quo=%d\n",min);
	cnt++;
	return min;
}

int function(int num)
{
	int prime,one,min,newnum;
	min=findfactorsandmin(num);
	one=checkone(min);
	if(one==1)
	{
		return cnt;
	}
	else
	{
		prime=checkprime(min);
		if(prime==1)
		{
			printf("min=%d is prime\n",min);
			newnum=min-1;
                        cnt++;
			function(newnum);
		}
		else
		{
			printf("min=%d is not prime\n",min);
			function(min);
		}
	}
}


int main()
{
	int prime,min,c,c1,num,reducenum;
	printf("enter the number\n");
	scanf("%d",&num);
	c=function(num);
	printf("actual count %d\n",c);
	printf(".................................\n");
	reducenum=num-1;
	//c1=function1(reducenum);
	//printf("number minus one count%d\n",c1);
}

