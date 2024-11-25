#include <iostream>
using namespace std;
void removeCharacterAt(char* str, int index) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (index < 0 || index >= length) {
        cout << "Invalid index!" << endl;
        return;
    }
    for (int i = index; i < length - 1; i++) {
        str[i] = str[i + 1];
    }
    str[length - 1] = '\0';
}
int main() {
    char str[100];
    int index;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter the index of the character to remove: ";
    cin >> index;
    removeCharacterAt(str, index);
    cout << "Modified string: " << str << endl;
    return 0;
}
//void removeAllOccurrences(char* str, char ch) {
//    int readIndex = 0, writeIndex = 0;
//    while (str[readIndex] != '\0') {
//        if (str[readIndex] != ch) {
//            str[writeIndex] = str[readIndex];
//            writeIndex++;
//        }
//        readIndex++;
//    }
//    str[writeIndex] = '\0';
//}
//int main() {
//    char str[100];
//    char charToRemove;
//    cout << "Enter a string: ";
//    cin.getline(str, 100);
//    cout << "Enter the character to remove: ";
//    cin >> charToRemove;
//    removeAllOccurrences(str, charToRemove);
//    cout << "Modified string: " << str << endl;
//    return 0;
//}