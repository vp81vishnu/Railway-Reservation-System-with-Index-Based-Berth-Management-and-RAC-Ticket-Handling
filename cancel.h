#include "book.h"
using namespace std;

class Cancel : public Book {
public:
    void cancelTickets();
private:
    bool cancelFromList(vector<User>& berthList, const string& name);
};
