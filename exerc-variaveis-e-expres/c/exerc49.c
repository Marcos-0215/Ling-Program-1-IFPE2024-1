#include <stdio.h>

int main()
{
// 49

int horaInic;
int minInic;
int segInic;

int durTotal;

int horaFim;
int minFim;
int segFim;
int diaAdic;


printf("Digite o horário de início da experiência:\n");
printf("\nHora: ");
scanf("%d", &horaInic);
printf("Minuto: ");
scanf("%d", &minInic);
printf("Segundo: ");
scanf("%d", &segInic);

printf("\nDigite agora a duração da experiência, em segundos:\n");
scanf("%d", &durTotal);

segFim = segInic + durTotal%60;
if (segFim >= 60) {
segFim -= 60;
minInic++;
};

minFim = minInic + (durTotal/60)%60;
if (minFim >= 60) {
minFim -= 60;
horaInic++;
};

horaFim = horaInic + (durTotal/60/60)%24;
if (horaFim >= 24) {
horaFim -= 24;
diaAdic++;
};

printf("\nAssim, a experiência terminou no seguinte horário:\n+%ddia(s) seguinte(s)\n%dh %dmin %ds", diaAdic, horaFim, minFim, segFim);

return 0;
}