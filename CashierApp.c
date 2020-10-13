#include <stdio.h>
#include <stdlib.h>

int main(){
    int menu, porsi, banyakPesanan, statusPesanan, hargaMakanan;
    float pajak, diskon;
    float totalHargaAwal, totalHargaAkhir;

    printf("Menu Makanan\n");
    printf("1. Capjay goreng\n");
    printf("2. Kakap asam manis\n");
    printf("3. Puyung hay\n");

    printf("Masukkan pilihan makanan\n");
    scanf("%d", &menu);
    printf("\n");

    printf("Pilihan porsi\n");
    printf("1. Kecil\n");
    printf("2. Sedang\n");
    printf("3. Besar\n");

    printf("Masukkan pilihan porsi\n");
    scanf("%d", &porsi);
    printf("\n");

    printf("Masukkan banyak pesanan\n");
    scanf("%d", &banyakPesanan);
    printf("\n");

    printf("Status pesanan\n");
    printf("1. Makan di tempat\n");
    printf("2. Bawa pulang\n");

    printf("Masukkan status pesanan\n");
    scanf("%d", &statusPesanan);

    switch (menu)
    {
    case 1:
        switch (porsi)
        {
        case 1:
            hargaMakanan = 15000;
            break;
        case 2:
            hargaMakanan = 20000;
            break;
        case 3:
            hargaMakanan = 25000;
            break;
        default:
            printf("Masukkan input yang benar!\n");
            main();
        }
        break;
    
    case 2:
        switch (porsi)
        {
        case 1:
            hargaMakanan = 30000;
            break;
        case 2:
            hargaMakanan = 40000;
            break;
        case 3:
            hargaMakanan = 50000;
            diskon = 0.05 * hargaMakanan * banyakPesanan;
            break;
        default:
            printf("Masukkan input yang benar!\n");
            main();
        }

    case 3:
        switch (porsi)
        {
        case 1:
            hargaMakanan = 10000;
            break;
        case 2:
            hargaMakanan = 15000;
            break;
        case 3:
            hargaMakanan = 20000;
            break;        
        default:
            printf("Masukkan input yang benar!\n");
            main();
        }
    
    default:
        printf("Masukkan input yang benar!\n");
        main();
        break;
    }

    totalHargaAwal = (hargaMakanan * banyakPesanan) - diskon;

    if (statusPesanan == 1){
        pajak = 0.1 * totalHargaAwal;
    }else{
        pajak = 0;
    }

    totalHargaAkhir = totalHargaAwal + pajak;

    printf ("Hasil hitung biaya adalah sbb: \n");
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Total harga: Rp %.2f\n", totalHargaAwal);
    printf("Pajak: Rp %.2f\n", pajak);
    printf("Bayar: Rp %.2f\n", totalHargaAkhir);

    return 0;
}