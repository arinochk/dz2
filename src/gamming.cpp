//
// Created by Cherednik on
//
#include "../include/include.h"

bitset<BYTES_SIZE> gamming(bitset<BYTES_SIZE> bits, int key) {
    srand(key);
    int gamma = rand();
    bitset<BYTES_SIZE> gammaBits = bitset<BYTES_SIZE>(gamma);
    return (bits ^ gammaBits);
}
