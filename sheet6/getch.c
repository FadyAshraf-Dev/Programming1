#include <stdio.h>
int main(){
    char x;
    int wordCount=0, sentenceCount=0;
    while((x = getche()) != 'q'){
        if (x==' '){
            wordCount++;
        }
        if (x=='.'){
            sentenceCount++;
        }

    }
    printf("that string are %d word and %d sentences", wordCount,sentenceCount);
    return 0;
}
