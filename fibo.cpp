/*
Task: Fibonacci Series

Description:
Implement a program that generates
the Fibonacci series up to a given
number of terms. Prompt the user to
enter the number of terms and display
the series.
*/

//Program

#include <iostream>
using namespace std;

int main() {
    // Get the number of terms from the user
    int numTerms;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> numTerms;

    // Check if the input is valid
    if (numTerms <= 0) {
        cout << "Please enter a positive integer for the number of terms."<<endl;
        return 1;
    }

    // Generate and display the Fibonacci series
    int firstTerm = 0, secondTerm = 1, nextTerm;

   cout << "Fibonacci Series up to " << numTerms << " terms: ";

    for (int i = 0; i < numTerms; ++i) {
        if (i < 2) {
            nextTerm = i;
        } else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

       cout << nextTerm << " ";
    }

    cout << endl;

    return 0;
}


/*
Output:

Enter the number of terms for the Fibonacci series: 10
Fibonacci Series up to 10 terms: 0 1 1 2 3 5 8 13 21 34 
*/