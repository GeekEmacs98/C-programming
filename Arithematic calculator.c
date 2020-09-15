/*
1.Write a C program that will ask the user to enter two integers. After that the 
program should perform the five arithmetic operations on the two integers and display the results.
*/
//solved by geekEma;
#include<stdio.h>
int main(){
	int firstNumber, secondNumber;
	int sum, subtract, multiply, divide, modulus;
	int choice;
	
	puts("\t\t\tWelcome !!\n");
	
	puts("\t\t\tThis program its Job is to perform The arithematic calculations of two integers\n\n");
	
	printf("\t\t\tEnter First Number and Second number.");
	printf("\n\n\t\t\tFirst Number: ");
	scanf("%d",&firstNumber);
	
	printf("\n\t\t\tSecond Number: ");
	scanf("%d",&secondNumber);
	
	sum = firstNumber + secondNumber;
	subtract = firstNumber - secondNumber;
	multiply = firstNumber * secondNumber;
	divide = firstNumber / secondNumber;
	modulus = firstNumber % secondNumber;
	
	puts("\n\t\t\t Answers\n\t\t _____________________");
	printf("\n\t\t\t Sum of the Two Numbers is: %d",sum);
	printf("\n\t\t\t The defference of the Two Numbers is: %d",subtract);
	printf("\n\t\t\t The Product of the Two Numbers is: %d",multiply);
	printf("\n\t\t\t The Quotient of the Two Numbers is: %d",divide);
	printf("\n\t\t\t The Modulus of the Two Numbers is: %d",modulus);
	
	puts("\n\n\n\t\t\tDone !!\n\t\t\tDid you like my code?\n\t\t\t1.Yes\n\t\t\t2.No");
	printf("\n\t\t\tEnter your choice: ");
	scanf("%d",&choice);
	if (choice == 1);
	{
		printf("\n\t\t\tThanks I appriciate it!!!");
	}
	
	return 0;
	
}


