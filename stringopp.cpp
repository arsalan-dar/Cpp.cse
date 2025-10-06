#include <iostream>
using namespace std;

// length of string
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// reverse string
void stringReverse(char str[]) {
    int len = stringLength(str);
    cout << "Reversed String: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

// substring
void subString(char str[], int start, int end) {
    cout << "Substring: ";
    for (int i = start; i <= end && str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
}

// concatenate two strings
void concatenate(char str1[], char str2[]) {
    cout << "Concatenated String: ";
    int i = 0;
    while (str1[i] != '\0') {
        cout << str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        cout << str2[j];
        j++;
    }
    cout << endl;
}

// Function to find frequency of a character
int frequencyOfChar(char str[], char ch) {
    int count = 0, i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}

int main() {
    char str1[100], str2[100], ch;
    int start, end;

    cout << "Enter a string: ";
    cin >> str1;

    cout << "\nLength of string: " << stringLength(str1) << endl;

    stringReverse(str1);

    cout << "\nEnter start and end index for substring: ";
    cin >> start >> end;
    subString(str1, start, end);

    cout << "\nEnter another string to concatenate: ";
    cin >> str2;
    concatenate(str1, str2);

    cout << "\nEnter character to find frequency: ";
    cin >> ch;
    cout << "Frequency of '" << ch << "' = " << frequencyOfChar(str1, ch) << endl;

    return 0;
}
