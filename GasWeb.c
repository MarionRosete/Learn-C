#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc < 5) {
        printf("Not enough arguments provided.\n");
        return 1;
    }

   
    char choice = argv[1][0]; // Get the choice from command-line arguments
    char transac = argv[2][0]; // Get the transaction type from command-line arguments
    float liter = atof(argv[3]); // Convert the third argument to a float
    float cash = atof(argv[4]); // Convert the fourth argument to a float

    float regular=41.85;
    float premium=42.50;
    float unleaded=40.45;
    float diesel=34.15;


    printf("***********JUANA GASOLINE************\nFuel Type\t\t\t\tPrice per Liter\n[R] Regular\t\t\t\tP 41.85\n[U] Unleaded\t\t\t\tP 40.45\n[P] Premium\t\t\t\tP 42.50\n[D]Diesel\t\t\t\tP 34.15\n");

    switch(choice){
        case 'R':
            printf("FUEL TYPE SELECTED: %c\n", choice);
            printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
            switch(transac){
                case 'C':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Dispensed Gas: %.2fL\n", cash / regular);
                    break;
                case 'L':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Amount To Pay: P%.2f\n", liter * regular);
                    break;
            }
            break;
        case 'U':
            printf("FUEL TYPE SELECTED: %c\n", choice);
            printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
            switch(transac){
                case 'C':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Dispensed Gas: %.2fL\n", cash / unleaded);
                    break;
                case 'L':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Amount To Pay: P%.2f\n", liter * unleaded);
                    break;
            }
            break;  
        case 'P':
            printf("FUEL TYPE SELECTED: %c\n", choice);
            printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
            switch(transac){
                case 'C':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Dispensed Gas: %.2fL\n", cash / premium);
                    break;
                case 'L':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Amount To Pay: P%.2f\n", liter * premium);
                    break;
            }
            break;
        case 'D':
            printf("FUEL TYPE SELECTED: %c\n", choice);
            printf("**********Transaction Type**********\n\t\t[C]Cash\n\t\t[L]Liters\n");
            switch(transac){
                case 'C':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Dispensed Gas: %.2fL\n", cash / diesel);
                    break;
                case 'L':
                    printf("TRANSACTION TYPE SELECTED: %c\n", transac);
                    printf("Amount To Pay: P%.2f\n", liter * diesel);
                    break;
            }
            break;
        
    }

    return 0;
}