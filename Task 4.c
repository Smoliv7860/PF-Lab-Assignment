#include <stdio.h>
int main()
{
	int rating,years;
	printf("Enter your rating");
	scanf("%d",&rating);
	printf("\nEnter your experience in years");
	scanf("%d",&years);
	if(rating==5&&years>=3){
		printf("\nYou've earned an Excellent Bonus");
	}else if(rating==4&&years>=2){
		printf("\nYou've earned a Good Bonus");
	}else if(rating==3&&years>=1){
		printf("\nYou've earned a Basic Bonus");
	}else{
		printf("\nYou've earned No Bonus");
	}
return 0;
}
