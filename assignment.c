#include<stdio.h>
#include<stdlib.h>

char subCyph(char inputLetter, char location);

int main()
{
    printf("Welcome, choose either:\n1.Rotation Cypher Encryption\n2.Rotation Cypher Decryption\n3.Substitution Cypher Encryption\n4.Substitution Cypher Decryption\n\n");
    
FILE *inputtext;
static char ch;
static int k=18; //degree of rotation
int inputletterint;
char newLetter;
int newLetterInteger;
inputtext=fopen("input.txt", "r");


   while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        for (int n=1 ; n<2 ; n++)
        {
    inputletterint=ch-96;
    newLetterInteger=((inputletterint+k));
    newLetter=newLetterInteger+96;
    if(newLetter<123 || newLetter>96 || newLetter==32){
        if (newLetter>122){
            newLetter=newLetter-26;
        }
        if (newLetter<97){
            newLetter=newLetter+26;
        }
        if (newLetter==76){
            newLetter=32;
        }
    }
    if (newLetter>123 || newLetter<96){
        newLetter=ch;
    }

    printf("%c", newLetter);
    }
    
    fclose(inputtext);
}


char subCyph(char inputLetter)
{
    inputLetter=ch-96;
    inputLetter=((inputletter+k));
    inputLetter=inputLetter+96;
    if(inputLetter<123 || inputLetter>96 || inputLetter==32){
        if (inputLetter>122){
            inputLetter=inputLetter-26;
        }
        if (inputLetter<97){
            inputLetter=inputLetter+26;
        }
        if (inputLetter==76){
            inputLetter=32;
        }
    }
    if (inputLetter>123 || inputLetter<96){
        inputLetter=ch;
    }

    printf("%c", inputLetter);
    }
    
    fclose(inputtext);
}
