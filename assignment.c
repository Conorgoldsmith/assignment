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
    //char inputString[256];
    //scanf("%s", inputString);
    int inputLetterInteger;
    scanf("%c", &inputLetter);
    inputLetter=inputLetter-96;
    //inputString[256]=inputString[256]-96;
    inputLetterInteger=inputLetter;
    printf("%d\n", alphabet[inputLetterInteger]);
    char newLetter;
    int newLetterInteger;
    //char newInputString[256];
    //newInputString=((inputString)-96)+k);
    newLetterInteger=((inputLetter+k) % 26);
    newLetter=newLetterInteger+96;
    printf("%c", newLetter);
    //printf("%s", newInputString);
}

//#include <stdio.h>
//int main() 
//{
  //  char string[] = "this is a string";
    //int n;
    //for(n=0 ; n<15 ; n++)
    //{
    //    string[n]=string[n]+1;
    //}
    //for(int i=0 ; i< 15 ; i++)
    //{
    //    printf("%c", string[i]);
    //}

//;}
