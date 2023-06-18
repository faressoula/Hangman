//  Hangman final project
//  Fares Soula

#include <iostream>
#include <time.h>

using namespace std;

void IntroScreen();

int main()
{

    IntroScreen();
    string CLS = "\033[2J\033[1;1H";
    string Red = "\033[31;1m";
    string Green = "\033[32;1m";
    string Yellow = "\033[33;1m";
    string Blue = "\033[34;1m";
    string Purple = "\033[35;1m";
    string Cyan = "\033[36;1m";
    string White = "\033[37;1m";
    string Default = "\033[0m";

    srand(time(NULL));

    string Phrases[4] = {"fares", "top gun", "avatar", "follow your heart"};
    string SecretPhrase = Phrases[rand() % 3];

    string GuessPhrase = SecretPhrase;
    for (int i = 0; i < GuessPhrase.size(); i++)
    {
        if (GuessPhrase[i] != ' ')
            GuessPhrase[i] = '.';
    }
    int BadGuesses = 0, Location;
    string Letter, LettersRemaining = "abcdefghijklmnopqrstuvwxyz";
    while (BadGuesses < 6 && GuessPhrase != SecretPhrase)
    {
        cout << CLS;

        if (BadGuesses == 0)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << endl;
        }

        if (BadGuesses == 1)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << Yellow << "  +---+ \n";
            cout << Yellow << "  |   | \n";
            cout << Yellow << "      |\n";
            cout << Yellow << "      | " << Red << "BAD GUESS! \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "========= \n";
            cout << endl;
        }

        if (BadGuesses == 2)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << Yellow << "  +---+ \n";
            cout << Yellow << "  |   | \n";
            cout << Yellow << "  O   | " << Red << "HELP ME PLEASE! \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "========= \n";
            cout << endl;
        }
        if (BadGuesses == 3)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << Yellow << "  +---+ \n";
            cout << Yellow << "  |   | \n";
            cout << Yellow << "  O   | \n";
            cout << Yellow << " /|   | " << Red << "OH! MY GOD! \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "========= \n";
            cout << endl;
        }
        if (BadGuesses == 4)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << Yellow << "  +---+ \n";
            cout << Yellow << "  |   | \n";
            cout << Yellow << "  O   | \n";
            cout << Yellow << " /|\\  | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "========= \n";
            cout << endl;
        }
        if (BadGuesses == 5)
        {
            cout << Green << " _                                              \n";
            cout << Green << "| |                                            \n";
            cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
            cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
            cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
            cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
            cout << Green << "                    __/ |                      \n";
            cout << Green << "                   |___/                       \n";
            cout << Yellow << "  +---+ \n";
            cout << Yellow << "  |   | \n";
            cout << Yellow << "  O   | \n";
            cout << Yellow << " /|\\  | " << Red << "I'M ABOUT TO DIE!! \n";
            cout << Yellow << " /    | \n";
            cout << Yellow << "      | \n";
            cout << Yellow << "========= \n";
            cout << endl;
        }
        if (BadGuesses == 6)
        {
        }

        cout << Default << "Hit Points = " << 60 - BadGuesses * 10 << endl;
        cout << Default << "Letters remaining: " << Green << LettersRemaining << endl;
        cout << Default << "Phrase to guess: " << GuessPhrase << endl;
        cout << Default << "Enter a letter: ";
        cin >> Letter;
        int found = LettersRemaining.find(Letter, 0);
        if (found != -1)
            LettersRemaining.replace(found, 1, " ");
        Location = SecretPhrase.find(Letter, 0);
        if (Location > SecretPhrase.size())
            BadGuesses++;
        else
            while (Location < SecretPhrase.size())
            {
                GuessPhrase.replace(Location, 1, Letter);
                Location = SecretPhrase.find(Letter, Location + 1);
            }
    }

    if (GuessPhrase == SecretPhrase)
    {
        cout << endl;
        cout << endl;

        cout << Green << "             ___________\n";
        cout << Green << "            '._==_==_=_.'\n";
        cout << Green << "            .-\:      /-.\n";
        cout << Green << "           | (|:.     |) |\n";
        cout << Green << "            '-|:.     |-'\n";
        cout << Green << "              \::.    /\n";
        cout << Green << "               '::. .'\n";
        cout << Green << "                 ) (\n";
        cout << Green << "               _.' '._\n";
        cout << endl;
        cout << endl;

        cout << Cyan << "WOOHOO YOU WON! " << endl;
        cout << Cyan << "YOU SAVED MY LIFE! THANK YOU. " << endl;
        cout << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << Red << "TRY AGAIN! NEVER GIVE UP!" << endl;
        cout << endl;
        cout << Yellow << "  +---+ \n";
        cout << Yellow << "  |   | \n";
        cout << Yellow << "  O   | \n";
        cout << Yellow << " /|\\  | \n";
        cout << Yellow << " / \\  | \n";
        cout << Yellow << "      | \n";
        cout << Yellow << "========= \n";
        cout << endl;
        cout << endl;
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
        cout << Red << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
        cout << Red << "██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀ \n";
        cout << Red << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼ \n";
        cout << Red << "███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
        cout << Red << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼ \n";
        cout << Red << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
        cout << Red << "██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼ \n";
        cout << Red << "███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄ \n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼ \n";
        cout << Red << "┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼ \n";
        cout << Red << "┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼ \n";
        cout << Red << "┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
        cout << Red << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼ \n";

        cout << endl;
    }
}

void IntroScreen()
{
    string CLS = "\033[2J\033[1;1H";
    string Red = "\033[31;1m";
    string Green = "\033[32;1m";
    string Yellow = "\033[33;1m";
    string Blue = "\033[34;1m";
    string Purple = "\033[35;1m";
    string Cyan = "\033[36;1m";
    string White = "\033[37;1m";
    string Default = "\033[0m";
    cout << endl;
    cout << endl;
    cout << flush;
    cout << Cyan << " --- Welcome to HANGMAN Game! --- \n";
    cout << endl;

    cout << Green << " _                                              \n";
    cout << Green << "| |                                            \n";
    cout << Green << "| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n";
    cout << Green << "| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n";
    cout << Green << "| | | | (_| | | | | (_| | | | | | | (_| | | | |\n";
    cout << Green << "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|\n";
    cout << Green << "                    __/ |                      \n";
    cout << Green << "                   |___/                       \n";

    cout << endl;
    cout << Default << "Please <Enter> to Begin! \n";
    cin.ignore();
}
