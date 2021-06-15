#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
// void gotoxy(int x, int y)
// {
//     COORD c;
//     c.X = x;
//     c.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
// }

int main()

{
    srand((unsigned)time(NULL));
    char o;
    int i, g, n, exit, max = 10;
    while (exit != 0)
    {
        n = (rand() % max) + 1;
        cout << "\n\n Guess Game!!! Choose the right no.\n"
             << endl;
        cout << "\n        Start game ~ s\n           Exit    ~ e\n\n";
        cin >> o;
        switch (o)
        {
        case 's':
            cout << "guess: 1 to " << max << endl
                 << endl;
            for (i = 3; g != n && i > 0; i--)
            {

                if (i == 3)
                {

                    cout << "Your life is "
                         << " |||\t\t";
                }
                else if (i == 2)
                {
                    cout << "Your life is "
                         << " || \t\t";
                }
                else if (i == 1)
                {
                    cout << "Your life is "
                         << " |   \t\t";
                }

                cout << "Guess : ";
                cin >> g;
            }
            if (n == g)
            {
                cout << "\nYou Win\n";
                system("pause");

                system("cls");
            }
            else
                cout << "\nyou Lose\n"

                     << n << " is right no.\n";
            system("pause");

            system("cls");

            break;
        case 'e':
            exit = 0;
            system("cls");
            cout << "\n!!!!!!You exit successfully!!!!!!!!\n";
            system("pause");

            break;
        default:
            system("cls");
            cout << "\ninvalid!!!!--->>> enter s Or e \n";
            system("pause");
            system("cls");

            break;
        }
    }

    return 0;
}
