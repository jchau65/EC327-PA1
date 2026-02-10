#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initializing variables
    int playerChoice; // Player's choice in int (0, 1, 2)
    int computerChoice; // Computer's choice in int (0, 1, 2)

    // Ask the user for their choice
    cout << "Choose Fire(0), Water(1), or Grass(2): ";
    cin >> playerChoice;

    // Generates a new random seed
    srand(time(0));

    // Uses modulo so that random number is only ever 0, 1 or 2
    computerChoice = rand() % 3;

    // Print computer choice
    cout << "Computer chooses: ";
    switch (computerChoice) {
        case 0:
            cout << "Fire";
            break;
        case 1:
            cout << "Water";
            break;
        case 2:
            cout << "Grass";
            break;
    }
    cout << endl;

    // Win logic
    switch (playerChoice) {
        // Player chooses fire
        case 0:
            switch (computerChoice) {
                // Computer chooses fire - fire vs. fire -> tie
                case 0:
                    cout << "You tie!";
                    break;
                // Computer chooses water - fire vs. water -> loss
                case 1:
                    cout << "You lose!";
                    break;
                // Computer chooses grass - fire vs. grass -> win
                case 2:
                    cout << "You win!";
                    break;
            }
            break;
        // Player chooses water
        case 1:
            switch (computerChoice) {
                // Computer chooses fire - water vs. fire -> win
                case 0:
                    cout << "You win!";
                    break;
                // Computer chooses water - water vs. water -> tie
                case 1:
                    cout << "You tie!";
                    break;
                // Computer chooses grass - water vs. grass -> loss
                case 2: 
                    cout << "You lose!";
                    break;
            }
            break;
        // Player chooses grass
        case 2:
            switch (computerChoice) {
                // Computer chooses fire - grass vs. fire -> loss
                case 0:
                    cout << "You lose!";
                    break;
                // Computer chooses water - grass vs. water -> win
                case 1:
                    cout << "You win!";
                    break;
                // Computer chooses grass - grass vs. grass -> tie
                case 2:
                    cout << "You tie!";
                    break;
            }
            break;
    }
}