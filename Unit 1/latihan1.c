#include <stdio.h>

int main(){
    
    int s1,t1;
    int v1,t2;
    int s2,v2;

    scanf("%d %d", &s1, &t1);
    scanf("%d %d", &v1, &t2);
    scanf("%d %d", &s2, &v2);

    float v= (float) s1/t1;
    float s= (float) v1*t1;
    float t= (float) s2/v2;

    printf("v= %.2f\n ",v);
    printf("s= %.2f\n ",s);
    printf("t= %.2f\n ",t);

    return 0; 
}