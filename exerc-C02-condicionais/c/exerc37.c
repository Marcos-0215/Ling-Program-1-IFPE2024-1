#include <stdio.h>
#include <math.h>

int main()
{
    printf("C02-37 TARIFA DE ESTACIONAMENTO\n\n");
    
    int horaCheg, minCheg, horaSaida, minSaida;
    float minutos, horas, tarifa;
    

    printf("Digite o momento de CHEGADA (HH MM): ");
    scanf("%d %d", &horaCheg, &minCheg);
    
    if (horaCheg >= 24 || horaCheg < 0 || minCheg >= 60 || minCheg < 0 ) {
        printf("\nInsira uma hora válida.\nHoras de 00h a 23h.\nMinutos de 00min a 59min.");
    }
    
    printf("Digite o momento de PARTIDA (HH MM): ");
    scanf("%d %d", &horaSaida, &minSaida);
    
    if (horaSaida >= 24 || horaSaida < 0 || minSaida >= 60 || minSaida < 0 ) {
        printf("\nInsira uma hora válida.\nHoras de 00h a 23h.\nMinutos de 00min a 59min.");
    }
    
    if (horaCheg <= horaSaida) {
        minutos = (horaSaida - horaCheg)*60 + (minSaida - minCheg);
    } else {
        minutos = (horaSaida + 24 - horaCheg)*60 + (minSaida - minCheg);
    }
    
    horas = ceil(minutos / 60);

    if (horas <= 2) {
        tarifa = horas * 1;
    } else {
        if (horas <= 4) {
            tarifa = (horas - 2)*1.4 + 2;
        } else {
            tarifa = (horas - 4)*2 + 4.8;
        }
    }

    printf("\nTempo de permanência: %.0f minutos", minutos);
    printf("\nEquivale a: %.0f horas", horas);
    printf("\nVALOR DA TARIFA: R$ %.2f", tarifa);

    
    return 0;
}