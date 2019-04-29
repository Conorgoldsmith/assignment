#include<stdio.h>
#include<stdlib.h>

int key2;
int key1;
int k1=1;
int k2;
char rotCyph(char inputLetter);
char rotCyphUnk(char inputLetter);
char rotCyphUnk1(char inputLetter);
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
        FILE *inputtext1;
        FILE *inputtext2;
        inputtext=fopen("input.txt", "r");
        inputtext1=fopen("input.txt", "r");
        inputtext2=fopen("input.txt", "r");
        char ch;
        char ch1;
        char ch2;
        int n=1;
        char newLetter;
        int i;
        int n1, n2;
        int count=0;
        float max=-1e30;
        int maxindex;
        char inputArray[10000];
        char newLetters;
        char newL, newL1;
        int cntA, cntB, cntC, cntD, cntE, cntF, cntG, cntH, cntI, cntJ, cntK, cntL, cntM, cntN, cntO, cntP, cntQ, cntR, cntS, cntT, cntU, cntV, cntW, cntX, cntY, cntZ;
        while((ch = fgetc(inputtext)) != EOF) // channge ch to another name 
        {
            inputArray[n]=ch;
            ++n;
        }
        for(i=1;i<128;i++)
        {
            switch(inputArray[i])
            {
                case 65:cntA++;
                    break;
                case 66:cntB++;
                    break;
                case 67:cntC++;
                    break;
                case 68:cntD++;
                    break;
                case 69:cntE++;
                    break;
                case 70:cntF++;
                    break;
                case 71:cntG++;
                    break;
                case 72:cntH++;
                    break;
                case 73:cntI++;
                    break;
                case 74:cntJ++;
                    break;
                case 75:cntK++;
                    break;
                case 76:cntL++;
                    break;
                case 77:cntM++;
                    break;
                case 78:cntN++;
                    break;
                case 79:cntO++;
                    break;
                case 80:cntP++;
                    break;
                case 81:cntQ++;
                    break;
                case 82:cntR++;
                    break;
                case 83:cntS++;
                    break;
                case 84:cntT++;
                    break;
                case 85:cntU++;
                    break;
                case 86:cntV++;
                    break;
                case 87:cntW++;
                    break;
                case 88:cntX++;
                    break;
                case 89:cntY++;
                    break;
                case 90:cntZ++;
                    break;
                default: 
                    break;
            }
        }
    int data[26];
    data[0]=cntA; data[1]=cntB; data[2]=cntC; data[3]=cntD; data[4]=cntE; data[5]=cntF; data[6]=cntG;
    data[7]=cntH; data[8]=cntI; data[9]=cntJ; data[10]=cntK; data[11]=cntL; data[12]=cntM; data[13]=cntN;
    data[14]=cntO; data[15]=cntP; data[16]=cntQ; data[17]=cntR; data[18]=cntS; data[19]=cntT; data[20]=cntU;
    data[21]=cntV; data[22]=cntW; data[23]=cntX; data[24]=cntY; data[25]=cntZ;
    while(count<26)
    {
        if(data[count]>max)
        {
            max=data[count];
            maxindex=count;
        }
        count++;
    }
    
        if(maxindex-4>0)
        {
            key1=maxindex+65-69;
        }
        else if(maxindex-4<=0)
        {
            key1=maxindex+65-69+26;
        }
        else if(maxindex==69)
        {   
            key1=maxindex+65;
        }
    
        if(maxindex-15>0)
        {
            key2=maxindex+65-84;
        }
        else if(maxindex-15<=0)
        {
            key2=maxindex+65-84+26;
        }
        else if(maxindex==84)
    {
        key2=maxindex+65;
    }
    printf("If E is the most common letter the message is:\n");
    while((ch1 = fgetc(inputtext1)) != EOF) // channge ch to another name 
        {
            newL=rotCyphUnk(ch1);
            printf("%c", newL);
        }
    
    printf("\n");
    printf("If T is the most common letter the message is:\n");
        while((ch2 = fgetc(inputtext2)) != EOF) // channge ch to another name 
        {
            newL1=rotCyphUnk1(ch2);
            printf("%c", newL1);
        }
    printf("\n");
    }
    return 0;
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

char rotCyphUnk(char inputLetter)
{
    char newLetters;
    newLetters=inputLetter+key1;
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

char rotCyphUnk1(char inputLetter)
{
    char newLetters;
    newLetters=(inputLetter+key2);
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
