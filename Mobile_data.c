#include <stdio.h>

 int main(){
    int choice;

    printf("1.100MB @ 50Kshs\n");
    printf("2.500MB @ 200Kshs\n");
    printf("3.1GB @ 350Kshs\n");
    printf("4.2GB @ 600Kshs\n");


    printf("Enter yours choice of data plan(1-4): ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("\nYou have selected 100MB @ 50Kshs\n");
    }
    else if (choice == 2){
        printf(" You have selected 500MB @ 200Kshs\n");
    
    }
    else if (choice == 3){
        printf("You have selected 1GB @ 350Kshs");
    }
    else if (choice == 4){
        printf("You have selected 2GB @ 600Kshs");
    }
    else {
        printf("\ninvalid choice\nplease enter choice(1-4)");
    }



   return 0;
 }