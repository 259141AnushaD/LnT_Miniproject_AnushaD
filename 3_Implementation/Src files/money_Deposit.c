#include"atm service.h"
/**
 * @brief 
 * 
 * @param amount 
 * @param amountd 
 * @return int 
 */
float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);
    
    
    balance += deposit;
    
    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;
    
}//money deposit
