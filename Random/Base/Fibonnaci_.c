#include <stdio.h>
#include <stdlib.h>
int Pick_UserInput(){
    int termsNumb;
    printf("Digite o número de termos a sequência deve ter:: ");
    scanf("%d", &termsNumb);
    return termsNumb;
}
int Fibonnaci_Mayreturnint(){
    int N = Pick_UserInput();
    int termo_ant2 = 0; 
    int termo_ant1 = 1;
    int next;
    int fibonnaci_seq;
    if (N >=1){
        printf(" %d", termo_ant2);
    }
    if (N > 2){
        printf(", %d", termo_ant1);
    }
    for(int i=3;i<N+1;i++){
        next = termo_ant2 + termo_ant1;
        printf(", %d", next);
        termo_ant2 = termo_ant1;
        termo_ant1 = next;
    }
    printf("\n");
}
int main(){
    Fibonnaci_Mayreturnint();
}