#include<stdio.h>
#include<stdlib.h>
int k1;
char subCyph(char inputLetter);

int main()
{
    int choice;
    printf("Welcome, choose either:\n1.Rotation Cypher Encryption\n2.Rotation Cypher Decryption\n3.Substitution Cypher Encryption\n4.Substitution Cypher Decryption\n\n");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("Enter a key");
        scanf("%d", &k);
    }
    
    
      FILE *inputtext;
    inputtext=fopen("input.txt", "r");
    char ch;
    char newLetter;
    while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
    {
    newLetter=subCyph(ch);
    printf("%c", newLetter);
    }
    printf("\n");

}


char subCyph(char inputLetter)
{
    char newLetters;
    newLetters=inputLetter+k1;
    if(inputLetter<91 && inputLetter>64){
        if (newLetters>90){
            newLetters=newLetters-26;//could be 26
        }
        if (newLetters<63){
            newLetters=newLetters+26;//could be 26
        }
    }
    else
    {
        newLetters=inputLetter;
    }
    return newLetters;
}