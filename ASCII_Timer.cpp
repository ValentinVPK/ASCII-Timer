
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
        case 1:
            delete[] zero;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return one;
            break;
        case 2:
            delete[] zero;
            delete[] one;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return two;
            break;
        case 3:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return three;
            break;
        case 4:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return four;
            break;
        case 5:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return five;
            break;
        case 6:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] seven;
            delete[] eight;
            delete[] nine;
            return six;
            break;
        case 7:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] eight;
            delete[] nine;
            return seven;
            break;
        case 8:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] nine;
            return eight;
            break;
        case 9:
            delete[] zero;
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            return nine;
            break;
        default:
            delete[] one;
            delete[] two;
            delete[] three;
            delete[] four;
            delete[] five;
            delete[] six;
            delete[] seven;
            delete[] eight;
            delete[] nine;
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

            for (int i = 0; i < 7; i++) {
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

            for (int i = 0; i < 11; i++) {
                cout << "             " << firstDigit[i] << "   " << secondDigit[i] << "   " << colon[i] << "   " << thirdDigit[i] << "   " << fourthDigit[i] << "             " << endl;
            }

            for (int i = 0; i < 7; i++) {
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

