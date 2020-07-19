#include <iostream>
#include<stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
    srand(time(NULL));
    for (;;)
    {
        for (int x = 0; x < 20; x++)
        {
            for (int y = 0; y < 22 - x; y++)
                cout << " ";

            for (int i = 0; i <= x * 2; i++)
            {
                int randm = rand() % 40;
                if (randm == i)
                    cout << "@";

                else
                    cout << "*";
            }
            cout << endl;
        }

        for (int t = 0; t < 3; t++)
        {
            for (int o = 0; o < 19; o++)
                cout << " ";
            cout << "|  |" << endl;

        }
        Sleep(400);
        system("CLS");

    }

}