#include<stdio.h>
int main()
{
	int n,bal=1000,pin=1234,a;
	printf("WELCOME TO OUR BANK\n");
	printf("Choose any of the following options\n");
	printf("1.Deposite\n2.Withdraw\n3.Balance Enquiry\n4.Pin Change\n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	
	switch(n)
		{
			case 1:
	            printf("Plase enter your pin\n");
	            scanf("%d",&a);
	            if(a != pin)
	            {
	            	printf("Incorrect pin\nPlease restart again\n");
				}
				else
				{
				printf("You have successfully Entered your valid pin\n");
				printf("Plase enter the amount to deposite\n");
				scanf("%d",&a);
				bal = bal+a;
				printf("You have successfully credited your amount in bank\n");
				printf("You're current balance is %d\n",bal);
			    }
				break;
			case 2:
	            printf("Plase enter your pin\n");
	            scanf("%d",&a);
	            if(a != pin)
	            {
	            	printf("Incorrect pin\nPlease restart again\n");
				}
				else
				{
				printf("You have successfully Entered your valid pin\n");
				printf("Plase enter the amount to Withdraw\n");
				scanf("%d",&a);
           		if(bal < a)
           		{
				   printf("you have insufficient balance\n");	
			    }
			    bal = bal - a;
			    printf("You have siccessfully withdrawn the amount %d \n Your current balance is %d",a,bal);
			    }
				break;
			case 3:
	            printf("Plase enter your pin\n");
	            scanf("%d",&a);
	            if(a != pin)
	            {
	            	printf("Incorrect pin\nPlease restart again\n");
				}
				else
				{
				printf("You have successfully Entered your valid pin\n");
				printf("You're current balance is %d\n",bal);
			    }
			    break;
			case 4:
	            printf("Plase enter your current pin\n");
	            scanf("%d",&a);
	            if(a != pin)
	            {
	            	printf("Incorrect pin\nPlease restart again\n");
				}
				else
				{
				printf("You have successfully Entered your valid pin\n");
				printf("Plase enter valid 4 digit number to change your pin \n");
				scanf("%d",&a);
				if(a == pin)
				{
					printf("You have entered the same pin , Please restart again\n");
				}
				else
				{
				pin = a;
				printf("pin changed successfully\n");
				printf("Youre current pin is is %d\n",pin);
			    }
			    }
				break;
			default:
				printf("INVALID OPTION\n");
		}
}
