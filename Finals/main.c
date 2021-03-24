#include "Header.h"

int main()
{
    while(1)
    {
        int choice=0;
        char FileName[50];
        printf("0. Exit program.\n");
        printf("1. Enter a file name.\n");
        printf("Please, choose a command.\n");
        scanf("%d", &choice);
        if(choice == 0)
        {
           break;
        }
        else
        {
            printf("Enter file name in the following format 'Name.bin' :");
            scanf("%s", FileName);
        }
        readMemory(FileName);//Allocates memory for a 2D array and reads each element(in this case a 'Flats' structure) from the binary file, chosen by the user
        while(1)
        {
        choice = menu(); //User interface. Gets choice.
        system("cls");
        if(choice==0)
        {
            break;
        }
        switch(choice)
        {
            case 1:
                system("cls");
                enterNewResidents();//Searches if the entered apartment is empty and changes the information about it (only when empty) //Works
                break;
            case 2:
                calculateTax();//Works
                break;
            case 3:
                system("cls");
                Elevator();//Works
                break;
            case 4:
                system("cls");
                emptyApartment();//Sets count_Adults, count_Children and rent to 0 //Works
                break;
            case 5:
                system("cls");
                PrintFlats();//WORKS
                break;
            default:
                printf("Invalid command\n");
                break;
        }
        writeInfo(FileName);
        }
        free(ptr);
    }

    printf("Program exited successfully. Have a nice day");

    return 0;
}
