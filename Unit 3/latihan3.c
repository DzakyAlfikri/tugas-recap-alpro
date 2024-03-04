#include <stdio.h>

int main(){
    int jumlah_elemen;
    int penjumlahan_array=0;

    scanf("%d", &jumlah_elemen);

    int arr[jumlah_elemen];
    for(int i=0; i<jumlah_elemen; i++){
        scanf("%d",&arr[i]);
        penjumlahan_array += arr[i];
    }

    printf("%d", penjumlahan_array);
    
    return 0;
}