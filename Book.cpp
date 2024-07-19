#include <iostream>
#include "book.h"

void Book::bookTicket() {
    User user;
    string name;
    int age;
    char gender;
    int berthPreference;

    cout << "What is your name? :";
    getline(cin >> ws, name);
    user.setName(name);

    cout << "What is your age? : ";
    cin >> age;
    user.setAge(age);

    cout << "What is your gender (M/F)? :";
    cin >> gender;
    user.setGender(gender);

    if (upper.size() >= MAX_BERTHS && lower.size() >= MAX_BERTHS && middle.size() >= MAX_BERTHS) {
        if (Rac_tickets.size() < MAX_RAC_TICKETS) {
            Rac_tickets.push_back(user);
            cout << "All regular berths are full. You have been queued in RAC ticket." << endl;
        } else {
            cout << "All regular berths and RAC tickets are full. No booking available." << endl;
        }
        return;
    }

    while (true) {
        cout << "What is your berth preference? " << endl;
        cout << "1. UPPER" << endl;
        cout << "2. LOWER" << endl;
        cout << "3. MIDDLE" << endl;

        cin >> berthPreference;

        switch (berthPreference) {
            case 1:
                if (upper.size() < MAX_BERTHS) {
                    upper.push_back(user);
                    cout << "Upper berth booked successfully." << endl;
                    return;
                } else {
                    cout << "Upper berth is full. Please choose another option." << endl;
                }
                break;
            case 2:
                if (lower.size() < MAX_BERTHS) {
                    lower.push_back(user);
                    cout << "Lower berth booked successfully." << endl;
                    return;
                } else {
                    cout << "Lower berth is full. Please choose another option." << endl;
                }
                break;
            case 3:
                if (middle.size() < MAX_BERTHS) {
                    middle.push_back(user);
                    cout << "Middle berth booked successfully." << endl;
                    return;
                } else {
                    cout << "Middle berth is full. Please choose another option." << endl;
                }
                break;
            default:
                cout << "Invalid preference. Please choose again." << endl;
                break;
        }
    }
}

void Book::printTickets() const {
    auto printBerths = [](const vector<User>& berths, const string& berthType) {
        cout << berthType << ":" << endl;
        for (const auto& user : berths) {
            cout << "Name: " << user.getName() << ", Age: " << user.getAge() << ", Gender: " << user.getGender() << endl;
        }
    };

    printBerths(upper, "Upper Berths");
    printBerths(lower, "Lower Berths");
    printBerths(middle, "Middle Berths");
    printBerths(Rac_tickets, "RAC Tickets");
}

void Book::viewAvailableTickets() const {
    cout << "Available Upper Berths: " << MAX_BERTHS - upper.size() << endl;
    cout << "Available Lower Berths: " << MAX_BERTHS - lower.size() << endl;
    cout << "Available Middle Berths: " << MAX_BERTHS - middle.size() << endl;
    cout << "Available RAC Tickets: " << MAX_RAC_TICKETS - Rac_tickets.size() << endl;
}

