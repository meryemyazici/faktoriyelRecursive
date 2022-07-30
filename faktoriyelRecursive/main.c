#include <stdio.h>
#include <stdlib.h>
int fact(int n){

    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);

}

int main()
{
    int n;
    printf("Faktoriyelini bulmak istediginiz sayiyi giriniz: ");
    scanf("%d",&n);
    printf("%d degerinin faktoriyeli: %d ",n,fact(n));
    return 0;
}
