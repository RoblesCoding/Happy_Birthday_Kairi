/*
Elias Robles
Short story game for M6HW1
Bronze
*/

#include <iostream>
#include <string>
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
            cout << "Original story created by Kairi Hamm" << endl;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

//Hold all variables related to the game state
namespace Gamestate {
    //Variables for character creation
    int chapter_counter = 1;
    int Logos = 0;
    int Ethos = 0;
    int Pathos = 0;
    int character_EXP = 0;
    string archetype_type = "";
    int notebook = 0;
}

//This is the level up system
void leveler() {
    int level = 0;
    int leveler;
    if (Gamestate::character_EXP > level) {
        cout << "You have feel your atributes increase. +1 to any skill." << endl;
        cout << "1. Logos" << endl;
        cout << "2. Ethos" << endl;
        cout << "3. Pathos" << endl;
        cin >> leveler;

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
        level = Gamestate::character_EXP;
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
    cout << "How to you interact with the world?" << endl;
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

    cout << "You interact with the world with " << Gamestate::archetype_type << "?" << endl;
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
    cout << "\n" << endl;
    cout << "I am following the path of a woman ahead. We have been with eachother for a while, I know this to be true." << endl;
    cout << "I know her name, but cannot form it inside my mind. I moving on this world, yet I feel I am not in it." << endl;
    cout << "The stones of the mountain path are rough under my feet, the soles hurting from what feels like a long march." << endl;
    cout << "Yet only now, is there a voice inside my head alive." << endl;
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
    cout << "'Hey, you need a second?'. I hear this chirped from the woman marching in front of me." << endl;
    cout << "Almost instictually I sit down on the nearest trunk. My eyes weigh are heavy, and my feet are raw." << endl;
    cout << "She peers over at you, 'Wow. I am usually the one that collaspes like this. First time for everything.'" << endl;
    cout << "Her gear slides off her shoulders and onto the ground beneath her. She overlooks the horizons for something, before laying down." << endl;
    cout << "\n" << endl;    
    cout << "(Ethos) Thank you for providing guard." << endl;
    cout << "\n" << endl;
    cout << "The thoughts inside my head are starting to awaken. I am beginning to gain my cognition." << endl;
    cout << "\n" << endl;
    cout << "(Logos) The thoughts inside of your head, no matter how dull are starting to make its way into action." << endl;
    cout << "(Logos) You feel that you can start to speak. What is on your mind?" << endl;
    cout << "\n" << endl;

    bool gamechoice = false;

    while (!gamechoice) {
        cout << "1. What am I supposed to be doing?" << endl;
        cout << "2. What is your name?" << endl;
        cout << "3. What is my name?" << endl;
        cout << "4. What are we doing exactly?" << endl;
        cout << "5. [Continue]" << endl;

        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "'Well... you are part of our magicians guild. Thats what you have been doing for years.'" << endl;
                break;
            case 2:
                cout << "'My name is Mara, do you not remember?'" << endl;
                cout << "(Pathos) She gives you a concerned glance, as if the damage that she anticipated happened to you was undershooting." << endl;
                break;
            case 3:
                cout << "'Your name is Abner.'" << endl;
                cout << "(Pathos) you can tell that she is concerned now. The voice that she made hid fear for you." << endl;
                break;
            case 4:
                cout << "'We are trying to defeat the the local wizard gang here. We were ordered here by our guild, and sent to stop them.'" << endl;
                cout << "'However, I think there is more to this gang than we thought. It was chaos our battle, and we got out scraping by.'" << endl;
                cout << "'Listen, it rally seems like you are out of it... I think that battle did more to us than I inittialy thought.'" << endl;
                cout << "'I would reccomend to read your notes if you feel confused.'" << endl;
                cout << "The memeories of me making notes does flash into my mind again." << endl;
                cout << "As I reach into my rucksack, the texture of a leather book touches my hand as I pull it out." << endl;
                Gamestate::notebook++;
                cout << "I see a hand drawn map of where we need to go. It is very obvious because there is notes surrounding a point of interest." << endl;
                break;
            case 5:
                gamechoice = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "'Lets rest for a little bit. I need to think on where to go next." << endl;

    if (Gamestate::notebook == 1) {
        cout << "'I may have an idea on where too go.' I say this with an air of caution about my own judgement." << endl;
        cout << "As we analyize the map, we determine a good place to head too in our journey to defeat the local wizard gangs." << endl;
        cout << "And I the rest of the time, I try to remember who I am until the final light from dusk disapates." << endl;
        Gamestate::character_EXP++;
        leveler();
    }
    else {
        cout << "The rest of th time is approximating where to go, using arbitrary measurements and the sun to measure distances." << endl;
        cout << "By the time the plan has been made, the sun has set and the two of us must rest." << endl;
    }

    cout << "End Of Chapter One" << endl;

    Gamestate::chapter_counter++;

}

    //Chapter 2
    //This is the part what explains why Abner has amnesia. The pale has struck him and his mind. Find out by using the skills chosen
    //Each option in these circumstances will have a skills check. The way you distubute your skills will matter in interactions

    //Chapter 3
    //This is the part that explains the pale and explain the origion of his amnesia. He read the necronomicon of the evil of the grand wizards.
    //The pale is the collection of dead dreams and asperations. It is nuetral cloud, but it overtakes the mind.
    //Abner was able to resist by remembering who he was, and invoked his archetype_type and motivation_word
    //The conclusion should be about what to do with the book, expecially with the skills gained.