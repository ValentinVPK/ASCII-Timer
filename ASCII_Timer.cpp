
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

using namespace std;

void wholeLine(string& result, char number) {
    for (int i = 1; i <= 10; i++) {
        result += number;
    }
}

void beginningAndEnd(string& result, char number) {
    result += number;
    for (int i = 1; i <= 8; i++) {
        result += ' ';
    }
    result += number;
}

void beginning(string& result, char number) {
    result += number;
    for (int i = 1; i <= 9; i++) {
        result += ' ';
    }
}

void end(string& result, char number) {
    for (int i = 1; i <= 9; i++) {
        result += ' ';
    }

    result += number;
}

string colon() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 3 || i == 4 || i == 8 || i == 9) {
            result += "...";
        }

        result += '\n';
    }

    return result;
}

string zero() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 11) {
            wholeLine(result, '0');
        }
        else {
            beginningAndEnd(result, '0');
        }

        result += '\n';
    }

    return result;

}

string one() {
    string result;
    for (int i = 1; i <= 11; i++) {
        end(result, '1');

        result += '\n';
    }

    return result;
}

string two() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '2');
        }
        else if (i >= 2 && i <= 5) {
            end(result, '2');
        }
        else {
            beginning(result, '2');
        }
        result += '\n';
    }

    return result;
}

string three() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '3');
        }
        else {
            end(result, '3');
        }

        result += '\n';
    }

    return result;

}

string four() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i <= 5) {
            beginningAndEnd(result, '4');
        }
        else if (i == 6) {
            wholeLine(result, '4');
        }
        else {
            end(result, '4');
        }

        result += '\n';
    }

    return result;
}

string five() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '5');
        }
        else if (i >= 2 && i <= 5) {
            beginning(result, '5');
        }
        else {
            end(result, '5');
        }

        result += '\n';
    }

    return result;
}

string six() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '6');
        }
        else if (i >= 2 && i <= 5) {
            beginning(result, '6');
        }
        else {
            beginningAndEnd(result, '6');
        }

        result += '\n';
    }

    return result;

}

string seven() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1) {
            wholeLine(result, '7');
        }
        else {
            end(result, '7');
        }

        result += '\n';
    }

    return result;
}

string eight() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '8');
        }
        else {
            beginningAndEnd(result, '8');
        }

        result += '\n';
    }

    return result;
}

string nine() {
    string result;

    for (int i = 1; i <= 11; i++) {
        if (i == 1 || i == 6 || i == 11) {
            wholeLine(result, '9');
        }
        else if (i >= 2 && i <= 5) {
            beginningAndEnd(result, '9');
        }
        else {
            end(result, '9');
        }

        result += '\n';
    }

    return result;
}
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

    if (!isNumberCorrect(number)) {
        cout << "-1";
        return 0;
    }

    int minutes = number / 60;
    int seconds = number % 60;

    timer(minutes, seconds);

    return 0;
}

