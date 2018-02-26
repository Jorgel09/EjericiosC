#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, num, j=0,z=0, cont=0;
    printf ("Introduce el numero de digitos que se van a leer");
    scanf("%d",&a);

    int arr[a];
    int aux[a];
    int final[a];

    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<a; i++)
    {
        cont=0;
        num=arr[i];
        aux[j]=num;
        j++;
        for(int k=0; k<a; k++)
            if(aux[k]==num)
                cont++;
        
        if(cont==1)
        {
            final[z]=num;
            z++;
        }
    }

    printf("El arreglo simplificado es:\n");
    for(int i=0; i<z; i++)
        printf("%d\n",final[i]);

    printf("Los numeros eliminados son:%d\n",a-z);
    
    
    return EXIT_SUCCESS;
}