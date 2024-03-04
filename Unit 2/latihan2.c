#include <stdio.h>

int main(){
    int jumlahtransaksi;
    int nominal;
    int pengeluaran=0;

    scanf("%d",&jumlahtransaksi);
    for (int i=0; i<jumlahtransaksi; i++){
        scanf("%d", &nominal);
        pengeluaran += nominal;
    }

    if (jumlahtransaksi<=0){
        printf("Tidak ada transaksi hari ini");
    }

    printf("%d", pengeluaran);

    return 0;
}