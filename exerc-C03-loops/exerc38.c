#include <stdio.h>

int main() {
    int cont = 0;

    for (int a=0; a<=1000; a++) {
        
        for (int b=0; b<=1000; b++) {
            
            for (int c=0; c<=1000; c++) {

                if (a+b+c == 1000) {
                    
                    if (a*a + b*b == c*c) {
                        cont++;
                        printf("Terno pitagórico Nº %d:  ", cont);
                        printf("a= %d  |  ", a);
                        printf("b= %d  |  ", b);
                        printf("c= %d\n\n", c);
                    }
                }
            }
        }
    }

    return 0;
}