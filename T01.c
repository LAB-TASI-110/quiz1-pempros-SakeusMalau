#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    int porsiButet, porsiUcok;
    long harga, subtotal, totalKeseluruhan = 0;
    float diskonPersen = 0;

    printf("--- Input Pesanan ---\n");

    while (1) {
        scanf("%s", kode);
        
        // Cek jika input selesai
        if (strcmp(kode, "END") == 0) break;

        scanf("%d", &porsiButet);

        // Penentuan harga berdasarkan kode di gambar menu
        if (strcmp(kode, "NGS") == 0) harga = 25000;      // Nasi Goreng Spesial
        else if (strcmp(kode, "AP") == 0) harga = 22000;  // Ayam Penyet (asumsi harga dr gambar struk)
        else if (strcmp(kode, "GG") == 0) harga = 30000;  // Gado-Gado (asumsi harga dr gambar struk)
        else harga = 0;

        // Ucok makan 2x porsi Butet, jadi total porsi = 3x porsi Butet
        porsiUcok = 2 * porsiButet;
        int totalPorsi = porsiButet + porsiUcok;
        subtotal = (long)totalPorsi * harga;
        totalKeseluruhan += subtotal;
    }

    // Logika Diskon: naik 5% setiap 100rb, max 25%
    if (totalKeseluruhan >= 500000) diskonPersen = 0.25;
    else if (totalKeseluruhan >= 400000) diskonPersen = 0.20;
    else if (totalKeseluruhan >= 300000) diskonPersen = 0.15;
    else if (totalKeseluruhan >= 200000) diskonPersen = 0.10;
    else if (totalKeseluruhan >= 100000) diskonPersen = 0.05;

    long potongan = totalKeseluruhan * diskonPersen;
    long totalBayar = totalKeseluruhan - potongan;

    // Output sesuai format gambar struk
    printf("\nMenu             Porsi   Harga    Total\n");
    printf("========================================\n");
    // (Note: Bagian ini biasanya diulang di dalam loop jika ingin detail per menu)
    // Di bawah ini adalah ringkasan akhirnya:
    printf("\nTotal Pembayaran                     %ld\n", totalKeseluruhan);
    printf("Diskon (%.0f%%)                        %ld\n", diskonPersen * 100, potongan);
    printf("========================================\n");
    printf("GRAND TOTAL                          %ld\n", totalBayar);

    return 0;
}