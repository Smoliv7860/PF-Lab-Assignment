#include <stdio.h>
int main()
{
	int choice;
	printf("Menu:-\n1. Burger\n2. Pizza\n3. Biryani\n4. Sandwich");
	printf("\nEnter your choice (1-4):-");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nBurger");
			break;
		case 2:
			printf("\nPizza");
			break;
		case 3:
			printf("\nBiryani");
			break;
		case 4:
			printf("\nSandwich");
			break;
		default:
			printf("Invalid Choice");
			break;	
	}
return 0;
}
