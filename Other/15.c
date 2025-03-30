#include <stdio.h>
#include <string.h>

void DecimalToBCD(int num, char bcd[]) {
    if (num == 0) {
        strcpy(bcd, "0000");
        return;
    }

    char temp[100] = "";
    int digit;
    int i = 0;

    // Process each digit
    while (num > 0) {
        digit = num % 10;
        num /= 10;

        // Prepend the 4-bit BCD code for the current digit
        switch (digit) {
            case 0: strcat(temp, "0000"); break;
            case 1: strcat(temp, "0001"); break;
            case 2: strcat(temp, "0010"); break;
            case 3: strcat(temp, "0011"); break;
            case 4: strcat(temp, "0100"); break;
            case 5: strcat(temp, "0101"); break;
            case 6: strcat(temp, "0110"); break;
            case 7: strcat(temp, "0111"); break;
            case 8: strcat(temp, "1000"); break;
            case 9: strcat(temp, "1001"); break;
        }
    }

    // Reverse the string to get correct digit order
    int len = strlen(temp);
    for (i = 0; i < len; i++) {
        bcd[i] = temp[len - 1 - i];
    }
    bcd[len] = '\0';
}

int main() {
    int n;
    char binary[100] = "";

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    DecimalToBCD(n, binary);
    printf("BCD: %s\n", binary);

    return 0;
}