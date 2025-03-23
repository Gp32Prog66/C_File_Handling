#include <stdio.h>

int main()
{
    FILE *filePTR;

    printf("Hello and welcome to the File Handling Program for C");

    filePTR = fopen(".\\Saved_Files\\test.txt", "w");

    fclose(filePTR);

    return 0;
}