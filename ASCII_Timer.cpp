
#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

string* getNumber(int number) {
     string* zero = new string[] {
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

     string* one = new string[] {
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

     string* two = new string[] {
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

     string* three = new string[] {
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

     string* four = new string[] {
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

     string* five = new string[] {
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

     string* six = new string[] {
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

     string* seven = new string[] {
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

     string* eight = new string[] {
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

     string* nine = new string[] {
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

void countdownTimer(int minutes, int seconds) {
    string colon[] = {
        "  ",
        "  ",
        "##",
        "##",
        "  ",
        "  ",
        "  ",
        "##",
        "##",
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
            string* fifthDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            string* fourthDigit = getNumber(secondsTmp);

            string* thirdDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            string* secondDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            string* firstDigit = getNumber(minutesTmp);

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

            delete[] firstDigit;
            delete[] secondDigit;
            delete[] thirdDigit;
            delete[] fourthDigit;
            delete[] fifthDigit;
        }
        else if (minutes >= 10 && minutes < 100) {
            string* fourthDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            string* thirdDigit = getNumber(secondsTmp);

            string* secondDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            string* firstDigit = getNumber(minutesTmp);

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

            delete[] firstDigit;
            delete[] secondDigit;
            delete[] thirdDigit;
            delete[] fourthDigit;
        }
        else if (minutes < 10) {
            string* thirdDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            string* secondDigit = getNumber(secondsTmp);

            string* firstDigit = getNumber(minutesTmp);

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

            delete[] firstDigit;
            delete[] secondDigit;
            delete[] thirdDigit;
        }
        seconds--;
    }
}

int main()
{
    int number;
    cout << "Enter a four digit number: ";
    cin >> number;

    
    while (number < 1000 || number > 9999) {
        cout << "Invalid number! Try again:  ";
        cin >> number;
    }
    

    int minutes = number / 60;
    int seconds = number % 60;

    countdownTimer(minutes, seconds);
    
    return 0;
}

