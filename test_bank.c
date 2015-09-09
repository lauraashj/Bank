#include "bank.h"

int main ()
{
  account* a = create_account ("Laura Johnson", "123456", 1243);
  display_account (a);
  Cash_Deposit (a, 100);
  Cash_Withdrawl (a, 100);
  delete_account (a);
  return 0;
  
  /**************************************************
  You need to do a much more thorough testing than this.
  */
}

/**********************************************
45/50 Please see my comments in your code.
*/