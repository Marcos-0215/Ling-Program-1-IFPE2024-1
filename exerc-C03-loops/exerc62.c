// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 62
// Finished by ?? 03 2024

#include <stdio.h>
#include <string.h>

int main()
{
    
    int num10, num100, num1000;

    int arrayUnid[9];
    int arrayDeze10[9];
    int arrayDezeResto[8];
    int arrayCent[9];

    int qntUnid, qntDeze, qntCent, total;
    
    
    arrayUnid[0] = strlen("um");
    arrayUnid[1] = strlen("dois");
    arrayUnid[2] = strlen("tres");
    arrayUnid[3] = strlen("quatro");
    arrayUnid[4] = strlen("cinco");
    arrayUnid[5] = strlen("seis");
    arrayUnid[6] = strlen("sete");
    arrayUnid[7] = strlen("oito");
    arrayUnid[8] = strlen("nove");
    num10 = strlen("dez");
    num100 = strlen("cem");
    num1000 = strlen("mil");
    
    arrayDeze10[0] = strlen("onze");
    arrayDeze10[1] = strlen("doze");
    arrayDeze10[2] = strlen("treze");
    arrayDeze10[3] = strlen("catorze");
    arrayDeze10[4] = strlen("quinze");
    arrayDeze10[5] = strlen("dezesseis");
    arrayDeze10[6] = strlen("dezessete");
    arrayDeze10[7] = strlen("dezoito");
    arrayDeze10[8] = strlen("dezenove");
    
    arrayDezeResto[0] = strlen("vinte");
    arrayDezeResto[1] = strlen("trinta");
    arrayDezeResto[2] = strlen("quarenta");
    arrayDezeResto[3] = strlen("cinquenta");
    arrayDezeResto[4] = strlen("sessenta");
    arrayDezeResto[5] = strlen("setenta");
    arrayDezeResto[6] = strlen("oitenta");
    arrayDezeResto[7] = strlen("noventa");
    
    arrayCent[0] = strlen("cento");
    arrayCent[1] = strlen("duzentos");
    arrayCent[2] = strlen("trezentos");
    arrayCent[3] = strlen("quatrocentos");
    arrayCent[4] = strlen("quinhentos");
    arrayCent[5] = strlen("seiscentos");
    arrayCent[6] = strlen("setecentos");
    arrayCent[7] = strlen("oitocentos");
    arrayCent[8] = strlen("novecentos");
    
    
   
    for (int i=0; i<9; i++) {
        qntUnid += arrayUnid[i];
    }
    
    for (int i=0; i<9; i++) {
        qntDeze += arrayDeze10[i];
    }
    
    for (int i=0; i<8; i++) {
        qntDeze += arrayDezeResto[i]*10;
        qntDeze += qntUnid + 9;
    }
    
    for (int i=0; i<9; i++) {
        qntCent += arrayCent[i]*100;
        qntCent += qntDeze + qntUnid + num10 + 99;
    }
    
    qntCent += num100 - arrayCent[0];
    
    
    total = qntUnid + qntDeze + qntCent;
    
    //printf("%d\n", qntUnid);
    //printf("%d\n", qntDeze);
    //printf("%d\n", qntCent);
    printf("%d letras no total, se todos os números de 1 a 1000 fossem escritos em palavras.\n", total);

    return 0;
}