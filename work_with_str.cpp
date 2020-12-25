#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;

/*Функція, що заносить окремі слова із строки в масив і повертає значення кількості слів*/
int make_mass_of_words(string str, string* arr) {
	size_t begin_word = 0, end_word;
	int i = 0;
	while ((end_word = str.find(" ", begin_word)) != string::npos) {
		arr[i] = str.substr(begin_word, end_word - begin_word);
		begin_word = end_word + 1;
		i++;
	}
	return i;
}

/*Функція, що рахує і виводить кількість повторів слів і повертає значення кількості повторів*/
int number_of_repetitions(string* arr_of_words, int number, string* repetitive_words) {
	int repetitions = 0, N = 0, M = 0, flag = 1;
	string output_words[20];
	for (int i = 0; i < number; i++) {
		for (int j = i + 1; j < number; j++) {
			if (arr_of_words[i] == arr_of_words[j]) {
				repetitions++;
				repetitive_words[N] = arr_of_words[i];
				N++;
			}
		}
		for (int n = 0; n <= M; n++) {
			if (arr_of_words[i] == output_words[n])
				flag = 0;
		}
		if (flag) {
			cout << "The word \" " << arr_of_words[i] << " \" is repeated " << repetitions + 1 << " times" << endl;
			M++;
		}
		repetitions = 0;
	}
	return N;
}

/*Функція, що видаляє дублікати слів і виводить строку*/
void remove_duplicates(string repetitive_words[], int N, string str) {
	for (int i = 0; i < N; i++) {
		while (str.find(repetitive_words[i]) != str.rfind(repetitive_words[i])) {
			str.erase(str.find(repetitive_words[i]), string(repetitive_words[i]).size() + 1);
		}
	}
	cout << str;
}