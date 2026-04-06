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
            cout << "Origional story created by Kairi Hamm" << endl;
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
    cout << "I am following the path of a woman ahead. We have been with eachother for a while, I know this to be true." << endl;
    cout << "I know her name, but cannot form it inside my mind. I moving in this world, yet not concious." << endl;
    cout << "The stones of the mountain path are rough under my feet, the soles hurting from what feels like a march." << endl;
    cout << "Yet only now, is there a voice inside my head narrating." << endl;
    cout << "The inside of head my hurts, and the more I think the deeper my eyes burn." << endl;
    cout << "\n" << endl;

    if (Gamestate::Logos == 1) {
        cout << "(Logos) Keep Thinking. Why are you following this person." << endl;
    }
    else if (Gamestate::Ethos == 1) {
        cout << "(Ethos) Who are you following? Why are you following this person?" << endl;
    }
    else if(Gamestate::Pathos == 1) {
        cout << "(Pathos) How do you know this person? Why are you following?" << endl;
    }

    cout << "\n" << endl;
    cout << "I do not know why I am following her, but I must find out." << endl;
    cout << "I recollect on what has happened between this moment and what I was doing before." << endl;
    cout << "Yet, all that I am met with is a patchwork of memories. Large gapping holes inside my memory, as if there was a smog." << endl;
    cout << "I reflect harder, the inside of my skull pulsating from the thoughts, along with the bruised feet that I can now articulate..." << endl;
    cout << "Yet nothing of what led to our march or even what this march means appears in my mind." << endl;
    cout << "\n" << endl;

    if (Gamestate::Logos == 1) {
        cout << "(Logos) You have known her for over ten years." << endl;
    }
    else if (Gamestate::Ethos == 1) {
        cout << "(Ethos) You are her battle partner." << endl;
    }
    else if(Gamestate::Pathos == 1) {
        cout << "(Pathos) You are her best friend." << endl;
    }

    cout << "\n" << endl;
    cout << "'Hey, you are looking bruised, you need a second?'. I hear this chirped from the woman marching in front of me." << endl;
    cout << "Almost instictually I sit down on the nearest trunk. My eyes weight too much to lift, and my feet are raw." << endl;
    cout << "She peers over at you, 'Wow. I am usually the one that collaspes like this. First time for everything.'" << endl;
    cout << "Her gear slides off her shoulders and onto the ground beneath her. She overlooks the horizons for something, before laying down." << endl;
    cout << "\n" << endl;    
    cout << "(Ethos) Thank you for providing guard." << endl;
    cout << "\n" << endl;
    cout << "The thoughts inside my head are starting to awaken. I am beginning to gain my cognition." << endl;
    
    cout << "(Logos) The thoughts inside of your head, no matter how dull are starting to make its way into action." << endl;
    cout << "(Logos) You feel that you can start to speak. What is on your mind?" << endl;

    bool gamechoice = false;

    while (!gamechoice) {
        cout << "1. What am I doing here?" << endl;
        cout << "2. What is your name?" << endl;
        cout << "3. What is my name?" << endl;
        cout << "4. What are we doing exaclty exactly?" << endl;
        cout << "5. [Continue]" << endl;

        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Well, we are " << endl;
                gamechoice = true;
                continue;
            case 2:
                cout << "My name is Mara, do you not remember?" << endl;
                cout << "(Pathos) She gives you a concerned glance, as if the damage that she anticipated happened to you was undershooting." << endl;
                gamechoice = true;
                continue;
            case 3:
                cout << "Your name is Abner." << endl;
                cout << "(Pathos) you can tell that she is concerned now. The voice that exited out of her diaphram was that of well hid fear." << endl;
                gamechoice = true;
                continue;
            case 4:
                cout << "We are trying to defeat the magician mafia. We were sent her by the [magicain order that is in the story]" << endl;
                gamechoice = true;
                continue;
            case 5:
                gamechoice = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;

        }

    }
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

}