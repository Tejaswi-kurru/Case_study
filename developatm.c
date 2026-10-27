#include<stdio.h>
int main()
{
  float amount,balance;
  int choice;
  int running=1;
  printf("Enter current balance:");
  if(scanf("%f",&balance)!=1||balance<0)
  { 
    printf("\nInvalid balance input!");
    return 1;
  } 
  while(running)
  {
    printf("\nATM transactions:");
    printf("\n1.Check balance");
    printf("\n2.Cash withdrawl");
    printf("\n3.Cash deposit");
    printf("\n4.Exit the session");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {  
      case 1:
         printf("\nCurrent balance:%f",balance);
         break;
      case 2:
         printf("\nEnter withdrawl amount:");
         scanf("%f",&amount);
         if(amount<=0)
           printf("\nInvalid amount,withdrawl failed");
         else if(amount<=balance)
         {
           printf("\nWithdrawl succesfull!");
           printf("\nRemaining balance:%f",(balance-amount));
         }
         else
           printf("\nInsufficient balance!");
         break;
     case 3:
         printf("Enter deposit amount:");
         scanf("%f",amount);
         if(amount<=0)
           printf("\nInvalid amount.Deposit failed");
         else
         { 
           printf("\nDeposit successfull");
           printf("\nUpdated balance:%f",(balance+amount));
         }
         break;
     case 4:
         printf("\nThankyou for using atm,have a nice day!");
         running=0;
         break;
     default:
         printf("\nInvalid option!");
         break;
    }
  }
  return 0;
}  
  
  