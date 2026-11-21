#include "nilai.h"

float hitung_rata_rata(const int nilai[], int jumlah) {
    if (jumlah <= 0) {
        return 0.0f;
    }

    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return (float)total / jumlah;
}