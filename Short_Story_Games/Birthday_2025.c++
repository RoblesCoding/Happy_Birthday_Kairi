/*
Elias Robles
Short story game for birthday 2025 for Kairi Hamm
*/

#include <iostream>
using namespace std;

void main_menu();

//int main program
int main() {
    //Prompt Generation
    cout << "Generating story..." << endl;
    //Pull function main menu
    main_menu();
    cout << "Thank you for playing!" << endl;
    return 0;
}

void start_game_creation();

void main_menu() {
    //Begin Game
    cout << "Welcome to story game." << endl;
    cout << "Choose the following options" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
    cout << "3. Credits" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            // Start Game
            start_game_creation();
            break;
        case 2:
            // Exit
            return;
            break;
        case 3:
            // Credits
            cout << "Game created by Elias Robles" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

//Gamestate namespace to hold all variables related to the game state
namespace Gamestate {
    //Variables for character creation
    int character_Archytype;
    string Archytype_word;
    int character_motivation;
    string motivation_word;
}

void start_game();

void start_game_creation() {
    cout << "Insert the number for the corresponding option. \n" << endl;
    //Begin first character creation
    cout << "There is a world awaiting you, but does not know who you are..." << endl;
    cout << "Who are you?" << endl;
    cout << "1. Logos" << endl;
    cout << "2. Ethos" << endl;
    cout << "3. Pathos" << endl;
    int choice;
    cin >> choice;
    //
    switch (choice) {
        case 1:
            Gamestate::character_Archytype = 1;
            Gamestate::Archytype_word = "Logos";
            break;
        case 2:
            Gamestate::character_Archytype = 2;
            Gamestate::Archytype_word = "Ethos";
            break;
        case 3:
            Gamestate::character_Archytype = 3;
            Gamestate::Archytype_word = "Pathos";
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
    //Begin second character creation
    cout << "Why are you?" << endl;
    cout << "1. Honor" << endl;
    cout << "2. Progress" << endl;
    cout << "3. Survival" << endl;
    cout << "4. Stop these questions" << endl;
    //Clear choice for next input
    cin.clear();
    cin >> choice;
    switch (choice) {
        case 1:
            Gamestate::character_motivation = 1;
            Gamestate::motivation_word = "Honor";
            break;
        case 2:
            Gamestate::character_motivation = 2;
            Gamestate::motivation_word = "Progress";
            break;
        case 3:
            Gamestate::character_motivation = 3;
            Gamestate::motivation_word = "Survival";
            break;
        case 4:
            Gamestate::character_motivation = 4;
            Gamestate::motivation_word = "something beyond you...";
            break;
        default:
                cout << "Invalid choice. Please try again." << endl;
        }
    cout << "You are a " << Gamestate::Archytype_word << " motivated by " << Gamestate::motivation_word << "." << endl;
    cout << "1. Yes." << endl;
    cout << "2. No." << endl;
    cin.clear();
    
    cin >> choice;
    switch (choice) {
        case 1:
            start_game();
            break;
        case 2:
            start_game_creation();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}



void start_game() {