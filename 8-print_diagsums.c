#include <stdio.h>

void setCharPointer(char **ptr, char value) {
    *ptr = &value;
}

int main() {
    char myChar = 'A';
    char *myCharPointer = NULL;

    setCharPointer(&myCharPointer, myChar);

    if (myCharPointer != NULL) {
        printf("The value of myCharPointer is: %c\n", *myCharPointer);
    } else {
        printf("myCharPointer is NULL\n");
    }

    return 0;
}
