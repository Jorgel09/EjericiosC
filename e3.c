#include <stdio.h>
#include <stdlib.h>

int main (){

    int num;
    float suma=0;

    printf("Ingresa un numero n:");
    scanf("%d",&num);

    

    do{

        if(num==1)
        {
            printf("%d\t",num);
            suma=suma+1;
        }

        else if(num%2 == 0)
        {
            printf("-1/%d\t",num*11);
            suma=(float)suma-(((float)1)/((float)11*num));
        }

        else{
            printf("+1/%d\t",num*11);
            suma=(float)suma+(((float)1)/((float)11*num));
        }

    num=num-1;  
    }while(num!=0);

    printf("\nEl resultado de la serie es:%f", suma);

    return EXIT_SUCCESS;
}