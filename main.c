#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int i,j,n,a,adimsayisi;

    printf("n i giriniz");
    scanf("%d",&n);

    int matris[n][n];
    int minsatir=0,maxsatir=n-1;
    int minsutun=0,maxsutun=n-1;

    a=1;

    while(a<=n*n){
        for(i=maxsatir;i>=minsatir && a<=n*n;i--){
            matris[i][maxsutun]=a++;
        }
        maxsutun--;

        for(i=maxsutun;i>=minsutun && a<=n*n;i--){
            matris[minsatir][i]=a++;
        }
        minsatir++;

        for(i=minsatir;i<=maxsatir && a<=n*n;i++){
            matris[i][minsutun]=a++;
        }

        minsutun++;

        for(i=minsutun;i<=maxsutun && a<=n*n;i++){
            matris[maxsatir][i]=a++;
        }
       maxsatir--;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
}
