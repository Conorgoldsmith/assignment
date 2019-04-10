#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *inputtext;
char inputletters[256];
char ch;
int n=1;
inputtext=fopen("input.txt", "r");

   while((ch = fgetc(inputtext)) != EOF)


        printf("%c", ch);

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
