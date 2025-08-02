#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 1000

// Sample sentences
char *sentences[] = {
    "The quick brown fox jumps over the lazy dog",
    "Typing fast is a useful skill for coding",
    "Practice makes a person perfect in everything",
    "C programming is powerful and flexible",
    "Speed and accuracy matter in a typing test"
};

void calculateResults(char *original, char *typed, double timeTaken);

int main() {
    int choice;
    srand(time(NULL));

    while (1) {
        printf("\n======= TYPING SPEED TEST =======\n");
        printf("1. Start Typing Test\n");
        printf("2. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        if (choice == 1) {
            int index = rand() % 5; // pick random sentence
            char input[MAX_LEN];

            printf("\nType the following:\n");
            printf("\"%s\"\n\n", sentences[index]);

            printf("Press ENTER when ready...\n");
            getchar();

            time_t start, end;
            double timeTaken;

            printf("Start typing:\n");
            

            start = time(NULL);
            fgets(input, sizeof(input), stdin);
            end = time(NULL);

            // Remove trailing newline
            input[strcspn(input, "\n")] = '\0';

            timeTaken = difftime(end, start);
            calculateResults(sentences[index], input, timeTaken);
        }
        else if (choice == 2) {
            printf("Exiting Typing Test.\n");
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

void calculateResults(char *original, char *typed, double timeTaken) {
    int correct = 0;
    int total = strlen(original);

    for (int i = 0; i < total && typed[i] != '\0'; i++) {
        if (original[i] == typed[i]) {
            correct++;
        }
    }

    int words = 1;
    for (int i = 0; typed[i] != '\0'; i++) {
        if (typed[i] == ' ') words++;
    }

    double accuracy = ((double)correct / total) * 100.0;
    double wpm = (words / timeTaken) * 60.0;

    printf("\n======= RESULT =======\n");
    printf("Time Taken: %.2f seconds\n", timeTaken);
    printf("Words Typed: %d\n", words);
    printf("Typing Speed: %.2f WPM\n", wpm);
    printf("Accuracy: %.2f%%\n", accuracy);
}