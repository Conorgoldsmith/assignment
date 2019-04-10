#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
FILE *inputtext;
char inputletters[256];
char ch;
int k=18; //degree of rotation
int inputletterint;
char newLetter;
int newLetterInteger;
inputtext=fopen("input.txt", "r");


   while((ch = fgetc(inputtext)) != EOF)
        for (int n=1 ; n<2 ; n++)
        {
    inputletterint=ch-96;
    newLetterInteger=((inputletterint+k));
    newLetter=newLetterInteger+96;
    inputletters[n]=newLetter;
    if(inputletters[1]<123 || inputletters[1]>96 || inputletters[1]==32){
        if (inputletters[1]>122){
            inputletters[1]=inputletters[1]-26;
        }
        if (inputletters[1]<97){
            inputletters[1]=inputletters[1]+26;
        }
        if (inputletters[1]==76){
            inputletters[1]=32;
        }
    }
    if (inputletters[1]>123 || inputletters[1]<96){
        inputletters[1]=ch;
    }

    printf("%c", inputletters[1]);
    }
    
    fclose(inputtext);
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
