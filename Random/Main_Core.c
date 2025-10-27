#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Pick_Random_Number(){
    srand(time(NULL));
    int Random_Num1 = rand() % 10;
    return Random_Num1;
}

int main(){
    int num = Pick_Random_Number();
    printf("%d\n", num);
    int userInput;
    printf("Escolha um número de 0 a 10: \n");
    scanf("%d", &userInput);
    do {
        printf("Escolha um número de 0 a 10: \n");
        scanf("%d", &userInput);
    } while (userInput != num);
    if (userInput == num){
        printf("Parábens! O número era: %d\n", num);
    }
    
}

