#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char word[30];
    while(1){
        printf("Please enter a word:\n");
        gets(word);
        if(word[0]=='0'){
            exit(1);
        }
        else{
            file=fopen("words.txt","a");
            if(file==NULL){
                perror("File could not be opened!");
            }
            else{
                fprintf(file,"%s\n",word);
                fclose(file);
            }
        }
    }
    return 0;
}
