#include <stdio.h>

enum Hari {
    SENIN,
    SELASA,
    RABU,
    KAMIS,
    JUMAT,
    SABTU,
    MINGGU
};

int main(void) {
    enum Hari jadwal = RABU;

    printf("Nilai integer RABU: %d\n", jadwal);

    switch (jadwal) {
        case SABTU:
        case MINGGU:
            printf("Hari libur\n");
            break;
        default:
            printf("Hari kerja\n");
            break;
    }

    return 0;
}