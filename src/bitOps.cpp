//
// Created by Cherednik on 19.12.2021.
//
#include "../include/include.h"

const unsigned int STEP = 5;

bitset<BYTES_SIZE> charCyclicBitMove(bitset<BYTES_SIZE> bits, bool isEncryption) {
    bitset<BYTES_SIZE> p1, p2;
    if (isEncryption) {
        p1 = bits >> STEP;
    } else {
        p1 = bits << STEP;
    }
    if (isEncryption) {
        p2 = bits << (BYTES_SIZE - STEP);
    } else {
        p2 = bits >> (BYTES_SIZE - STEP);
    }
    return  p1 | p2;
}
