typedef struct
{
  char* owner;
  char* account_num;
  int balance;
} account;

account* create_account (char* owner, char* account_num, int balance);

void display_account (account* acc);

void delete_account (account* acc);

int Cash_Deposit(account* acc, int deposit_amount);

int Cash_Withdrawl(account* acc, int withdrawl_amount);

/*****************************************
You are missing unit documentation.
*/
