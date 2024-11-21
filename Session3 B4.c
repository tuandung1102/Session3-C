#include <stdio.h>

int main() {
    double math, literature, english;
    double total, average;

    
    printf("Nhap diem Toan: ");
    scanf("%lf", &math);

    printf("Nhap diem Van: ");
    scanf("%lf", &literature);

    printf("Nhap diem Anh: ");
    scanf("%lf", &english);

 
    total = math + literature + english;
    average = total / 3;

    
    printf("Tong diem: %.2lf\n", total);
    printf("Ðiem trung binh: %.2lf\n", average);

    return 0;
}

