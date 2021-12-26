#include <iostream>
#include <string>
#include <fstream>
#include "include/include.h"
using namespace std;

int main(int argc, const char* argv[]) {
    int key = 5;
    cout << "enter key" << endl;
    cin >> key;
    cout << "encrypt or decrypt (encryption mode is default). For decryption enter 'd'" << endl;
    char mode;
    cin >> mode;
    string filePath;
    cout << "enter absolute path to a file" << endl;
    cin >> filePath;
    if (mode == 'd') {
        fstream fileInStream(filePath, fstream::in);
        char ch;
        string result = "";
        while (fileInStream >> noskipws >> ch) {
            result += encrypt(ch, false, key);
        }
        fileInStream.close();
        cout << "decrypt result: " << result << endl;

    } else {
        cout << "enter text to encrypt" << endl;
        string text;
        cin >> text;
        fstream fileOutStream(filePath, fstream::out);
        for (int i=0; i < text.length(); i++) {
            char encryptedChar = encrypt(text[i], true, key);
            fileOutStream << encryptedChar;
        }
        fileOutStream.close();
    }
    return 0;
}
