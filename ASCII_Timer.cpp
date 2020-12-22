
#include <iostream>
using namespace std;

bool isNumberCorrect(int number) {
    if (number < 1000 || number > 9999) {
        return false;
    }

    return true;
}

int main()
{
    int seconds;
    cin >> seconds;

    if (!isNumberCorrect) {
        cout << "-1";
        return 0;
    }

}

