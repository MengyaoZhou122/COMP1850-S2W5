//Mengyao Zhou

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(int argc, char *argv[]) 
{

    // Check if the command-line argument is provided

    if (argc != 2)
    {

        return 1;  // Exit with error if the word is not provided

    }

    // Get the word from the command-line argument

    char *userWord = argv[1];  // The word is passed as a command-line argument

    int len = strlen(userWord);

    int middle = len / 2;  // Find the middle of the word

    // Initialize the check variable to 1 (True). It will later be set to 0 (False) if a mismatch is found

    int check = 1;

    // Loop through the first half of the word and compare it with the second half

    for (int i = 0; i <= middle; i++) 
       {

        // Compare characters at corresponding positions from the start and end

        if (userWord[i] != userWord[len - i - 1]) 
         {

            // If a mismatch is found, set check to 0 (False) and exit the loop

            check = 0;

            break;  // Exit the loop early if a mismatch is found

         }

       }

    // After the loop, check if the word is a palindrome

    if (check == 1)
    {

        printf("%s is a palindrome!\n", userWord);//Pass Ok

    } else 
    {
        printf("%s is not a palindrome!\n", userWord);//Pass False
    }

    return 0;

}