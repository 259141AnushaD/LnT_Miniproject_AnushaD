/** \brief
 *
 * \param
 * \param
 * \return
 *
 */


#ifndef __ATM_SERVICE_H__
#define __ATM_SERVICE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


#endif
