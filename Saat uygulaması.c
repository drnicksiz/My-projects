#include<stdio.h>
#include<time.h>

int main(){


for(int i = 0;i<=59;i++){

    for(int j =0;j<=59;j++){

        printf("%02d : %02d",i,j);
        sleep(1);
        printf("\r"); // Sat�r ba��na getirir ve orada yazan�n �zerine yazar.

    }
}

    return 0;
}
