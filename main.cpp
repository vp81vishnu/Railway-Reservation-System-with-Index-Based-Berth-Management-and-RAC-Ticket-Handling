#include <iostream>
#include <string>
#include "cancel.h"

using namespace std;

int main() {
    Cancel cancel;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. Cancel Ticket" << endl;
        cout << "3. View Available Tickets" << endl;
        cout << "4. Print Booked Tickets" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cancel.bookTicket();
                break;
            case 2:
                cancel.cancelTickets();
                break;
            case 3:
                cancel.viewAvailableTickets();
                break;
            case 4:
                cancel.printTickets();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
