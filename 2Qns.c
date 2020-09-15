#include<stdio.h>
//Write a C program to compute the sum of the two given integer values. If the two values are
//the same, then return triple their sum

int main(){
	int numb1, numb2, sum, tripleSum;
	printf("Enter first number: ");
	scanf("%d",&numb1);
	
	printf("Enter second number: ");
	scanf("%d",&numb2);
	
	sum = numb1 + numb2;
	tripleSum = numb1*3;
	
	if(numb1 != numb2){
		printf("The sum of the two numbers is %d", sum);
	}
	else if(numb1 == numb2){
		printf("Since the numbers are equal their Triple sum is %d",tripleSum);
	}
	
	return 0;
}
