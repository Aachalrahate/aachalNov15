#include<stdio.h>
#include<string.h>
void main()
{
	char name[10];
	printf("enter your name");
	scanf("%s",name);
	strrev(name);
	printf("%s",name);
}
