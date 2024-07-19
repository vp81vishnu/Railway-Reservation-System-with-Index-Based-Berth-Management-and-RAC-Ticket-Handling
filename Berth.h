#include <vector>
#include "User.h"
using namespace std;

class BerthClass {
public:
    vector<User> upper;
    vector<User> lower;
    vector<User> middle;
    vector<User> Rac_tickets;

    static const int MAX_BERTHS = 5;
    static const int MAX_RAC_TICKETS = 6;
};
