#include<stdio.h>
// #include "atm service.h"
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

int main(){
  //local declarations
  int option;
  float balance = 2000.00;
  int choose;
  bool again = true;
  while(again)
  {
    mainmenu();
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-===-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("your selection:\t");
    scanf("%d",&option);
    
    switch(option){
      case 1:
        system("CLS");
        checkbalance(balance);
        break;
        case 2:
        system("CLS");
        balance=moneyDeposit(balance);
        break;
        case 3:
        system("CLS");
        balance=moneywithdraw(balance);
        break;
        case 4:
        system("CLS");
        menuexit();
        
      default:
        errorMessage();
        break;
    }
     printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-===-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("would you like to do another transaction:\n");
    printf("<1> Yes\n");
    printf("<2> No\n");
    scanf("%d",choose);
    system("CLS");
    if(choose==2)
    {
      again = false;
      menuexit();
    }
  }
  return 0;
}
void mainMenu() {
    
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
    
}
void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----BROUGHT TO YOU BY code-projects.org-----\n");
    
    
}//exit menu

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}//error message
