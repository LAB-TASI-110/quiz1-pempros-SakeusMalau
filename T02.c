#include <stdio.h>
#include <string.h>

int main() {
    int jumlahData;

    printf("Masukkan jumlah total data: ");
    scanf("%d", &jumlahData);

    // Deklarasi array untuk menyimpan nilai
    int nilai[jumlahData];
    char nama[jumlahData][50];

    // Input data
    for (int i = 0; i < jumlahData; i++) {
        printf("\nData ke-%d\n", i + 1);
        printf("Masukkan Nama Siswa: ");
        scanf("%s", nama[i]);
        printf("Masukkan Nilai %s: ", nama[i]);
        scanf("%d", &nilai[i]);
    }

    printf("\n--- HASIL PENGOLAHAN DATA ---\n");

    // 1. Jumlah Total Data
    printf("1. Jumlah Total Data: %d\n", jumlahData);

    // 2. Deret Nilai (n1, n2, ..., nn)
    printf("2. Deret Nilai: ");
    for (int i = 0; i < jumlahData; i++) {
        printf("%d", nilai[i]);
        if (i < jumlahData - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // 3. Kode Kelompok Siswa (Berdasarkan Gambar)
    /* Asumsi pengelompokan berdasarkan nilai:
       - Kelompok A: Nilai >= 75 (Yohana & Indah)
       - Kelompok B: Nilai < 75  (Julius & Wilson)
    */
    printf("3. Kode Kelompok Siswa:\n");
    for (int i = 0; i < jumlahData; i++) {
        char kode;
        if (nilai[i] >= 75) {
            kode = 'A';
        } else {
            kode = 'B';
        }
        printf("   - %s (Nilai: %d) -> Kelompok %c\n", nama[i], nilai[i], kode);
    }

    return 0;
}