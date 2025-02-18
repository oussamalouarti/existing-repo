#include<stdio.h>
#include<unistd.h>
#include"DS.h"

int main(){
    float temperature;
    while (1)
    {
        temperature = get_ds_temp();
        printf("temperature = %2.3f degree\n",temperature);
        sleep(1);
    }
    return 1;    
}
// nothing 
