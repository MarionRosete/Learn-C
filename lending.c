#include <stdio.h>
#include <string.h>
int main() {
    int i;
    int allowedtoborrow=50;
    int choice;
    char name[allowedtoborrow][30];
    char address[allowedtoborrow][60];
    char age[allowedtoborrow][3];
    int money[allowedtoborrow];
    int monthy[allowedtoborrow];
    int size;
    int *p;
    int count=0;
    char search[30];
    char temp;
    int res;
    while(1){
    printf("***********JFQ LENDING COMPANY************ \n \t[1]Add New Borrower's Information \n \t[2]Search for Existing Borrowers\n \t[3]Display Names of All Borrowers \n");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                //name
                printf("\tEnter the name of the new borrower: ");
                scanf("%c", &temp);
                scanf("%[^\n]", name[count]);
                //address
                printf("\tEnter the New borrower’s Address:");
                scanf("%c", &temp);
                scanf("%[^\n]", address[count]);
                
                //age
                printf("\tEnter the New Borrower’s Age:");
                scanf("%c", &temp);
                scanf("%[^\n]", age[count]);
                
                //money
                printf("\tEnter the  amount of the money the borrower wishes to borrow: ");
                scanf("%c", &temp);
                scanf("%d", &money[count]);
                
                //months
                printf("\tEnter the number of months the borrower wishes to pay the money: ");
                scanf("%c", &temp);
                scanf("%d", &monthy[count]);
                count++;
            
            
                break;
            case 2:
                printf("\n \tSearch barrower's name:");
                scanf("%c", &temp);
                scanf("%[^\n]", search);
                for (i=0;i<count;i++){
                    res=strcmp(search, name[i])==0;
                    printf("\tBarrower:%s\n", search);
                    if(res==1){
                        printf("\t**************Details**************\n");
                        printf("\t\tBorrower: %s\n", name[i]);
                        printf("\t\taddress: %s\n", address[i]);
                        printf("\t\tage: %s\n", age[i]);
                        printf("\t\tMoney to borrow: %d\n", money[i]);
                        printf("\t\tMonthly: %d\n", monthy[i]);
                        
                    }else{
                        printf("\tBorrower Not Found.\n");
                    }
                }
                break;
            case 3:
                printf("\t\tTotal Number of Borrowers: %d\n", count);
                for (i=0;i<count;i++){
                    printf("\t**************Details**************\n");
                    printf("\t\tBorrower: %s\n", name[i]);
                    printf("\t\taddress: %s\n", address[i]);
                    printf("\t\tage: %s\n", age[i]);
                    printf("\t\tMoney to borrow: %d\n", money[i]);
                    printf("\t\tMonthly: %d\n", monthy[i]);
                }
        };
    }
}


