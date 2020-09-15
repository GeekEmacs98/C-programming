#include<stdio.h>

int main(void){
	
	struct data{
		char name[20];
		int age;
		char hobbies[100];
	}rec;
	printf("Unaitwa nani ?: \n");
	scanf("%s", &rec.name);
	
	printf("%s una miaka mingapi ?: \n",rec.name);
	scanf("%d", &rec.age);
	
	printf(" %s Unaweza kutuambia unapenda kufanya mambo gani yaani Hobbies ? ?: \n", rec.name);
	scanf("%s", &rec.hobbies);
	
	printf("\nUnaitwa %s, Una miaka %d na pia unapenda %s !", rec.name, rec.age, rec.hobbies);
	
	return 0;
}
