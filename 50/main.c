#include <stdio.h> 

int main(){
    int choice, bal = 0, amt = 0;
    printf("---: ATM :---\n");

    while(1){
        
        printf("\n1. Check Balance\n2. Withdraw Cash\n3. Deposite Cash\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 4){
            printf("Have a nice day :)\n");
            return 0;
        }

        switch (choice){
            case 1:
                printf(">> Amount: $%d\n", bal);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amt);
                (bal < amt)?printf(">> Insufficient balance: $%d!!\n", bal):printf(">> Withdraw amount: %d\n>> Amount left: %d\n", amt, bal-=amt);
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amt);
                (amt > 50000)?printf(">> Limit reached: $%d!!\n", bal):printf(">> Deposit amount: %d\n>> Total Amount: %d\n", amt, bal+=amt);
                break;

            default:
                printf(">> Invalid Input!\n");
                return -1;
        }
    }
    
    return 0;
}