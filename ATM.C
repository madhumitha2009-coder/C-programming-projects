#include<stdio.h>
int main()
 {
int pin=1234;
int enteredpin;
int choice;
float balance=5000;
float amount;

printf("=====WELCOME TO ATM=======\n");

printf("Enter your pin");
scanf("%d",&enteredpin);
if(enteredpin!=pin)
{
printf("\nInvalid pin\n");
return 0;
}

printf("\nLogin successful!\n");

do
{
printf("\n=====ATM MENU======\n");
printf("1.check balance\n");
printf("2.deposit\n");
printf("3.withdraw\n");
printf("4.Exit\n");
printf("Enter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
{
printf("balance=Rs%f\n",balance);
break;
}
case 2:
{
printf("Enter the deposit amount");
scanf("%f", &amount);
if(amount>0)
{
balance=balance+amount;
printf("money deposited successfully\n");
printf("New balance=Rs,%f",balance);
}
else
{
printf("Invalid amount\n");
}
break;
}
case 3:
{
printf("Enter Withdrawal amount");
scanf("%f",amount);
if(amount<=0)
{
printf("Invalid amount\n");
}
else if(amount<=balance)
{
balance=balance-amount;
printf("Please collect your cash\n");
printf("Remaining Balane Rs.%2f\n",balance);
}
else
{
printf("Insufficient balance!\n");
}
break;
}
case 4:
{
printf("Thank You for using our ATM!\n");
break;
}
default:
{
printf("Invalid choice!\n");
}
}
}while(choice!=4);
return 0;
}