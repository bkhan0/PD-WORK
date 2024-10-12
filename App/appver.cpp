#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string clientUsername = "client1";
string clientPassword = "password123";
string lawyerUsername = "lawyer1";
string lawyerPassword = "lawpass";

string caseTitle = "";
string caseRequest = "";
string caseStatus = "Pending";
bool caseRequested = false;

void clearScreen() {
    system("cls");
}

void signUp() {
    string newUsername, newPassword;
    cout << "Sign Up - Create your client account." << endl;
    cout << "Enter your username: ";
    getline(cin, clientUsername);
    cout << "Enter your password: ";
    getline(cin, clientPassword);

    cout << "Client sign-up successful!" << endl;
    cout << "Press Enter to continue...";
}

void requestCase() {
    cout << "Enter the title of your case: ";
    getline(cin, caseTitle);

    cout << "Enter the details of your case: ";
    getline(cin, caseRequest);
    caseRequested = true;
    cout << "Case requested successfully!" << endl;

    cout << "\nRegistered Case Details:\n";
    cout << "Case Title: " << caseTitle << endl;
    cout << "Your case details: " << caseRequest << endl;
    cout << "Current status: " << caseStatus << endl;

    cout << "\nPress Enter to go back...";
    cin.ignore();
    clearScreen();
}

void viewCaseStatus() {
    if (caseRequested) {
        cout << "Case Title: " << caseTitle << endl;
        cout << "Your case details: " << caseRequest << endl;
        cout << "Current status: " << caseStatus << endl;
    } else {
        cout << "You have no existing cases." << endl;
    }

    cout << "\nPress Enter to go back...";
    cin.ignore();
    clearScreen();
}

void viewCurrentCase() {
    if (caseRequested) {
        cout << "Current case requested by client: " << caseTitle << endl;
        cout << "Details: " << caseRequest << endl;
        cout << "Current status: " << caseStatus << endl;
    } else {
        cout << "No cases have been requested by clients." << endl;
    }

    cout << "\nPress Enter to go back to the options...";
    cin.ignore();
    cin.ignore();
    clearScreen();
}

bool confirmLogout() {
    char choice;
    cout << "Do you really want to log out? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

void clientInterface() {
    while (true) {
        cout << "Options: " << endl;
        cout << "1. Request a case" << endl;
        cout << "2. View existing case status" << endl;
        cout << "3. Logout" << endl;
        cout << "Choose an option (1, 2, or 3): ";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            clearScreen();
            requestCase();
        } else if (choice == 2) {
            clearScreen();
            viewCaseStatus();
        } else if (choice == 3) {
            if (confirmLogout()) {
                clearScreen();
                cout << "Logging out..." << endl;
                Sleep(1000);
                return;
            } else {
                clearScreen();
                cout << "Returning to client options..." << endl;
            }
        } else {
            cout << "Invalid option. Please choose 1, 2, or 3." << endl;
        }
    }
}

void lawyerInterface() {
    while (true) {
        cout << "Options: " << endl;
        cout << "1. View current case" << endl;
        cout << "2. View requested cases by clients" << endl;
        cout << "3. Logout" << endl;
        cout << "Choose an option (1, 2, or 3): ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            clearScreen();
            viewCurrentCase();
        } else if (choice == 2) {
            clearScreen();
            viewCurrentCase();
        } else if (choice == 3) {
            if (confirmLogout()) {
                clearScreen();
                cout << "Logging out..." << endl;
                Sleep(1000);
                return;
            } else {
                clearScreen();
                cout << "Returning to lawyer options..." << endl;
            }
        } else {
            cout << "Invalid option. Please choose 1, 2, or 3." << endl;
        }
    }
}

void login() {
    string username, password;
    cout << "Login - Please enter your username: ";
    getline(cin, username);
    cout << "Please enter your password: ";
    getline(cin, password);

    if (username == clientUsername && password == clientPassword) {
        clearScreen();
        cout << "Login successful! Welcome, " << username << " (Client)!" << endl;
        clientInterface();
    } else if (username == lawyerUsername && password == lawyerPassword) {
        clearScreen();
        cout << "Login successful! Welcome, " << username << " (Lawyer)!" << endl;
        lawyerInterface();
    } else {
        cout << "Invalid username or password. Press Enter to try again." << endl;
        cin.ignore();
    }
}

int main() {
    do {
        clearScreen();
        cout << "Welcome to the Case Management System" << endl;
        cout << "1. Sign Up (Client Only)" << endl;
        cout << "2. Login" << endl;
        cout << "Choose an option (1 or 2): ";
        int option;
        cin >> option;
        cin.ignore();

        if (option == 1) {
            clearScreen();
            signUp();
        } else if (option == 2) {
            clearScreen();
            login();
        } else {
            cout << "Invalid option. Please choose 1 or 2." << endl;
        }

        cin.ignore();
    } while (true);

    return 0;
}
