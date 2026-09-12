# include <stdio.h>
int main()
{
	float balance,WithdrawlAmount;
	printf("Enter your account balance");
	scanf("%f",&balance);
	printf("\nEnter withdrawl amount");
	scanf("%f",&WithdrawlAmount);
	if(WithdrawlAmount>0&&WithdrawlAmount<=balance){
		printf("\nWithdrawl Approved");
	}else{
		printf("/nWithdrawl Denied");
	}
return 0;
}
