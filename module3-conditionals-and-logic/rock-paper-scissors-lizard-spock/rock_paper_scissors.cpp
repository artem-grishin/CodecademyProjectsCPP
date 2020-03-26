#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main (int argc, char *argv[]) {
    
    //user prompt
    string user_str = "";
    cout << "Select either => Rock, Paper, Scissors, Lizard, or Spock\n";
    cin >> user_str;

    //convert string choice to int
    int user_num = 0;
    if (user_str == "Rock") user_num = 1;
    else if (user_str == "Paper") user_num = 2;
    else if (user_str == "Scissors") user_num = 3;
    else if (user_str == "Lizard") user_num = 4;
    else if (user_str == "Spock") user_num = 5;
    else cout << "Incorrect Input!" << endl;  

    //find computer's choice as int & string
    srand(time(NULL));
    int random_num = rand() % 5 + 1;
    int comp_num = random_num;
    string comp_str = "";
    if (comp_num == 1) comp_str = "Rock";
    else if (comp_num == 2) comp_str = "Paper";
    else if (comp_num == 3) comp_str = "Scissors";
    else if (comp_num == 4) comp_str = "Lizard";
    else if (comp_num == 5) comp_str = "Spock";

    //output choices of players
//    cout << user_num << endl;
    cout << "The human player chose: " << user_str << endl;
//    cout << random_num << endl;
    cout << "The computer chose: " << comp_str << endl;

    //ties
    if (user_num == comp_num) {
        cout << "We have a tie!" << endl;
    }

    //head to head evaluations
    else if (user_str == "Rock") {
        if (user_num % comp_num == 1 && (comp_num == 3 || comp_num == 4)) {
            cout << "Human Player Wins!\n";
        }
        else {
            cout << "Computer Wins!\n";
        }
    }
    else if (user_str == "Paper") {
        if ((user_num % comp_num == 0 || user_num % comp_num == 2) && (comp_num == 1 || comp_num == 5)) {
            cout << "Human Player Wins!\n";
        }
        else {
            cout << "Computer Wins!\n";
        }
    }
    else if (user_str == "Scissors") {
        if ((user_num % comp_num == 1 || user_num % comp_num == 3) && (comp_num == 2 || comp_num == 4)) {
            cout << "Human Player Wins!\n";
        }
        else {
            cout << "Computer Wins!\n";
        }
    }
    else if (user_str == "Lizard") {
        if ((user_num % comp_num == 0 || user_num % comp_num == 4) && (comp_num == 2 || comp_num == 5)) {
            cout << "Human Player Wins!\n";
        }
        else {
            cout << "Computer Wins!\n";
        }
    }
    else if (user_str == "Spock") {
        if ((user_num % comp_num == 0 || user_num % comp_num == 2) && (comp_num == 1 || comp_num == 3)) {
            cout << "Human Player Wins!\n";
        }
        else {
            cout << "Computer Wins!\n";
        }
    }
    return 0;
}
