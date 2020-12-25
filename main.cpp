// Laba 9 OP
/*У рядку символів визначити кількість повторень кожного слова та видалити дублікати слів
Слова відокремлюються пробілами*/
#include "work_with_str.h"
using namespace std;

int main() {
    string str;         //Введена строка
    string mass_of_words[20], repetitive_words[20]; //Масиви, що зберігають слова і повторювані слова
    int number_of_words, repetitions_number;        //Кількість слів і повторюваних слів
    cout << "Enter sting: ";
    getline(cin, str);
    /*Виклик функції, що заносить окремі слова із строки в
    масив і повертає значення кількості слів*/
    number_of_words = make_mass_of_words(str, mass_of_words);

    /*Виклик функції, що рахує і виводить кількість повторів
    слів і повертає значення кількості повторів*/
    repetitions_number = number_of_repetitions(mass_of_words, number_of_words, repetitive_words);

    /*Виклик функції, що видаляє дублікати слів і виводить строку*/
    remove_duplicates(repetitive_words, repetitions_number, str);
    return 0;
}