#include<stdio.h>
#include<string.h>

int main(){
 char name[20];
	printf("The Name is ");
	gets(name);
	fputs(name, stdout);
	return 0;
}
