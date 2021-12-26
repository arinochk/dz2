//
// Created by Cherednik
//

#ifndef UNTITLED_INCLUDE_H
#define UNTITLED_INCLUDE_H

#endif //UNTITLED_INCLUDE_H
#include <iostream>
using namespace std;
const unsigned int BYTES_SIZE = 8;
bitset<BYTES_SIZE> charCyclicBitMove(bitset<BYTES_SIZE> bits, bool isEncryption);
bitset<BYTES_SIZE> gamming(bitset<BYTES_SIZE> bits, int key);
char encrypt(char ch, bool isEncryption, int key);
