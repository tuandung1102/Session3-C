#include <stdio.h>

int main() {
    const char *names[] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D",
        "Nguyen Van E", "Nguyen Van F", "Nguyen Van G", "Nguyen Van H",
        "Nguyen Van I", "Nguyen Van K"
    };
    int ages[] = {20, 21, 18, 19, 22, 21, 23, 19, 18, 21};
    const char *phones[] = {
        "0904488481", "0904488482", "0904488483", "0904488484", "0904488485",
        "0904488486", "0904488487", "0904488488", "0904488489", "0904488480"
    };
    const char *emails[] = {
        "anv@rikkeiacademy.com", "bnv@rikkeiacademy.com", "cnv@rikkeiacademy.com",
        "dnv@rikkeiacademy.com", "env@rikkeiacademy.com", "fnv@rikkeiacademy.com",
        "gnv@rikkeiacademy.com", "hnv@rikkeiacademy.com", "inv@rikkeiacademy.com",
        "knv@rikkeiacademy.com"
    };

   
    printf("------------------------------------------------------------\n");
    printf("| STT | Ho va ten       | Tuoi | So dien thoai | Email                |\n");
    printf("------------------------------------------------------------\n");

    
    int i;
    for (i = 0; i < 10; i++) {
        printf("| %2d  | %-15s | %4d | %-12s | %-20s |\n",
               i + 1, names[i], ages[i], phones[i], emails[i]);
    }

    printf("------------------------------------------------------------\n");

    return 0;
}


