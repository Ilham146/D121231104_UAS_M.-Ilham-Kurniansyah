#include <stdio.h>

void displaySevenSegment(char number) {
    char segments[10][5][6] = {
        {"###", "# #", "# #", "# #", "###"},
        {"#  ", "#  ", "#  ", "#  ", "#  "},
        {"###", "  #", "###", "#  ", "###"},
        {"###", "  #", "###", "  #", "###"},
        {"# #", "# #", "###", "  #", "  #"},
        {"###", "#  ", "###", "  #", "###"},
        {"###", "#  ", "###", "# #", "###"},
        {"###", "  #", "  #", "  #", "  #"},
        {"###", "# #", "###", "# #", "###"},
        {"###", "# #", "###", "  #", "###"}
    };

    for (int i = 0; i < 5; i++) {
        printf("%20s\n", segments[number - '0'][i]);
    }
}

void displayTruthTable(int number) {
    int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    // Display header of the table
    printf("Desimal | A | B | C | D | E | F | G |\n");
    printf("%7d | ", number);

    // Display the segment configuration for the input number in one line
    for (int i = 0; i < 7; ++i) {
        printf("%1d | ", segments[number][i]);
    }
    printf("\n\n");
}

int main() {
    int inputNumber; 

    printf("Masukkan angka (0-9): ");
    scanf("%d", &inputNumber);

    if (inputNumber >= 0 && inputNumber <= 9) {
        displayTruthTable(inputNumber);
        displaySevenSegment('0' + inputNumber); 
    } else {
        printf("Angka yang dimasukkan tidak valid.\n");
    }

    return 0;
}
