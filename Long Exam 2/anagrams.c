#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

#define MAXLETTERS 26

void scan_word(int occurences, int length);
bool is_anagram(int occurences1, int length1, int occurences2, int length2);

int main(void) {

    int i,
        same = 1,
        letters[MAXLETTERS] = {0};
    char c;

    printf("Enter first word: ");
    scan_word();

    printf("Enter second word: ");
    scan_word();
}
bool is_anagram(int occurences1, MAXLETTERS, int occurences2, MAXLETTERS){
    bool check;
    check = (arr1 == arr2)
    for (i = 0; i < MAXLETTERS ; i++) {
        if (letters[i] != 0) {
            same = 0;
            break;
        }
    if check = (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

void scan_word(){

    int occurences1[MAX_LETTERS] = {0};
    int occurences2[MAX_LETTERS] = {0}

    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            letters[toupper(c) - 'A']++;
        }
    }
    main()

    bool is_anagram (int occurences1, int MAXLETTERS, int occurences2, int MAX_LETTERS);
}
