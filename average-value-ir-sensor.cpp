#include <stdio.h>
#include <time.h>
#include “E101.h”

Int main(){
init();
Int i = 0;
Int total = 0;
while(i<5){
Adc_reading = analog(0);
printf(“%d\n”, adc_reading);
total+= adc_reading;
i+1=1;
}
printf(“%d mean \n”, total/5);
Return0;
}
