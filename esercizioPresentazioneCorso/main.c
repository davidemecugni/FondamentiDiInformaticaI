#include <stdio.h>

int maxWait(void){
    int arrivi[] = {2,10,12};
    int servizio[] = {15,1,15};
    int n = sizeof(servizio)/sizeof(int);
    int max = 0, wait = 0, currentTime = 0, voidTime = 0;
    currentTime = arrivi[0] + servizio[0];
    for(int i=1; i< n; i++){
        if(currentTime>arrivi[i]){
            wait= currentTime - arrivi[i];
        }
        if(wait>max){
            max=wait;
        }
        if(arrivi[i] - currentTime >0){
        voidTime = arrivi[i] - currentTime;
        }
        currentTime+=servizio[i]+ voidTime;
        voidTime =0;
        wait=0;
    }
    return max;
}
int main(void){
    printf("Risultato: %d\n", maxWait());
}
