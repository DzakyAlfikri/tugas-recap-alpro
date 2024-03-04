#include <stdio.h>

int keliling(int sisi){
    return 4*sisi;
}

int luas(int sisi){
    return sisi*sisi;
}

int volume(int sisi){
    return sisi*sisi*sisi;
}

int main(){
    int sisi;
    scanf("%d",&sisi);

    printf("%d\n", keliling(sisi));
    printf("%d\n", luas(sisi));
    printf("%d\n", volume(sisi));

    return 0;
}