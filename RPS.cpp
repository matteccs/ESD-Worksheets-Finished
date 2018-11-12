#include <iostream>
#include <stdio.h>
#include <random>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int main() {
    ifstream file("RPS.txt");
    string myArray[3];
    if (file.is_open()) {
        for (int i = 0; i < 3; ++i) {
            file >> myArray[i];
        }
    }
    file.close();

    srand(time(NULL));

    int comp_win_tally = 0;
    int player_win_tally = 0;
    int counter = 0;

    cout << "You are going to be playing a game of Rock, Paper, Scissors against the computer.";
    cout << "\nYou have 5 games to beat the computer";

    while (true) {
        int number = rand() % 3;
        string computer_guess = myArray[number];
        string user_guess;

        cout << "\n\nComputer guess: " << endl;

        cout << "Your guess:";
        cin >> user_guess;

        if (computer_guess == "Rock" && user_guess == "Rock") {
            cout << "You draw" << endl;
        } else if (computer_guess == "Rock" && user_guess == "Scissors") {
            cout << "The computer wins\n\n";
            ++comp_win_tally;
        } else if (computer_guess == "Paper" && user_guess == "Paper") {
            cout << "You draw" << endl;
        } else if (computer_guess == "Paper" && user_guess == "Rock") {
            cout << "The computer wins\n\n";
            ++comp_win_tally;
        } else if (computer_guess == "Scissors" && user_guess == "Scissors") {
            cout << "You draw" << endl;
        } else if (computer_guess == "Scissors" && user_guess == "Paper") {
            cout << "The computer wins\n\n";
            ++comp_win_tally;
        } else {
            cout << "You win\n\n";
            ++player_win_tally;
        }

        cout << "\nYou have played " << ++counter << " game(s)" << endl;
        cout << "The computer's score is " << comp_win_tally << endl;
        cout << "Your score is " << player_win_tally << endl;

        if (counter >= 5) {
            if (comp_win_tally > player_win_tally) {
                cout << "\nUnlucky, the computer beat you";
            } else if (comp_win_tally == player_win_tally) {
                cout << "\nYou draw";
            } else if (comp_win_tally < player_win_tally) {
                cout << "\nCongratulations, you beat the computer!";
            }

            //End game logic
            break;
        }

    }
    return 0;
}
