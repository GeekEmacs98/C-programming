#include<stdio.h>


//sum funtion declaration
int sum(int x, int y);

//main function
int main(){
	int x, y, result;
	y=3;
	x=5;
	result= sum(x, y);
	printf("Sum of %d and %d is %d",x, y, result);
	return 0;
}

//sum function code for task
int sum(int x, int y){
	int total;
		total = x+y;
		return (total);
}
