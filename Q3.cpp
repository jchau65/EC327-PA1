#include <iostream>
using namespace std;

int main() 
{
    // Initialize/declare variables
    int num1;
    int num2;
    
    // Calculated variables (numbers in ternary format)
    int hammingDistance = 0;
    
    // Getting the two numbers through user input
    cout << "Enter two numbers between 0-100: " << endl;
    cin >> num1;
    cin >> num2;

    // Making reference variables so an independent copy can be made
    int& num1ref = num1;
    int& num2ref = num2;

    // Making independent copies of the variables to be modified
    int num1_ = num1ref;
    int num2_ = num2ref;

    // Calculate hamming distance
    for (int i = 4; i >= 0; i--)
    {   
        // Ternary terms for this power
        int num1ternary = 0;
        int num2ternary = 0;

        // Calculates the ternary term for num1
        while (num1_ >= pow(3, i)) 
        {
            num1_ -= pow(3, i);
            num1ternary++;
        }

        // Calculates the ternary term for num2
        while (num2_ >= pow(3, i)) 
        {
            num2_ -= pow(3, i);
            num2ternary++;
        }

        // If ternary term is different, incrase hamming distance by 1
        if (num1ternary != num2ternary) 
        {
            hammingDistance++;
        }
    }

    // Print out hamming distance
    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in ternary format is " << hammingDistance << ".";
}