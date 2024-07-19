#include "Berth.h"
using namespace std;

class Book : public BerthClass {
public:
    void bookTicket();
    void printTickets() const;
    void viewAvailableTickets() const;
};
