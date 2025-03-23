#include <stdio.h>

int main()
{
    FILE *filePTR;

    printf("Hello and welcome to the File Handling Program for C");

    //filePTR = fopen(".\\Saved_Files\\test.txt", "w");

    // filePTR = fopen(".\\Saved_Files\\test.txt", "a");

    // Write Text to the File
    // fprintf(filePTR, "First time writing to text");
    // fprintf(filePTR, "First time appending to text");

    // Make sure to add \n when adding text or it will print on the same line
    // fprintf(filePTR, "\nAdding a new line");

    filePTR = fopen(".\\Saved_Files\\test.txt", "r");

    // 500 Characters for each file max
    char fileString[500];

    // Use fgets function to get the job done
    while (fgets(fileString, 500, filePTR))
    {
        printf("%s", fileString);
    }
    fclose(filePTR);

    return 0;
}