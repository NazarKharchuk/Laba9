// Laba 9 OP
/*� ����� ������� ��������� ������� ��������� ������� ����� �� �������� �������� ���
����� �������������� ��������*/
#include "work_with_str.h"
using namespace std;

int main() {
    string str;         //������� ������
    string mass_of_words[20], repetitive_words[20]; //������, �� ��������� ����� � ���������� �����
    int number_of_words, repetitions_number;        //ʳ������ ��� � ������������ ���
    cout << "Enter sting: ";
    getline(cin, str);
    /*������ �������, �� �������� ����� ����� �� ������ �
    ����� � ������� �������� ������� ���*/
    number_of_words = make_mass_of_words(str, mass_of_words);

    /*������ �������, �� ���� � �������� ������� �������
    ��� � ������� �������� ������� �������*/
    repetitions_number = number_of_repetitions(mass_of_words, number_of_words, repetitive_words);

    /*������ �������, �� ������� �������� ��� � �������� ������*/
    remove_duplicates(repetitive_words, repetitions_number, str);
    return 0;
}