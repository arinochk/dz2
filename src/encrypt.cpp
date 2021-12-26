//
// Created by Cherednik
//
#include "../include/include.h"

char encrypt(char ch, bool isEncryption, int key) {
    bitset<BYTES_SIZE> bits = bitset<BYTES_SIZE>(ch);
    if(isEncryption) {
        bits = gamming(bits, key);
        bits = charCyclicBitMove(bits, isEncryption);
    } else {
        bits = charCyclicBitMove(bits, isEncryption);
        bits = gamming(bits, key);
    }
    unsigned long i = bits.to_ulong();
    return static_cast<char>(i);
}
