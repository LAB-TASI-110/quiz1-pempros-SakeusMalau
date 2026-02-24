#include <stdio.h>
#include <string.h>

/* ===========================================================
   PENGUMUMAN: 
   Program ini dijalankan dari SUDUT PANDANG PETUGAS BINATU.
   Fokus: Instruksi pemilahan, pencucian, dan pengemasan.
   ===========================================================
*/

void prosesPencucian(char asrama[], int setPakaian) {
    printf("\n--- MEMULAI OPERASI LAUNDRY UNTUK ASRAMA: %s ---\n", asrama);
    printf("Total set pakaian yang diterima: %d set.\n", setPakaian);
    printf("----------------------------------------------------------\n");

    for (int i = 1; i <= setPakaian; i++) {
        printf("\n[SET KE-%d] Sedang dipilah oleh petugas...\n", i);

        // 1. Pemilahan (Sorting Logic)
        printf("   > Step 1: Pisahkan Baju Putih (Gunakan Pemutih).\n");
        printf("   > Step 2: Pisahkan Pakaian Mudah Luntur.\n");
        printf("   > Step 3: Sisa pakaian (Tidak Mudah Luntur) dikelompokkan.\n");

        // 2. Alokasi Mesin Cuci
        printf("   > Distribusi ke 3 Mesin Cuci:\n");
        
        // Mesin 1: Baju Putih
        printf("     [Mesin 1] Baju Putih + Pemutih | Bilas: 2 Kali.\n");
        
        // Mesin 2: Mudah Luntur
        printf("     [Mesin 2] Pakaian Mudah Luntur | Bilas: 2 Kali.\n");
        
        // Mesin 3: Tidak Mudah Luntur
        printf("     [Mesin 3] Pakaian Aman (Normal) | Bilas: 3 Kali.\n");

        printf("   > Status: Menunggu proses cuci & bilas selesai...\n");
    }

    
    // 3. Pasca Pencucian
    printf("\n----------------------------------------------------------\n");
    printf("SEMUA PAKAIAN SELESAI DICUCI!\n");
    printf("Instruksi Petugas Selanjutnya:\n");
    printf("1. Jemur semua pakaian hingga kering sempurna.\n");
    printf("2. Masukkan kembali ke dalam Laundry Bag masing-masing.\n");
    printf("3. Siapkan untuk dikembalikan ke Asrama %s.\n", asrama);
    printf("----------------------------------------------------------\n");
}

int main() {
    char namaAsrama[50];
    int jumlahSet;

    printf("=== SISTEM OPERASI BINATU KAMPUS DEL ===\n");
    printf("Petugas, asrama mana yang diambil jadwalnya malam ini? ");
    scanf("%s", namaAsrama);

    printf("Berapa banyak set pakaian mahasiswa yang masuk? ");
    scanf("%d", &jumlahSet);

    if (jumlahSet > 0) {
        prosesPencucian(namaAsrama, jumlahSet);
    } else {
        printf("Tidak ada pakaian untuk dicuci malam ini. Petugas boleh istirahat!\n");
    }

    return 0;
}