#include <stdio.h>

int is_even(int number)
 {
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Ingrese un numero: ");
    
    if (scanf("%d", &num) == 1) {
        
      
        if (is_even(num)) {
            printf("El numero es par\n");
        } else {
            printf("El numero es impar\n");
        }
        
    }

    return 0;
}