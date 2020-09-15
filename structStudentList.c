#include<stdio.h>

	
	struct students{
		char name[20];
		int age;
		int id;
	};
	
	struct students list[5];
	int a;
	
int main( void ){
		for (a = 0;a < 5; a++){
			printf("Enter your name: ");
			scanf("%s",&list[a].name);
			
			printf("Enter age: ");
			scanf("%d",&list[a].age);
			
			printf("Enter your ID #: ");
			scanf("%d",&list[a].id);
			
			printf("\n");
		}
		printf("\n\n");
		for(a=0; a < 5; a++){
			
			printf("ID #: %d\t\tName: %s \t\tAge: %d\n",list[a].id, list[a].name, list[a].age);
		}	
		
		return 0;
	
	}
