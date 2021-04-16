#include<stdio.h>

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
