#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int level = 0, userNum = 0, win = 0, showNum = 0, isHint = 0, rounds = 0, userScore = 0, computerScore = 0, life = 0, roundCount = 1;
string lifeBar = "\x1b[31mLIFEBAR: \x1b[0m";
char hint = 110;
char playing = 121;
bool secondLevelOpened = false;
bool draw = false;



int guessNum()
{
    srand(time(NULL));
    int hiddenNum = 0;

    if (level == 1)
    {
        hiddenNum = 1 + rand() % 9;
    }
    else if (level == 2)
    {
        hiddenNum = 10 + rand() % 90;
    }


    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mI made a number. Try to guess it!\x1b[0m\n\n";

    return hiddenNum;



}

void lifes()
{

    if (level == 1)
    {
        life = 5;
    }

    else if (level == 2)
    {
        life = 22;
    }



    for (int i = 0; i < life; i++)
    {

        lifeBar += "\x1b[31m#\x1b[0m";
    }
}

bool StartMenu()
{
    char start = 121;
    if (secondLevelOpened) level = 2;
    else level = 1;

    if (level == 1) rounds = 3;
    else rounds = 2;

    string menu = "\t\t\t\t\t-------------------------- \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t|    \x1b[32mGUESS MY NUMBER\x1b[0m     | \n \t\t\t\t\t| \x1b[36mlevel: \x1b[0m" + to_string(level) + "\t\t | \n\t\t\t\t\t| \t\t\t | \n\t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n\t\t\t\t\t-------------------------- \n\n";
    cout << menu << endl;
    cout << "\n\t\t\t\t\t\x1b[32mDo tou want to play the game?\x1b[0m\t"
        << "y/n?\n\n";
    cin >> start;
    if (start == 89) start = 121;
    if (start == 121) return true;
    else return false;

}

void endGame()
{
    int count = 0;
    system("cls");

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mGAME OVER!\x1b[0m\n\n";
    Sleep(1000);
    system("cls");

    while (count < 30)
    {
        for (int i = 0; i < 70; i++)
        {
            if (i % 2) cout << "\x1b[33m*\x1b[0m";
            else cout << "\x1b[32m*\x1b[0m";

        }
        Sleep(100);
        for (int i = 0; i < 50; i++)
        {
            if (i % 2) cout << "\x1b[33m*\x1b[0m";
            else cout << "\x1b[32m*\x1b[0m";
        }
        count++;
    }
}

void finished()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mCONGRATULATIONS!\x1b[0m\n\n";
    Sleep(1000);
    cout << "\t\t\t\t\t\x1b[34mYOU WIN!!!\x1b[0m\n\n";
    Sleep(3000);
    playing = 0;
}

void gameOver()
{
    Sleep(3000);
    system("cls");
    if (draw)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mIT IS A DRAW!\x1b[0m\n\n";
        Sleep(6000);
    }
    else if (!win)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mUnfortunately, you loose  the match.\x1b[0m\n\n";
        Sleep(6000);
    }
    else
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mYOU WIN THE MATCH!!!\x1b[0m\n\n";
        Sleep(6000);

    }
    roundCount = 1;
    win = 0;
}
void isPlay()
{
    level = 0;
    system("cls");

    if (secondLevelOpened)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mYou opened level 2! Do you want to continue?\x1b[0m\t"
            << "y/n?\n\n";
        cin >> playing;
    }

    else
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mDo you want to play again?\x1b[0m\t"
            << "y/n?\n\n";
        cin >> playing;
        if (playing == 89)
        {
            playing = 121;
        }
    }
    
    system("cls");
}

void tempResults()
{
    int tempScore = 0;

    if (lifeBar.length() > 18 && level == 1)
    {
        tempScore = (lifeBar.length() - 18) * 0.5;
        userScore += tempScore;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mYou win the round!\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mYour Score is: \x1b[0m " << tempScore << "\n"
            << "\t\t\t\t\t\x1b[34mYour Total Score is: \x1b[0m " << userScore << "\n"
            << "\t\t\t\t\t\x1b[34mComputer Total Score is: \x1b[0m " << computerScore << "\n";
        
        Sleep(5000);
        system("cls");
    }
    else if (lifeBar.length() > 18 && level == 2)
    {
        tempScore = (lifeBar.length() - 18);
        userScore += tempScore;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mYou win the round!\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mYour Score is: \x1b[0m " << tempScore << "\n"
            << "\t\t\t\t\t\x1b[34mYour Total Score is: \x1b[0m " << userScore << "\n"
            << "\t\t\t\t\t\x1b[34mComputer Total Score is: \x1b[0m " << computerScore << "\n";
        Sleep(4000);
        system("cls");
    }
    else if (lifeBar.length() == 18 && level == 1)
    {
        tempScore = life * 5;
        computerScore += tempScore;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mMaded Number was \x1b[0m" << showNum << "\n\n\n"
            << "\t\t\t\t\t\x1b[34mYou loose the round!\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mComputer Score is: \x1b[0m " << tempScore << "\n"
            << "\t\t\t\t\t\x1b[34mYour Total Score is: \x1b[0m " << userScore << "\n"
            << "\t\t\t\t\t\x1b[34mComputer Total Score is: \x1b[0m " << computerScore << "\n";
        Sleep(4000);
        system("cls");
    }
    else
    {
        tempScore = life * 10;
        computerScore += tempScore;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mMaded Number was \x1b[0m" << showNum << "\n\n\n"
            << "\t\t\t\t\t\x1b[34mYou loose the round!\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mComputer Score is: \x1b[0m " << tempScore << "\n"
            << "\t\t\t\t\t\x1b[34mYour Total Score is: \x1b[0m " << userScore << "\n"
            << "\t\t\t\t\t\x1b[34mComputer Total Score is: \x1b[0m " << computerScore << "\n";
        Sleep(4000);
        system("cls");
    }
}

void playGame()
{


    bool game = StartMenu();
    if (game)
    {
        while (rounds)
        {
            Sleep(600);
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mROUND \x1b[0m\ " <<roundCount << "\n\n";
            roundCount++;
            Sleep(2000);
            system("cls");
            rounds--;
            lifeBar = "\x1b[31mLIFEBAR: \x1b[0m";
            lifes();
            int hiddenNum = guessNum();
            showNum = hiddenNum;
            isHint = 1;
            system("cls");

            while (lifeBar.length() > 18)
            {

                userNum = 0;
                cout << lifeBar << "\n\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mEnter a number\x1b[0m ";
                switch (level)
                {
                case 1:
                    cout << "\x1b[32mfrom 1 to 10!\x1b[0m\n\n";
                    break;

                case 2:
                    cout << "\x1b[32mfrom 10 to 100!\x1b[0m\n\n";
                    break;

                }
                while (!userNum)
                {
                    cin >> userNum;
                    if (userNum == 0)
                    {
                        system("cls");
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mYou must enter a number, greater then 0.\x1b[0m\n\n";
                        Sleep(1000);
                        system("cls");
                        cin.clear();
                        cin.ignore(22, '\n');
                        cout << lifeBar << "\n\n";
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mEnter a number\x1b[0m\n\n";
                    }

                }

                if (userNum != hiddenNum)
                {
                    lifeBar = lifeBar.substr(0, lifeBar.length() - 10);
                    system("cls");
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mIt Guessed Wrong!\x1b[0m"
                        << "\n\t\t\t\t\t\x1b[32mYou have lost 1 life!\x1b[0m\n";
                    Sleep(2000);
                    system("cls");
                    if (isHint)
                    {
                        if (lifeBar.length() > 28)
                        {
                            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32m TAKE A HINT FOR 1 LIFE?\x1b[0m\t"
                                << "y/n?\n\n";
                            cin >> hint;

                            switch (hint)
                            {
                            case 121:
                                lifeBar = lifeBar.substr(0, lifeBar.length() - 10);
                                system("cls");

                                if (userNum > hiddenNum)
                                {
                                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\ " << userNum << " \x1b[32mis greater then I made...\x1b[0m";
                                    Sleep(3000);
                                    system("cls");
                                }
                                else
                                {
                                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\ " << userNum << " \x1b[32mis less then I made...\x1b[0m";
                                    Sleep(3000);
                                    system("cls");
                                }
                                isHint = 0;
                                break;
                            case 89:
                                lifeBar = lifeBar.substr(0, lifeBar.length() - 10);
                                system("cls");
                                if (userNum > hiddenNum)
                                {
                                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\ " << userNum << " \x1b[32mis greater then I made...\x1b[0m";
                                    Sleep(3000);
                                    system("cls");
                                }
                                else
                                {
                                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\ " << userNum << " \x1b[32mis less then I made...\x1b[0m";
                                    Sleep(3000);
                                    system("cls");
                                }
                                isHint = 0;
                                break;
                            }
                        }
                    }




                    system("cls");
                }
                else 
                {
                    Sleep(2000);
                    break;
                }


            }
            tempResults();

        }
        if (secondLevelOpened && userScore > computerScore)
        {
            finished();
        }
        else
        {
            if (userScore > computerScore)
            {
                secondLevelOpened = true;
                win = 1;
            }
            else if (computerScore == userScore)
            {
                draw = true;
            }
            else
            {
                userScore = 0;
                computerScore = 0;
            }
            gameOver();
            isPlay();
            draw = false;
        }

        

    }
    else playing = 0;
    
}






int main()
{
    while (playing == 121)
    { 
        playGame();
    }
    endGame();
    
}
