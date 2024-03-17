#include <iostream>

using namespace std;

int main() {
    bool hasInvestor = false;
    bool hasGovernmentClearance = false;

    // Check for investors
    char investorChoice;
    cout << "Do you have investors? (y/n): ";
    cin >> investorChoice;

    if (investorChoice == 'y' || investorChoice == 'Y') {
        cout << "Investors are on board.\n";
        hasInvestor = true;
    } else {
        cout << "No investors. Cannot proceed further.\n";
        return 0;
    }

    // Check for government clearance
    char governmentClearanceChoice;
    cout << "Do you have government clearance? (y/n): ";
    cin >> governmentClearanceChoice;

    if (governmentClearanceChoice == 'y' || governmentClearanceChoice == 'Y') {
        cout << "Government clearance obtained.\n";
        hasGovernmentClearance = true;
    } else {
        cout << "No government clearance. Cannot proceed further.\n";
        return 0;
    }

    // Proceed with Manufacturing Faculty
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with Manufacturing Faculty...\n";
        // Implement Manufacturing Faculty module here
    }

    // Proceed with Supply-chain Management
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with Supply-chain Management...\n";
        // Implement Supply-chain Management module here
    }

    // Proceed with Quality Checkers
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with Quality Checkers...\n";
        // Implement Quality Checkers module here
    }

    // Proceed with Marketing and Sales
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with Marketing and Sales...\n";
        // Implement Marketing and Sales module here
    }

    // Proceed with After Sales Services
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with After Sales Services...\n";
        // Implement After Sales Services module here
    }

    // Proceed with Distribution and Dealership
    if (hasInvestor && hasGovernmentClearance) {
        cout << "Proceeding with Distribution and Dealership...\n";
        // Implement Distribution and Dealership module here
    }

    return 0;
}
