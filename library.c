#include<stdio.h>
	void reg_student(); // zthis function registers students
	void reg_book(); // This function registers Books
	void view_student(); // This function shows registered students
	void view_book(); // this function shows registered books
	
void main(){	
	int choice;

	puts("\t\t\twelcome to The libary management systems\n\t\t   What would you like to do?");
	puts("\t\t1. Register Student\n\t\t2. Register books");
	puts("\t\t3. View Registered Students \n\t\t4. View Registered books");
	puts("\t\t5. Books availabe for borrowing.\n\t\t6. Books borrowed \n\t\t7. Exit system");
	printf("\t\tEnter your choice: ");
	scanf("%c",&choice);
	
	switch(choice){
		case '1': reg_student();
			break;
		case '2': reg_book();
			break;	
	
		default: printf("\t\tTry again");
	}
	
	

}

void reg_student(){
	int student_id, age, student_reg_numb;
	char student_name;
	puts("\t\t\tREGISTER STUDENTS");
	printf("\n\t\tStudent ID: ");
	scanf("%d",&student_id);
	printf("\n\t\tStudent registration Number: ");
	scanf("%d",&student_reg_numb);
	printf("\n\t\tStudent Name: ");
	scanf("%s",&student_name);
	printf("\n\t\tAge: ");
	scanf("%d",&age); 
		
	
	 main();
	
	}
	
	void reg_book(){
	int book_id;
	char book_name, author_name;
	puts("\t\t\tREGISTER BOOKS");
	printf("\n\t\tBook ID: ");
	scanf("%d",&book_id);
	
	printf("\n\t\tBook Name: ");
	scanf("%s",&book_name);
	printf("\n\t\tBook Author: ");
	scanf("%s",&author_name);	
	
	return ;
	
	}
