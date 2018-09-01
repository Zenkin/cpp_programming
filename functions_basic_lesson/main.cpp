#include <iostream>

using namespace std;

void function(int *parameter);
void cube(int *p_array, int length);
int getStrLength(char *str);
void myStrcat(char *where2Copy, const char *what2Copy);

int main() {
    char str1[100] = "Hello";
    char str2[] = " World!";
    myStrcat(str1, str2);
    cout << str1 << endl;

    return 0;
}

void myStrcat(char *where2Copy, const char *what2Copy) {
    int where2CopyLength;
    for(where2CopyLength = 0; where2Copy[where2CopyLength]; where2CopyLength++);
    int what2CopyLength;
    for(what2CopyLength = 0; what2Copy[what2CopyLength]; what2CopyLength++);
    for(int index = where2CopyLength; index < where2CopyLength+what2CopyLength; index++) {
        where2Copy[index] = what2Copy[index-where2CopyLength];
    }
    where2Copy[where2CopyLength+what2CopyLength] = '\0';
}

int getStrLength(char *str) {
    int i = 0;
    while (*(str+i)) {
        i++;
    }

    return i;
}

void function(int *parameter) {
    *parameter /= 10;
}

void cube(int *p_array, int length) {
    while(length) {
        *p_array = *p_array * *p_array * *p_array;
        p_array++;
        length--;
    }
}
