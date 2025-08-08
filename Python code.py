#Mengyao Zhou
import sys

# Check if a command-line argument is provided

if len(sys.argv) != 2:

    sys.exit(1)  # Exit if the word is not provided

# Get the word from the command-line argument

userWord = sys.argv[1]  # The word is taken from the command-line argument

middle = round(len(userWord) / 2)

# Initialize the check variable to True. It will later be set to False if a mismatch is found

check = True

# Loop through the first half of the word and compare it with the second half

for i in range(middle + 1):

    # Compare characters at corresponding positions from the start and end

    if userWord[i:i+1] != userWord[len(userWord)-i-1:len(userWord)-i]:

        # If a mismatch is found, set check to False and exit the loop

        check = False

        break  # Exit the loop early if a mismatch is found

# After the loop, check if the word is a palindrome

if check == True:

    print(f"{userWord} is a palindrome!") #Pass Ok

else:

    print(f"{userWord} is not a palindrome!") #Pass False