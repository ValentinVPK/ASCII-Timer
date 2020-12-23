
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

bool isNumberCorrect(int number) {
    if (number < 1000 || number > 9999) {
        return false;
    }

    return true;
}

void timer(int minutes, int seconds) {

    while (true) {
        if (minutes == 0 && seconds == 0) {
            break;
        }

        if (seconds == 0) {
            seconds = 60;
            minutes--;
        }

        system("cls");
        cout << minutes << ":" << seconds--;
        Sleep(1000);
    }
}

int main()
{
    int number;
    cin >> number;

    if (!isNumberCorrect) {
        cout << "-1";
        return 0;
    }

    int minutes = number / 60;
    int seconds = number % 60;

    timer(minutes, seconds);

    return 0;
}

