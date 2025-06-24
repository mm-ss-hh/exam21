#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number); // Считываем трёхзначное число
    
    int first_digit = number / 100;       // Получаем первую цифру
    int second_digit = (number / 10) % 10; // Получаем вторую цифру
    int third_digit = number % 10;        // Получаем третью цифру
    
    // Переставляем первую и третью цифры
    int new_number = third_digit * 100 + second_digit * 10 + first_digit;
    
    // Выводим результат с ведущими нулями
    printf("%03d", new_number);
    
    return 0;
}
