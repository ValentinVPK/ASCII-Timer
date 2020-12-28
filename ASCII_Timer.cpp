
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

vector<string> getNumber(int number) {
    vector<string> zero = {
        "0000000000",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0        0",
        "0000000000"
    };

    vector<string> one = {
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1",
        "         1"
    };

    vector <string> two = {
        "2222222222",
        "         2",
        "         2",
        "         2",
        "         2",
        "2222222222",
        "2         ",
        "2         ",
        "2         ",
        "2         ",
        "2222222222"
    };

    vector <string> three = {
        "3333333333",
        "         3",
        "         3",
        "         3",
        "         3",
        "3333333333",
        "         3",
        "         3",
        "         3",
        "         3",
        "3333333333"
    };

    vector <string> four = {
        "4        4",
        "4        4",
        "4        4",
        "4        4",
        "4        4",
        "4444444444",
        "         4",
        "         4",
        "         4",
        "         4",
        "         4"
    };

    vector <string> five = {
        "5555555555",
        "5         ",
        "5         ",
        "5         ",
        "5         ",
        "5555555555",
        "         5",
        "         5",
        "         5",
        "         5",
        "5555555555"
    };

    vector<string> six = {
        "6666666666",
        "6         ",
        "6         ",
        "6         ",
        "6         ",
        "6666666666",
        "6        6",
        "6        6",
        "6        6",
        "6        6",
        "6666666666"
    };

    vector <string> seven = {
        "7777777777",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7",
        "         7"
    };

    vector <string> eight = {
        "8888888888",
        "8        8",
        "8        8",
        "8        8",
        "8        8",
        "8888888888",
        "8        8",
        "8        8",
        "8        8",
        "8        8",
        "8888888888"
    };

    vector <string> nine = {
        "9999999999",
        "9        9",
        "9        9",
        "9        9",
        "9        9",
        "9999999999",
        "         9",
        "         9",
        "         9",
        "         9",
        "9999999999"
    };

    switch (number) {
    case 0:
        return zero;
        break;
    case 1:
        return one;
        break;
    case 2:
        return two;
        break;
    case 3:
        return three;
        break;
    case 4:
        return four;
        break;
    case 5:
        return five;
        break;
    case 6:
        return six;
        break;
    case 7:
        return seven;
        break;
    case 8:
        return eight;
        break;
    case 9:
        return nine;
        break;
    default:
        return zero;
        break;
    }
}

bool isNumberCorrect(int number) {
    if (number < 1000 || number > 9999) {
        return false;
    }

    return true;
}


void timer(int minutes, int seconds) {
    vector<string> colon = {
        "  ",
        "  ",
        "..",
        "..",
        "  ",
        "  ",
        "  ",
        "..",
        "..",
        "  ",
        "  "
    };
    while (true) {
        if (minutes == 0 && seconds < 0) {
            Beep(300, 1000);
            break;
        }
        if (minutes == 0 && seconds == 0) {
            seconds = -1;
        }

        if (seconds == 0) {
            seconds = 60;
            minutes--;
        }


        int secondsTmp = seconds;
        int minutesTmp = minutes;

        system("cls");
        if (minutes >= 100) {
            vector<string> fifthDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            vector<string> fourthDigit = getNumber(secondsTmp);

            vector<string> thirdDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            vector<string> secondDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            vector<string> firstDigit = getNumber(minutesTmp);

            for (int i = 0; i < 7; i++) {
                cout << endl;
            }
            
            for (int i = 0; i < 11; i++) {
                cout << "  " << firstDigit[i] << "   " << secondDigit[i] << "   " << thirdDigit[i] << "   " << colon[i] << "  " << fourthDigit[i] << "   " << fifthDigit[i] << "           " << endl;
            }

            for (int i = 0; i < 6; i++) {
                cout << endl;
            }
            Sleep(1000);
        }
        else if (minutes >= 10 && minutes < 100) {
            vector<string> fourthDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            vector<string> thirdDigit = getNumber(secondsTmp);

            vector<string> secondDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            vector<string> firstDigit = getNumber(minutesTmp);

            for (int i = 0; i < 7; i++) {
                cout << endl;
            }

            for (int i = 0; i < 11; i++) {
                cout << "             " << firstDigit[i] << "   " << secondDigit[i] << "   " << colon[i] << "   " << thirdDigit[i] << "   " << fourthDigit[i] << "             " << endl;
            }

            for (int i = 0; i < 6; i++) {
                cout << endl;
            }
            Sleep(1000);
        }
        else if (minutes < 10) {
            vector<string> thirdDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            vector<string> secondDigit = getNumber(secondsTmp);

            vector<string> firstDigit = getNumber(minutesTmp);

            for (int i = 0; i < 7; i++) {
                cout << endl;
            }
            
            for (int i = 0; i < 11; i++) {
                cout << "                   " << firstDigit[i] << "   " << colon[i] << "   " << secondDigit[i] << "   " << thirdDigit[i] << "                   " << endl;
            }

            for (int i = 0; i < 6; i++) {
                cout << endl;
            }
            Sleep(1000);
        }
        seconds--;
    }
}

int main()
{
    int number;
    cin >> number;

    /*
    if (!isNumberCorrect(number)) {
        cout << "-1";
        return 0;
    }
    */
    int minutes = number / 60;
    int seconds = number % 60;

    timer(minutes, seconds);
    
    return 0;
}

