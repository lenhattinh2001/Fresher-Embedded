#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SxTangdan(int x[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int vtmin = i;
        for (int j = i+1; j<n; j++)
        {
            if(x[j]<x[vtmin])
                vtmin = j;
        }
        swap(&x[i], &x[vtmin]);
    }

}
void SxGiamdan(int x[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int vtmax = i;
        for (int j = i+1; j<n; j++)
        {
            if(x[j]>x[vtmax])
                vtmax = j;
        }
        swap(&x[i], &x[vtmax]);
    }
}
void printMang(int x[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);

    }
    
}

int main(int argc, char const *argv[])
{
    int a[100], n;

    do
    {
        printf("Nhap slpt mang: ");
        scanf("%d",&n);
    } while (n<=0 || n>100);
    

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    SxTangdan(a, n);
    printf("Mang tang dan la: ");
    printMang(a, n);

    SxGiamdan(a, n);
    printf("\nMang giam dan la: ");
    printMang(a, n);
}
