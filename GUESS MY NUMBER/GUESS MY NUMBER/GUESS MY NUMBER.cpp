#include <iostream>
#include <Windows.h>
using namespace std;

int level = 0, userNum = 0, score = 0, showNum = 0, isHint = 0;
string lifeBar = "\x1b[31mLIFEBAR: \x1b[0m";
string menu = "\t\t\t\t\t-------------------------- \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t|    \x1b[32mGUESS MY NUMBER\x1b[0m     | \n \t\t\t\t\t| \x1b[36mSelect level:\x1b[0m          | \n\t\t\t\t\t| \x1b[35menter 1 for easy\x1b[0m\t | \n\t\t\t\t\t| \x1b[35menter 2 for hard\x1b[0m\t | \n \t\t\t\t\t| \t\t\t | \n \t\t\t\t\t| \t\t\t | \n\t\t\t\t\t-------------------------- \n\n";
char hint = 110;
char playing = 121;

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
    int life = 0;

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

void StartMenu()
{
    while (!level)
    {
        cout << menu << endl;
        cin >> level;
        cout << level << endl;

        level == 1 || level == 2 ? level = level : level = 0;
        if (level)
        {
            break;
        }

        else
        {

            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mIncorrect Menu Item.\x1b[0m\n\n";
            Sleep(1000);
            system("cls");
            cin.clear();
            cin.ignore(22, '\n');

        }


    }


}

void gameOver()
{
    Sleep(3000);
    system("cls");
    if (!score)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mUnfortunately, you loose.\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mMaded number was:\x1b[0m " << showNum << endl;
        Sleep(6000);
    }
    else
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[34mYOU WIN!!!\x1b[0m\n\n"
            << "\t\t\t\t\t\x1b[34mYour Score is: \x1b[0m " << score << "\n";
        Sleep(6000);

    }
}
void isPlay()
{
    level = 0;
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\x1b[32mDo you want to play again?\x1b[0m\t"
        << "y/n?\n\n";
    cin >> playing;
    if (playing == 89)
    {
        playing = 121;
    }
    system("cls");
}

int playGame()
{

    StartMenu();
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
            Sleep(3000);
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
        else break;


    }




    if (lifeBar.length() == 18) return 0;

    if (level == 1) return (lifeBar.length() - 18) * 0.5;

    else return (lifeBar.length() - 18);


}






int main()
{
    while (playing == 121)
    {
        score = 0;
        score = playGame();
        gameOver();
        isPlay();
    }
}
