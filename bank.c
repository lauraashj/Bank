#include "bank.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int is_valid_account_name (char* a){
  return a != NULL && strlen (a) >= 1;
}

int is_valid_account_num (char* a){
  int result = a != NULL && strlen (a) >= 1;
  if (result){
    int i = 0;
    while (isdigit (a[i]))
      i++;
  }
  return result;
}

int is_valid_balance (int num){
  return num >= 0;
}

account* create_account (char* acc_owner, char* acc_num, int acc_balance){
  account* a = NULL;
  if (is_valid_account_name (acc_owner) && is_valid_account_num (acc_num) && is_valid_balance (acc_balance)){
    a = malloc (sizeof(account));
    a -> owner = malloc ((strlen (acc_owner) + 1) * sizeof(char));
    strcpy (a -> owner, acc_owner);
    a -> account_num = malloc ((strlen (acc_num) + 1) * sizeof(char));
    strcpy (a -> account_num, acc_num);
    a -> balance = acc_balance;
    return a;
  }
   else {
        return NULL;
    }
}

void display_account (account* acc){
  if (acc != NULL){
    printf ("Name: %s\n", acc -> owner);
    printf ("Account Number: %s\n", acc -> account_num);
    printf ("Balance: %d\n", acc -> balance);
  }
    else{
      
  }
}

void delete_account (account* acc){
  if (acc != NULL){
    if (acc -> owner != NULL)
      free (acc -> owner);
    if (acc -> account_num)
      free (acc -> account_num);
    free (acc);
  }
    else{
    }
}

int Cash_Deposit (account* acc, int num){
  if (acc != NULL && num > 0){
         acc -> balance = (acc -> balance) + num;
          printf ("Balance: %d\n", acc -> balance);
	  
	  /*****************************************
	  should not be printing anything here.
	  */
      return 1;
  }
   else
       return 0;
  }


int Cash_Withdrawl (account* acc, int num){
  if (acc != NULL && num > 0 && acc -> balance >= num){
      acc -> balance = (acc -> balance) - num;
      printf ("Balance: %d\n", acc -> balance);
      
      /**************************
      same comment
      */
      return 1;
  }
  else
        return 0;
}