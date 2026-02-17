#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    // Initializing/declaring variables
    double bill; // Original bill amount
    double taxRate; // Tax rate in percent
    int tipLevel; // Tip level in integer
    int tipInt; // Whether tip should be added (1 = yes, 2 = no)

    // Calculated variables
    double billPreTip; // Taxed bill pre-tip
    double tip; // Calculated tip

    // Setting original bill amount
    cout << "Enter the original bill amount: ";
    cin >> bill;

    // Setting tax rate amount
    cout << "Enter the tax rate %: ";
    cin >> taxRate;

    // Getting tip level integer
    cout << "Enter tip level (1=10%, 2=15%, 3=20%, 4=25%): ";
    cin >> tipLevel;

    // Re-run code if tip level is out of bounds
    while (!(tipLevel >= 1 && tipLevel <= 4)) 
    {
        cout << "Out of bounds." << endl;
        cout << "Enter tip level (1=10%, 2=15%, 3=20%, 4=25%): ";
        cin >> tipLevel;
    }

    // Get whether tip should be added post-tax
    cout << "Tip on post-tax amount? (1=yes, 2=no): ";
    cin >> tipInt;

    // Re-run code if tip code is out of bounds
    while (!(tipInt == 1 || tipInt == 2)) 
    {
        cout << "Out of bounds." << endl;
        cout << "Tip on post-tax amount? (1=yes, 2=no): ";
        cin >> tipInt;
    }

    // Calculating bill pre-tip
    billPreTip = bill * (1 + (taxRate / 100));
    
    // Calculating tip
    if (tipInt == 1) {
        switch (tipLevel) 
        {
            case 1:
                tip = billPreTip * 0.1;
                break;
            case 2:
                tip = billPreTip * 0.15;
                break;
            case 3:
                tip = billPreTip * 0.2;
                break;
            case 4:
                tip = billPreTip * 0.25;
                break;
        }
    }

    if (tipInt == 2) {
        switch (tipLevel) 
        {
            case 1:
                tip = bill * 0.1;
                break;
            case 2:
                tip = bill * 0.15;
                break;
            case 3:
                tip = bill * 0.2;
                break;
            case 4:
                tip = bill * 0.25;
                break;
        }
    }

    // Round results
    billPreTip = round(billPreTip * 100.0) / 100.0;
    tip = round(tip * 100.0) / 100.0;

    // Outputting results
    cout << "The total bill pre-tip is: $" << fixed << setprecision(2) << billPreTip << endl;
    cout << "The total tip is: $" << tip << endl;
    cout << "The total bill post-tip is: $" << fixed << setprecision(2) << billPreTip + tip << endl;
}