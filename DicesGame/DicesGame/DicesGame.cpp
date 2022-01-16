#include <iostream>
#include <Windows.h>
using namespace std;

class dices
{
public:
    int roll()
    {
        srand(time(NULL));
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;


        for (int i = 0; i <= 10; i++)
        {
            if (i == 10) {
                cout << "#" << "\n\n";
                break;
            }
            Sleep(200);
            cout << "#";
            
        }
        switch (dice1)
        {
        case 1:
            Sleep(600);
            cout << diceOne << endl;
            Sleep(600);
            break;

        case 2:
            Sleep(600);
            cout << diceTwo << endl;
            Sleep(600);
            break;

        case 3:
            Sleep(600);
            cout << diceThree << endl;
            Sleep(600);
            break;
        case 4:
            Sleep(600);
            cout << diceFour << endl;
            Sleep(600);
            break;
        case 5:
            Sleep(600);
            cout << diceFive << endl;
            Sleep(600);
            break;
        case 6:
            Sleep(600);
            cout << diceSix << endl;
            Sleep(600);
            break;
        }

        switch (dice2)
        {
        case 1:
            Sleep(600);
            cout << diceOne << endl;
            Sleep(600);
            break;

        case 2:
            Sleep(600);
            cout << diceTwo << endl;
            Sleep(600);
            break;

        case 3:
            Sleep(600);
            cout << diceThree << endl;
            Sleep(600);
            break;
        case 4:
            Sleep(600);
            cout << diceFour << endl;
            Sleep(600);
            break;
        case 5:
            Sleep(600);
            cout << diceFive << endl;
            Sleep(600);
            break;
        case 6:
            Sleep(600);
            cout << diceSix << endl;
            Sleep(600);
            break;

        }
        return dice1 + dice2;
    };
    

private:
    string diceOne = "===========\n|\t  |\n|\t  |\n|    *    |\n|\t  |\n|\t  |\n===========\n";
    string diceTwo = "===========\n|\t  |\n|    *    |\n|\t  |\n|    *    |\n|\t  |\n===========\n";
    string diceThree = "===========\n|\t  |\n|   *\t  |\n|    *\t  |\n|     *\t  |\n|\t  |\n===========\n";
    string diceFour = "===========\n|\t  |\n|  *   *  |\n|\t  |\n|  *   *  |\n|\t  |\n===========\n";
    string diceFive = "===========\n|\t  |\n|  *   *  |\n|    *    |\n|  *   *  |\n|\t  |\n===========\n";
    string diceSix = "===========\n|\t  |\n|  *   *  |\n|  *   *  |\n|  *   *  |\n|\t  |\n===========\n";
    int dice1 = 0, dice2 = 0;

};
int currentScore = 0, totalComputerScore = 0, totalUserScore = 0, rollCount = 0, userRollCount = 0, playing = 0, turn = 0, ShowEndParty = 0;
string menu = "\t\t\t\t\t-------------------------- \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \tDices Game\t | \n \t\t\t\t\t| \tMENU:\t\t | \n\t\t\t\t\t| enter 1 to start game\t | \n\t\t\t\t\t| enter 2 to exit  game\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n\t\t\t\t\t-------------------------- \n\n";


void rollTurn(int isComp)
{
    if (isComp == 1)
    {
        cout << "Computer rolling the dices\n\n";
        Sleep(1000);
        turn = 0;
    }
    else
    {
        cout << "Player rolling the dices\n\n";
        Sleep(1000);
        turn = 1;
    }
}

void computerScore()
{
    cout << currentScore << " points!" << "\n\n"
        << totalComputerScore << " points for " << rollCount << " attempts\n\n";
}

void userScore()
{
    cout << currentScore << " points!" << "\n\n"
        << totalUserScore << " points for " << userRollCount << " attempts!\n\n";
}

void endParty()
{
    cout << "You rolled " << totalUserScore << " points for a " << userRollCount << " attempts\n"
        << "Computer rolled " << totalComputerScore << " points for a " << rollCount << " attempts\n\n";

    if (totalUserScore > totalComputerScore)
    {
        cout << "CONGRATULATIONS!!! YOU WON!\n"
            << "Play again?\n"
            << "1 - play new game\n"
            << "2 - exit game\n\n";

    }
    else if (totalUserScore < totalComputerScore)
    {
        cout << "UNFORTUNATELY YOU LOOSE...\n"
            << "Play again?\n"
            << "1 - play new game\n"
            << "2 - exit game\n\n";

    }
    else
    {
        cout << "IT IS DRAW!\n"
            << "Play again?\n"
            << "1 - play new game\n"
            << "2 - exit game\n\n";

    }

}

void toss_Up()
{
    cout << "Determining the turn order. Roll the dices!\n"
        << 1 << " to roll\n"
        << 2 << " to exit game\n\n";
    cin >> playing;
}

void toss_UpResults()
{
    cout << "You have " << totalUserScore << " points.\n"
        << "Computer have " << totalComputerScore << " points\n\n";
    if (totalComputerScore == totalUserScore)
    {
        cout << "So you need to roll the dices again.\n\n";
    }
}
void userTurn()
{
    cout << 1 << " to roll\n"
         << 2 << " to exit game\n\n";
    cin >> playing;
}




dices dice;

int main()
{
    system("color 30");
    cout << menu << endl;
    cin >> playing;
    system("cls");

    switch (playing)
    {
    case 1:
        while (playing == 1)
        {
            totalComputerScore = 0;
            totalUserScore = 0;
            turn = 0;
            rollCount = 0;
            userRollCount = 0;
            ShowEndParty = 1;
            while (totalUserScore == totalComputerScore)
            {
                totalComputerScore = 0;
                totalUserScore = 0;
                system("color 47");
                toss_Up();
                if (playing != 1)
                { 
                    ShowEndParty = 0;
                    break;
                }
                rollTurn(turn);
                currentScore = dice.roll();
                totalUserScore += currentScore;
                rollTurn(turn);
                currentScore = dice.roll();
                totalComputerScore += currentScore;
                toss_UpResults();
                Sleep(3000);
            }
            if (playing != 1)
            {
                break;
            }

            system("color E0");
            system("cls");
            if (totalComputerScore > totalUserScore)
            {
                turn = 1;
                totalComputerScore = 0;
                totalUserScore = 0;

                cout << "Computer rolled much points, so it roll first!\n\n";

                while (rollCount < 3)
                {
                    cout << "Now it is Computer turn!\n\n";

                    rollTurn(turn);
                    currentScore = dice.roll();
                    totalComputerScore += currentScore;
                    rollCount++;
                    computerScore();

                    cout << "Now it is your turn!\n"
                        << 1 << " to roll\n"
                        << 2 << " to stop party\n\n";
                    cin >> playing;
                    system("cls");

                    if (playing != 1)
                    {
                        break;
                    }
                    rollTurn(turn);
                    currentScore = dice.roll();
                    totalUserScore += currentScore;
                    userRollCount++;
                    userScore();

                    
                }
                endParty();
                cin >> playing;
            }
            else {
                turn = 0;
                totalComputerScore = 0;
                totalUserScore = 0;

                cout << "You rolled much points, so you roll first!\n\n";

                    while (rollCount < 3)
                    {
                       rollTurn(turn);
                       userTurn();
                       if (playing != 1)
                       {
                           break;
                       }
                       system("cls");

                        currentScore = dice.roll();
                        totalUserScore += currentScore;
                        userRollCount++;
                        userScore();

                        cout << "Now it is Computer turn!\n\n";

                        rollTurn(turn);
                        currentScore = dice.roll();
                        totalComputerScore += currentScore;
                        rollCount++;
                        computerScore();
                        


                    }
                    if (ShowEndParty)
                    {
                        system("cls");
                        endParty();
                        cin >> playing;
                    }
                    
            }

        }
    default:
        system("cls");
        system("color 07");
        cout << "Good bye! See you later!\n\n"; break;
    }
    system("pause");

}