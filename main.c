#include <stdio.h>
#include <stdint.h>

#define Num 10

float temp_data;
float actual_temp_data = 0,temp_data_avg = 0;
void main()
{
    while(1)
    {
        uint8_t i;
        printf("Temperature from Sensor\n");
        for(i=1;i <= Num ;i++)
        {
            scanf("%f",&temp_data);
            temp_data_avg = temp_data_avg + temp_data;
        }
        actual_temp_data = temp_data_avg / Num;
        printf("Temperature in Celsius %.2f\t,Temperature in Fahrenheit %.2f\n",actual_temp_data,(actual_temp_data * 9/5) + 32);
        temp_data_avg = 0;
        actual_temp_data = 0;
    }

}
