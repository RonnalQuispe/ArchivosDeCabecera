#include <stdio.h>
#include "../libreria/archivo.h"
#include "../libreria/archivo2.h"
#include "../libreria/archivo3.h"
#include "../libreria/archivo4.h"
int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Ingrese el primer valor:\n");
    scanf("%d\n", &n1);
    printf("Ingrese el segundo valor: \n");
    scanf("%d\n", &n2);
    printf("la suma es :%d\n", suma(n1,n2));
    printf("la resta es :%d\n", rest(n1,n2));
    printf("la multiplicacion es :%d\n", multiplicacion(n1,n2));
    printf("la division es :%d\n", division(n1,n2));
    return 0;
}
