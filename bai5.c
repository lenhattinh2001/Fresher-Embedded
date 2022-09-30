#include <stdio.h>
#define KM1 5000
#define KM2 4000
#define KM3 3000

int main(int argc, char const *argv[])
{
    float n,cost;
    do
    {
        printf("Nhap so KM:");
        scanf("%d",&n);
    } while (n<0);
    if(n<=1){
        cost = KM1;
    }else if(n>1 && n<=31){
        cost =  5000 + (n-1)*KM2;
    }else if(n>31){
        cost = 5000 + 30*KM2+ (n-31)*KM3;
    }
    printf("Gia tien la: %fd\n",cost);


    return 0;
}
