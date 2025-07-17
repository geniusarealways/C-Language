#include<stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;
    char i,I,F,f;

    printf("ENTER THE NATIONALITY IN TERMS OF I (Indian) AND F (French): ");
    scanf(" %c", &ch);  // space before %c to consume any newline

    if (ch == 'I' || ch == 'i') {
        namaste();
    } else if (ch == 'F' || ch == 'f') {
        bonjour();
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}
