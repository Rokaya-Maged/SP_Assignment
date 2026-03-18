#include <iostream>
using namespace std;



void is_prime(int b)//a function to see if number is prime or not , problem 1
{
	bool x=0;//to stop the loop
	for (int i=2;i<b;i++){//starting from 2 since all are divisble by 1 and i<b because b will be divisable on b
		if (b%i==0){//if there is a reminder it is a prime if it is equal to zero it is not a prime
		x=1;	//when it is not a prime bool x is equal to 1
		}
	}
	if (b<=1){
		cout<<"0"<<endl; //this is an if condition to see if b is 1 or less it is not prime
	}
	else if (x==0){
		cout<<"1"<<endl; //if x==0 then it is a prime and there is a reminder so it is not divisble by anything the output is 1
	}
	else {
		cout<<"0"<<endl; // the output is 0 as it is not prime
	}
}




int equal(char Word1[], char Word2[], int a, int b) { // Problem 2 with array
    Word1[a + 1];
    Word2[b + 1];
    int size = 0; // Initialize variable to store the size of the smaller array
    int counter = 0; // Initialize counter for matching characters

    // Determine the size of the smaller array
    if (a <= b) {
        size = a; // Set size to the length of array word 1 if it's smaller
    } else {
        size = b; // Otherwise, set size to the length of array word 2
    }

    // Compare corresponding elements of the two arrays
    for (int i = 0; i <= size; ++i) {
        if (Word1[i] == Word2[i]) {
            counter++; // Increment the counter
        } else {
            counter; // No change in counter
            break; // Exit the loop at the first difference between arrays
        }
    }

    return counter; // Return the number of matching characters
}


void number_of_matches(string a,string c)//problem 2 with string
 {
	int C=0; //a counter
	int x=min(a.size(),c.size());//using the minmum and size function to see which size is smaller
	for (int i=0;i<x;i++){
		if (a[i]==c[i]){//checking every char in the string
			C++;//adding 1 as the chars are equal
		}
		else {
			break;//in the first difference found it should break and not check other chars
		}
		}
		cout<<C<<endl;//the output
	}

void problem3(long long int number, char answer) {

    // Display program instructions
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;
    cout << endl;

    // Repeat until the user chooses to stop
    do {
        // Flag to indicate if a positive integer has been entered
        bool flag = false;
        // get the user to enter a positive integer
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check if the number is negative
        if (number < 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        // getting divisors of the entered positive integer
        for (int i = number; i > 0; i--) {
            if (number % i == 0)
                cout << i << endl;
        }

        // Set flag to true if divisors are printed
        flag = true;


        if (flag == true) {
        // ask if user would like to see divisors for another integer
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> answer;
        }

        // check if the user entered correct response
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> answer;
        }

    } while (answer == 'y' || answer == 'Y'); //repeat while answer is yes
}



const int rows = 3;
const int columns = 3; // Define the size of the matrices

// Function to perform matrix multiplication , problem 5
void matrixMultiplication(int matrix1[rows][columns], int matrix2[rows][columns]) {
    int result[rows][columns] = {0}; // Initialize the result matrix with zeros

    // Perform matrix multiplication
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            for (int k = 0; k < rows; ++k) {
                // Multiply corresponding elements and accumulate the result
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the result of matrix multiplication
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}

// Function to calculate  Hanzalah's age based on birth year and birth month, problem 6
double calculatehanzalahage(int months, int year)
{
    // Constants for birth year, birth month, and specific ages
    int const hanzalahage_birth_year = 1938;
    int const hanzalahage_birth_month = 5;
    int const hanzalahage_1948 = 10;
    int const months_jan_2027 = 1;

    // Check if the provided year and month are before Hanzalah's birth
    if (year < hanzalahage_birth_year || (year == hanzalahage_birth_year && months <= hanzalahage_birth_month))
    {
        return 0.0; //  Hanzalah's age is 0 if before birth
    }
    // Check if the provided year and month are within the period of constant age
    else if (hanzalahage_birth_year <= year && year <= 1948 && months >= hanzalahage_birth_month)
    {
        // Calculate  Hanzalah's age up to 1948
        return year - hanzalahage_birth_year + (months >= hanzalahage_birth_month ? months / 12.0 - (5 / 12.0) : 0.0);
    }
    // Check if the provided year is within the period of constant age
    else if (1948 <= year && year < 2027)
    {
        return hanzalahage_1948; //  Hanzalah's age is constant until 2027
    }
    // Check if the provided year and month are at the start of  Hanzalah's age increase
    else if (year == 2027 && months == months_jan_2027)
    {
        return hanzalahage_1948; //  Hanzalah's age remains constant until Jan 2027
    }
    // Calculate Hanzalah's age starting from Jan 2027
    else if (year >= 2027 && months > months_jan_2027)
    {
        return year - 2017 + (static_cast<double>(months) / 12.0); // Calculate age from Jan 2027
    }
}


// Function to encrypt a message
void encrypt_message(char message[], int size) { // Problem 7
    char encrypt[size]; // Array to store encrypted message
    cout << "enter size of message: ";
    cin >> size; // Read size of message from user
    cout << " " << endl;

    cout << "enter message: ";

    // Read the message and encrypt each character
    for (int i = 0; i < size; i++) {
        cin >> message[i]; // Read each character of the message
        encrypt[i] = message[i] + 5; // Encrypt each character by adding 5 to its ASCII value
    }

    // Output the encrypted message
    cout << "Encrypted message: ";
    for (int i = 0; i < size; i++) {
        cout << encrypt[i]; // Output each character of the encrypted message
    }
}

// Function to decrypt a message
void decrypt_message(char encrypt[], int size) { // Problem 7
    char message[size]; // Array to store decrypted message
    char decrypt[size]; // Array to store decrypted characters

    cout << "enter size of message: ";
    cin >> size; // Read size of message from user
    cout << " " << endl;

    cout << "enter message: ";

    // Read the encrypted message and decrypt each character
    for (int i = 0; i < size; i++) {
        cin >> encrypt[i]; // Read each character of the encrypted message
        decrypt[i] = encrypt[i] - 5; // Decrypt each character by subtracting 5 from its ASCII value
    }

    // Output the decrypted message
    cout << "Decrypted message: ";
    for (int i = 0; i < size; i++) {
        cout << decrypt[i]; // Output each character of the decrypted message
    }
}

// Function to create a graph matrix, problem 8
int graphMatrix() {
    int size = 0; // Variable to store the size of the input matrix
    cout << "please enter size" << endl;
    cin >> size; // Read the size of the input matrix from the user
    string input = ""; // Variable to store user input
    int inputMatrix[size][3] = {0}; // Input matrix to store user-provided values
    int outputMatrix[6][6] = {0}; // Output matrix for storing the graph matrix

    cout << "please enter input matrix" << endl;
    // Loop to read user input and fill the input matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> input; // Read input from the user
            // Convert user input to integer and store it in the input matrix
            if (input == "a") inputMatrix[i][j] = 0;
            else if (input == "b") inputMatrix[i][j] = 1;
            else if (input == "c") inputMatrix[i][j] = 2;
            else if (input == "d") inputMatrix[i][j] = 3;
            else if (input == "e") inputMatrix[i][j] = 4;
            else if (input == "f") inputMatrix[i][j] = 5;
            else inputMatrix[i][j] = stoi(input); // Convert string input to integer
        }
    }

    // Fill the output matrix based on the input matrix
    for (int i = 0; i < size; ++i) {
        // Set values in the output matrix based on the connections in the input matrix
        outputMatrix[inputMatrix[i][0]][inputMatrix[i][1]] = inputMatrix[i][2];
        outputMatrix[inputMatrix[i][1]][inputMatrix[i][0]] = inputMatrix[i][2];
    }

    // Output the resulting graph matrix
    cout << "Output Matrix:" << endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << outputMatrix[i][j] << " "; // Print each element of the output matrix
        }
        cout << endl;
    }

    return 0;
}

// Function to shift elements of an array to the right
int shift_right() {
    int size = 0; // Variable to store the size of the array
    cout << "please enter size" << endl;
    cin >> size; // Read the size of the array from the user

    const int maxSize = 1000; // Maximum size of the array
    if (size > maxSize || size < 0) { // Check if the size is valid
        cout << "Invalid size."; // Display error message for invalid size
        return 1; // Exit the function with an error code
    }

    float arr[maxSize]; // Array to store input numbers
    for (int i = 0; i < size; ++i) {
        cout << "please enter num " << i + 1 << endl;
        cin >> arr[i]; // Read each number into the array
    }

    int left = 0, right = 0, distance = 0; // Variables to store shift parameters
    cout << "please enter left" << endl;
    cin >> left; // Read the left index from the user
    cout << "please enter right" << endl;
    cin >> right; // Read the right index from the user
    cout << "please enter distance" << endl;
    cin >> distance; // Read the distance of shift from the user

    // Check if the shift parameters are valid
    if (left > right || distance < 0 || right >= maxSize || left < 0) {
        cout << "Invalid input."; // Display error message for invalid input
        return 1; // Exit the function with an error code
    } else {
        // Shift elements to the right within the specified range
        for (int i = right; i >= left; --i) {
            if (i + distance < maxSize) // Check if the shifted index is within bounds
                arr[i + distance] = arr[i]; // Move the element to its new position
        }
        // Output the shifted array
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << ' '; // Print each element of the shifted array
        }
    }

    return 0;
}




int main() {
    int problem; // Variable to store the chosen problem number
    long long int number; // Variable for problem 3
    char answer; // Variable for problem 3
    int months, year; // Variables for problem 6
    double age; // Variable for problem 6
    int size; // Variable for problem 7
    char choice; // Variable for problem 7
    int t = 1; // Counter variable for loop in problem 4
    string a, c; // Variables for problem 2 with string

    // Get the user to choose a problem
    cout << "Choose the problem" << endl;
    cin >> problem;

    // Call the problem function based on the user's choice
    if (problem == 1) {
        // Call function to check if a number is prime
        cout << "Enter the number: ";
        int b; // Variable to store user input
        cin >> b; // Input from the user
        is_prime(b); // Calling the function
    } else if(problem == 2) {
        // Handle problem 2 - comparing arrays or strings
        cout << "which way? array or string" << endl;
        string ans; // Variable to store user choice
        cin >> ans; // Input from the user
        if(ans == "array") {
            // Compare arrays
            cout << "Enter the size of the array: " << endl;
            int a; cin >> a; // Input from the user
            cout << "Enter the other size of the array: " << endl;
            int b; cin >> b; // Input from the user
            cout << "Enter word one: " << endl;
            char Word1[a + 1]; // Array for word one
            for(int i = 0; i < a; ++i) cin >> Word1[i]; // Input from the user
            cout << "Enter word two: " << endl;
            char Word2[b + 1]; // Array for word two
            for(int i = 0; i < b; ++i) cin >> Word2[i]; // Input from the user
            cout << equal(Word1, Word2, a, b); // Compare arrays
        } else if(ans == "string") {
            // Compare strings
            cout << "enter the words: " << endl;
            cin >> a >> c; // Input from the user
            number_of_matches(a, c); // Calling the function here
        }
    } else if (problem == 3) {
        // Handle problem 3 - positive divisors of positive integers
        problem3(number, answer); // Calling the function
    } else if(problem == 4) {
        // Handle problem 4 - shift elements of an array to the right
        while(t) { // Loop for problem 4
            shift_right(); // Calling the function
            t--; // Decrement the counter
        }
    } else if (problem == 5) {
        // Handle problem 5 - matrix multiplication
        const int rows = 3; // Define the number of rows
        const int columns = 3; // Define the number of columns
        int matrix1[rows][columns]; // Matrix 1
        int matrix2[rows][columns]; // Matrix 2
        // Input values for matrix 1
        cout << "Enter values for matrix 1:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cin >> matrix1[i][j]; // Input from the user
            }
        }
        // Input values for matrix 2
        cout << "Enter values for matrix 2:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cin >> matrix2[i][j]; // Input from the user
            }
        }
        matrixMultiplication(matrix1, matrix2); // Calling the function
    } else if (problem == 6) {
        // Handle problem 6 - calculate Hanzalah's age
        cout << "Enter a month: ";
        cin >> months; // Input from the user
        cout << "Enter a year: ";
        cin >> year; // Input from the user
        age = calculatehanzalahage(months, year); // Calculate Hanzalah's age
        cout << " Hanzalah age is: " << age << endl; // Output Hanzalah's age
    } else if (problem == 7) {
        // Handle problem 7 - encrypt or decrypt a message
        cout << "Enter size of message: ";
        cin >> size; // Input from the user
        char message[size]; // Array to store the message
        char encrypt[size]; // Array to store the encrypted message
        cout << "Choose (E) to encrypt or (D) to decrypt: ";
        cin >> choice; // Input from the user
        if (choice == 'E' || choice == 'e')
            encrypt_message(message, size); // Encrypt the message
        else if (choice == 'D' || choice == 'd')
            decrypt_message(encrypt, size); // Decrypt the message
        else
            cout << "Please choose a valid option." << endl; // Error message for invalid choice
    } else if (problem == 8) {
        // Handle problem 8 - create a graph matrix
        while(t) { // Loop for problem 8
            graphMatrix(); // Calling the function
            t--; // Decrement the counter
        }
    }

    return 0;
}

/*
problem 1
enter your number:1
0
enter your number:2
1


Problem 2

test 1(string)
hello
hey
2

abcd
abed
2

ahahaha
hahahaha
0

lalala
lalama
4

test 2 (array)
Enter the size of the array:
5
Enter the other size of the array:
3
Enter word one:
hello
Enter word two:
hey
2

Enter the size of the array:
4
Enter the other size of the array:
4
Enter word one:
hasn
Enter word two:
hany
2

Enter the size of the array:
5
Enter the other size of the array:
6
Enter word one:
ahaha
Enter word two:
hahaha
0




problem 3

This program is designed to exhibit the positive divisors of positive integers supplied by you. The programs will repeatedly prompt you to enter a positive integer.
Each time you enter a positive integer, the progran will print all the divisors of your integer in a column and in decreasing order.
Please enter a positive Integer: 30
30
15
10
6
5
3
2
1 Would you like to see the divisers of another integer (Y/N)7 у
Please enter a positive integer: -2
2 is not a positive integer
Please enter a positive integer: 14
14
7
2
1


 problem 4

please enter size
5
please enter num 1
1.2
please enter num 2
5.9
please enter num 3
4.3
please enter num 4
7.7
please enter num 5
9.3
please enter left
0
please enter right
3
please enter distance
2
1.2 5.9 1.2 5.9 4.3


please enter size
7
please enter num 1
7
please enter num 2
-8
please enter num 3
9
please enter num 4
-10
please enter num 5
11
please enter num 6
-12
please enter num 7
13
please enter left 0
please enter right
1
please enter distance
5
7-8 9 -10 11 7 -8

problem 5

test case 1
Enter values for matrix 1:
1 2 3
4 5 6
7 8 8
Enter values for matrix 2:
23 34 54
12 54 67
78 57 23
Result of matrix multiplication:
281 313 257
620 748 689
881 1126 1098

problem 6


test case1

Enter a month: 5
Enter a year: 1999
Hanzalah Age: 10


test case 2

Enter a month: 9
Enter a year: 2090
Hanzalah Age: 73.75

problem 7

Test 1
choose (E)to encrypt and (D) to decrypt:E
choose size of message: 5
enter messege: Hello
encrypted message:Mjqqt

Test 2
choose (E)to encrypt and (D) to decrypt:D
choose size of message: 7
enter messege: Free2027
encrypted message:Am''-+-

problem 8
please enter size
8
please enter input matrix
a b 6
f d 7
d e 4
e c 1
b f 3
c d 2
a f 10
a d 9
Output Matrix:
0 6 0 9 0 10
6 0 0 0 0 3
0 0 0 2 1 0
9 0 2 0 4 7
0 0 1 4 0 0
10 3 0 7 0 0





 */
