#include<stdio.h>
#include<stdlib.h>

int k1=1;
int k2;
char rotCyph(char inputLetter);
char subCyph(char inputLetter);
char subCyphDec(char inputLetter);
char subKey[128];

int main()
{
    int choice;
    printf("Welcome, type message to be encrypted/decrypted into input.txt, then, choose either:\n1.Rotation Cypher Encryption\n2.Rotation Cypher Decryption\n3.Substitution Cypher Encryption\n4.Substitution Cypher Decryption\n5.Rotation Cypher Decryption Without Key\n\n");
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
    
    if (choice==3)
    {
            FILE *inputtext;
        inputtext=fopen("input.txt", "r");
        char ch;
        char newLetter;
        char keyletter;
        int n=1;
            FILE *subkey;
        subkey=fopen("substitutionkey.txt", "r");

        while((keyletter = fgetc(subkey)) != EOF) // channge ch to another name 
        {
            subKey[n]=keyletter;
            n++;
        }
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
            newLetter=ch;
            if(ch<123 && ch>63)
            {
                newLetter=subCyph(ch);
            }    

            printf("%c", newLetter);
        }
    printf("\n");
    }
    
    if (choice==4)
    {
            FILE *inputtext;
        inputtext=fopen("input.txt", "r");
        char ch;
        char newLetter;
        char keyletter;
        int n=1;
            FILE *subkey;
        subkey=fopen("substitutionkey.txt", "r");

        while((keyletter = fgetc(subkey)) != EOF) // channge ch to another name 
        {
            subKey[n]=keyletter;
            n++;
        }
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
            newLetter=ch;
            if(ch<123 && ch>63)
            {
                newLetter=subCyphDec(ch);
            }    

            printf("%c", newLetter);
        }
    printf("\n");
    }
    
    if(choice==5)
    {
              FILE *inputtext;
        inputtext=fopen("input.txt", "r");
        char ch;
        int letterCount[128];
        int i;
        for(i=1;i<27;i++)
        {
            letterCount[i]=1;
        }
        int n=1;
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
                if(ch-64==n)
                {
                    letterCount[n]++;
                }
                if(ch-64!=n)
                {
                    n++;
                }
        }
        printf("%d", letterCount[5]);
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
        char alphabet[27]={64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
        int x;
        char newLetter;
        

        for(x=1; x<27;x++)
        {
            if(inputLetter==alphabet[x])
            {
                newLetter=subKey[x];
            }
        }
    return newLetter;//change to newletter
}

char subCyphDec(char inputLetter)
{
        char alphabet[27]={64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
        int x;
        char newLetter;
        

        for(x=1; x<27;x++)
        {
            if(inputLetter==subKey[x])
            {
                newLetter=alphabet[x];
            }
        }
    return newLetter;//change to newletter
}