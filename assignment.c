#include<stdio.h>

int main()
{
    int k=1; //degree of rotation
    int alphabet[26];
    for (int counter=1 ; counter <= 26 ; counter++)
    {
        alphabet[counter] = counter;
    }
    char inputLetter;
    int inputLetterInteger;
    scanf("%c", &inputLetter);
    inputLetter=inputLetter-96;
    inputLetterInteger=inputLetter;
    printf("%d\n", alphabet[inputLetterInteger]);
    
    int newLetter;
    newLetter=((inputLetter+k) % 26);
    printf("%d", newLetter);
}
