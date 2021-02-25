#ifndef GENTABLES_H
#define GENTABLES_H

#include "aes.h"
#include "WBMatrix/WBMatrix.h"

#define Trace 256
void computeTables (u8 expandedKey[176]);
void aes_128_table_encrypt (uint16_t collect_input[Trace], int middlebitstate[Trace][8]);
void printstate(unsigned char * in);
int aes_128_table_encrypt_collect (int collect[256][Trace]);

#endif // GENTABLES_H