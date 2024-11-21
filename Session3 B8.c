#include <stdio.h>

int main() {
    
    int number, reverse = 0;

    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

   
    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong hop le. Vui long nhap so co 4 chu so.\n");
        return 1;
    }

    
    while (number != 0) {
        int digit = number % 10; 
        reverse = reverse * 10 + digit;  
        number /= 10;  
    }

    
    printf("So nghich dao cua so da nhap la: %d\n", reverse);

    return 0;
}

