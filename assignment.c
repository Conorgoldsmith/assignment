#include<stdio.h>
#include<stdlib.h>
int k1=1;
char rotCyph(char inputLetter);
char subCyph(char inputLetter);

int main()
{
    int choice;
    printf("Welcome, type message to be encrypted/decrypted into input.txt, then, choose either:\n1.Rotation Cypher Encryption\n2.Rotation Cypher Decryption\n3.Substitution Cypher Encryption\n4.Substitution Cypher Decryption\n\n");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("Enter a key (integer between [0,25])\n");
        scanf("%d", &k1);
        
              FILE *inputtext;
        inputtext=fopen("input.txt", "r");
        char ch;
        char newLetter;
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
            newLetter=rotCyph(ch);
            printf("%c", newLetter);
        }
        printf("\n");
        }
        
    if (choice==2)
    {
        printf("Enter assigned key\n");
        scanf("%d", &k1);
        k1=-k1;
        
              FILE *inputtext;
        inputtext=fopen("input.txt", "r");
        char ch;
        char newLetter;
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
            newLetter=rotCyph(ch);
            printf("%c", newLetter);
        }
        printf("\n");
        }

}


char rotCyph(char inputLetter)
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

char subCyph(char inputLetter)
{
    
}