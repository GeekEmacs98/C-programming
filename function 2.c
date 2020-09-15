#include<stdio.h>

int division(int a, int b);

int main(){
	int a, b, result;
	
	printf("Enter first Number");
	scanf("%d",&a);
	
	printf("Enter first Number");
	scanf("%d",&b);
	
	result = division(a, b);
	printf("the answer is %d when divided.",result);
	
	return 0;
	}
	
int division(int a, int b){
	
	 int divide;
	divide= a/b;
	return divide;
}	
