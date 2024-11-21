#include <stdio.h>

int main() {
    float celsius, fahrenheit;  
	printf("Vui long nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiet do %.2f do Celsius bang %.2f do Fahrenheit.\n", celsius, fahrenheit);
	return 0;
}

