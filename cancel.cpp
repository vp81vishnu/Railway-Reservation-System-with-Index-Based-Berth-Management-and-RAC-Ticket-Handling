#include <iostream>
#include "cancel.h"

void Cancel::cancelTickets() {
    string del_name;
    int ch;
    bool found = false;

    cout << "Enter your name: ";
    getline(cin >> ws, del_name); // Read full line, ignoring leading whitespace

    cout << "Choose which berth to cancel:" << endl;
    cout << "1. Upper\n2. Middle\n3. Lower" << endl;
    cin >> ch;

    switch (ch) {
        case 1:
            found = cancelFromList(upper, del_name);
            break;
        case 2:
            found = cancelFromList(middle, del_name);
            break;
        case 3:
            found = cancelFromList(lower, del_name);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    if (!found) {
        cout << "Ticket not found for the name " << del_name << "." << endl;
    }
}

bool Cancel::cancelFromList(vector<User>& berthList, const string& name) {
    for (auto it = berthList.begin(); it != berthList.end(); ++it) {
        if (it->getName() == name) {
            cout << "The ticket for " << name << " is deleted successfully." << endl;
            berthList.erase(it);
            if (!Rac_tickets.empty()) {
                berthList.push_back(Rac_tickets.front());
                Rac_tickets.erase(Rac_tickets.begin());
            }
            return true;
        }
    }
    return false;
}

