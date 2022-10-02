#include <stdio.h>
#include <string.h>
int main() {
    char choice;
    char transac;
    float regular=41.85;
    float premium=42.50;
    float unleaded=40.45;
    float diesel=34.15;
    float liter;
    float cash;
    char temp;

    while(1){
    printf("***********JUANA GASOLINE************\nFuel Type\t\t\t\tPrice per Liter\n[R] Regular\t\t\t\tP 41.85\n[U] Unleaded\t\t\t\tP 40.45\n[P] Premium\t\t\t\tP 42.50\n[D]Diesel\t\t\t\tP 34.15\n\nChoice:");
    scanf("%s", &choice);
        switch(choice){
            case 'R':
                //regular
                printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
                printf("\nChoice: ");
                scanf("%c", &temp);
                scanf("%s", &transac);
                switch(transac){
                    case 'C':
                        printf("Enter Cash:");
                        scanf("%f", &cash);
                        printf("Dispensed Gas: %.2fL\n", cash / regular);
                        break;
                    case 'L':
                        printf("Enter Number of liters:");
                        scanf("%f", &liter);
                        printf("Amount To Pay: P%.2f\n", liter * regular);
                        break;
                };
                break;
            case 'U':
                //Unleaded
                printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
                printf("\nChoice: ");
                scanf("%c", &temp);
                scanf("%s", &transac);
                switch(transac){
                    case 'C':
                        printf("Enter Cash:");
                        scanf("%f", &cash);
                        printf("Dispensed Gas: %.2fL\n", cash / unleaded);
                        break;
                    case 'L':
                        printf("Enter Number of liters:");
                        scanf("%f", &liter);
                        printf("Amount To Pay: P%.2f\n", liter * unleaded);
                        break;
                };
                break;
            case 'P':
                //Premium
                printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
                printf("\nChoice: ");
                scanf("%c", &temp);
                scanf("%s", &transac);
                switch(transac){
                    case 'C':
                        printf("Enter Cash:");
                        scanf("%f", &cash);
                        printf("Dispensed Gas: %.2fL\n", cash / premium);
                        break;
                    case 'L':
                        printf("Enter Number of liters:");
                        scanf("%f", &liter);
                        printf("Amount To Pay: P%.2f\n", liter * premium);
                        break;
                };
                break;
            case 'D':
                //Diesel
                printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
                printf("\nChoice: ");
                scanf("%c", &temp);
                scanf("%s", &transac);
                switch(transac){
                    case 'C':
                        printf("Enter Cash:");
                        scanf("%f", &cash);
                        printf("Dispensed Gas: %.2fL\n", cash / diesel);
                        break;
                    case 'L':
                        printf("Enter Number of liters:");
                        scanf("%f", &liter);
                        printf("Amount To Pay: P%.2f\n", liter * diesel);
                        break;
                };
                break;
        };
    }
}



