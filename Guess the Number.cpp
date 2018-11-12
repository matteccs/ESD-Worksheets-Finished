//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//int main() {
//
//    int target_number;
//    int user_input;
//
//    target_number = rand() % 10 + 1;
//
//
//    printf("You are going to be guessing a number between 1 and 10.");
//    printf("\n");
//    cout << target_number;
//    printf("\nPlease enter your guess:");
//
//    cin >> user_input;
//
//    if (user_input == target_number) {
//        printf("Congratulations, you have won the game.");
//    }
//    else {
//        if (user_input < target_number) {
//            printf("Your guess is lower than the target number, please guess again.");
//        }
//        else if (user_input > target_number) {
//            printf("Your guess is higher than the target number, please guess again.");
//        }
//    }
//
//
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    int target_number;
    int user_input;

    srand (time(NULL));

    target_number = rand() % 10 + 1;

    printf ("You are going to be guessing a number between 1 and 10. ");

    do {
        printf ("Your guess:");

        scanf ("%d",&user_input);

        if (user_input > 10) puts ("Your guess is above the max range. Please enter a number between 1 and 10");

        else if (user_input < 1) puts ("Your guess is below the minimum range. Please enter a number between 1 and 10");

        else if (target_number < user_input) puts ("Your guess is higher than the target number, please guess again.");

        else if (target_number > user_input) puts ("Your guess is lower than the target number, please guess again.");

    } while (target_number!=user_input);

        puts ("Congratulations, you have won the game.");

    return 0;
}