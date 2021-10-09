#include <stdio.h>

void printMenu(long long int iNumber) {
    printf("\n  -- 1. Enter 1 for shift \'%lld\' left with 1 bit --\n", iNumber);
    printf("\n  -- 2. Enter 2 for shift \'%lld\' right with 1 bit --\n", iNumber);
    printf("\n  -- 0. Enter 0 for quit");

    printf("\n\n -- Please, enter your choice: ");
}

int main() {

    int iChoice = 0;

    long long int iNumber = 1; //start number is 0001

    do {

        printMenu(iNumber);

        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1 : iNumber = iNumber << 1;
        break;
        case 2 :
         if(iNumber == 1) {
             printf("\n\n !! If you move 0001 in right your number will be 0000 everytime !!\n\n");
         }
         else {
            iNumber = iNumber >> 1;
         }
        break;
        case 0 : printf("  \n\n -- You quit! \n\n");
        break;
        default: printf("\n\n -- Please, enter valid choice -- \n\n");
            break;
        }

        printf("\n  -- Now your number is: %lld\n", iNumber);

    } while (iChoice != 0);

    return 0;
}
