#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sumLargeNumbers(char num1[], char num2[], char result[]) {
    int carry = 0;
    int length1 = strlen(num1);
    int length2 = strlen(num2);
    int max_length = (length1 > length2) ? length1 : length2;
    int result_length = max_length + 2;
    result[0] = '0';
    result[1] = '\0';
    strrev(num1);
    strrev(num2);

    for (int i = 0; i < max_length; i++) {
        int digit1 = (i < length1) ? (num1[i] - '0') : 0;
        int digit2 = (i < length2) ? (num2[i] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        result[i] = (sum % 10) + '0';
        result[i + 1] = '\0';
    }

    if (carry) {
        result[max_length] = carry + '0';
        result[max_length + 1] = '\0';
    }
    strrev(result);
}
void divideNumber(char num[], char firstHalf[], char secondHalf[]) {
    int length = strlen(num);
    int half_length = length / 2;
    strncpy(firstHalf, num, half_length);
    firstHalf[half_length] = '\0';
    strcpy(secondHalf, num + half_length);
}
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    char num[205];
    scanf("%s",num);
    char firstHalf[105]; 
    char secondHalf[105]; 
    char result[205]; 
    while (strlen(num) > 1) {
        divideNumber(num, firstHalf, secondHalf);
        sumLargeNumbers(firstHalf, secondHalf, result);
        printf("%s\n", result);
        strcpy(num, result);
    }

    return 0;
}
