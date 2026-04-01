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

//Hold all variables related to the game state
namespace Gamestate {
    //Variables for character creation
    int chapter_counter;
    int Logos;
    int Ethos;
    int Pathos;
    int character_EXP;
    int motivation;
    string archetype_type;
    string motivation_word;

}

//This is the level up system
int leveler() {
    int old_chapter_counter = 1;
    int leveler;
    if (Gamestate::chapter_counter > old_chapter_counter) {
        cout << "You have feel your atributes increase. +1 to any skill." << endl;
        cin >> leveler;
        cout << "1. Logos" << endl;
        cout << "2. Ethos" << endl;
        cout << "3. Pathos" << endl;
        switch (leveler) {
            case 1:
                Gamestate::character_EXP++;
                Gamestate::Logos++;
                break;
            case 2:
                Gamestate::character_EXP++;
                Gamestate::Ethos++;
                break;
            case 3:
                Gamestate::character_EXP++;
                Gamestate::Pathos++;
                break;
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

//All the chapters to the story
void chapterOne();
void chapterTwo();
void chapterThree();

//This is the character creation
void start_game_creation() {
    cout << "Insert the number for the corresponding option. \n" << endl;
    //Begin first character creation
    cout << "There is a world awaiting you, but you do not know who you are..." << endl;
    cout << "Who are you?" << endl;
    cout << "1. Logos" << endl;
    cout << "2. Ethos" << endl;
    cout << "3. Pathos" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            Gamestate::Logos++;
            Gamestate::archetype_type = "Logos";
            break;
        case 2:
            Gamestate::Ethos++;
            Gamestate::archetype_type = "Ethos";
            break;
        case 3:
            Gamestate::Pathos++;
            Gamestate::archetype_type = "Pathos";
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
    //Begin second character creation
    cout << "Why are you?" << endl;
    cout << "1. Honor" << endl;
    cout << "2. Progress" << endl;
    cout << "3. Survival" << endl;
    //Clear choice for next input
    cin.clear();
    cin >> choice;
    switch (choice) {
        case 1:
            Gamestate::motivation = 1;
            Gamestate::motivation_word = "Honor";
            break;
        case 2:
            Gamestate::motivation = 2;
            Gamestate::motivation_word = "Progress";
            break;
        case 3:
            Gamestate::motivation = 3;
            Gamestate::motivation_word = "Survival";
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    cout << "You are a " << Gamestate::archetype_type << " motivated by " << Gamestate::motivation_word << "." << endl;
    cout << "1. Yes." << endl;
    cout << "2. No." << endl;
    cin.clear();
    
    cin >> choice;
    switch (choice) {
        case 1:
            chapterOne();
            break;
        case 2:
            start_game_creation();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

void chapterOne() {
    //Begin the story with Abner and Maya after an emotionally brutal battle. Maya holds herself while Abner (Player Character) is desheveled.

    Gamestate::chapter_counter++;
    chapterTwo();
}

void chapterTwo() {
    //This is the part what explains why Abner has amnesia. The pale has struck him and his mind. Find out by using the skills chosen
    //Each option in these circumstances will have a skills check. The way you distubute your skills will matter in interactions

    Gamestate::chapter_counter++;
    chapterThree();
}

void chapterThree() {
    //This is the part that explains the pale and explain the origion of his amnesia. He read the necronomicon of the evil of the grand wizards.
    //The pale is the collection of dead dreams and asperations. It is nuetral cloud, but it overtakes the mind.
    //Abner was able to resist by remembering who he was, and invoked his archetype_type and motivation_word
    //The conclusion should be about what to do with the book, expecially with the skills gained.

    if ()
}