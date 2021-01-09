/**
*
* Solution to course project # 10
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Valentin Krumov
* @idnumber 62539
* @compiler VC
*
*
*/


#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

string* getNumber(int number) {
    if (number == 1) {
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
        return one;
    }
    else if (number == 2) {
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
        return two;
    }
    else if (number == 3) {
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
        return three;
    }
    else if (number == 4) {
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
        return four;
    }
    else if (number == 5) {
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
        return five;
    }
    else if (number == 6) {
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
        return six;
    }
    else if (number == 7) {
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
        return seven;
    }
    else if (number == 8) {
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
        return eight;
    }
    else if (number == 9) {
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
        return nine;
    }
    else {
        string* zero = new string[]{
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
        return zero;
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
                cout << "  " << firstDigit[i] << "   " << secondDigit[i] << "   " << thirdDigit[i] << "   " << colon[i] << "  " << fourthDigit[i] << "   " << fifthDigit[i] << endl;
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
        else {
            string* fourthDigit = getNumber(secondsTmp % 10);
            secondsTmp /= 10;
            string* thirdDigit = getNumber(secondsTmp);

            string* secondDigit = getNumber(minutesTmp % 10);
            minutesTmp /= 10;
            string* firstDigit = getNumber(minutesTmp);

            for (int i = 0; i < 7; i++) {
                cout << endl;
            }

            if (minutesTmp == 1) {
                for (int i = 0; i < 11; i++) {
                    cout << "         " << firstDigit[i] << "   " << secondDigit[i] << "   " << colon[i] << "   " << thirdDigit[i] << "   " << fourthDigit[i] << endl;
                }
            }
            else {
                for (int i = 0; i < 11; i++) {
                    cout << "             " << firstDigit[i] << "   " << secondDigit[i] << "   " << colon[i] << "   " << thirdDigit[i] << "   " << fourthDigit[i] << endl;
                }
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
        seconds--;
    }
}

int main()
{
    HWND console = GetConsoleWindow();
    MoveWindow(console, 200, 200, 680, 450, TRUE);

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

