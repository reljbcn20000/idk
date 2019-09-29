#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Amount: ");
    int amount;
    scanf("%d", &amount);

    unsigned long *binary1, *binary2, *decimal;
    binary1 = calloc(amount, sizeof(unsigned long));
    binary2 = calloc(amount, sizeof(unsigned long));
    decimal = calloc(amount, sizeof(unsigned long));


    int i;
    for(i=0;i<amount;i++){
        scanf("%lu", &binary1[i]);
        binary2[i] = binary1[i];
    }

    for(i=0;i<amount;i++){
        int j=0,buff=0;
        while(binary2[i] != 0){
            if(binary2[i]%10 > 0){
                buff = pow(2,j);
                decimal[i] = decimal[i] + buff;
            }
            binary2[i] /= 10;
            j++;
        }
    }

    for(i=0;i<amount;i++){
        printf("binaty:%lu; decimal:%lu\n",binary1[i], decimal[i]);
    }

    return 0;
}

