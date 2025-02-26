
#include <iostream>
using namespace std;

int main() {

    char plainText = 'J';
    char ciphertext;
    char key = 'B';

    ciphertext = (plainText + key) % 26 + 65;

    cout << ciphertext << endl;

    return 0;
}