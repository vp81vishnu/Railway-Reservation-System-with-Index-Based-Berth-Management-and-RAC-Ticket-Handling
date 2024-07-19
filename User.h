#include <string>
using namespace std;

class User {
protected:
    string name;
    int age;
    char gender;

public:
    User(const string& name = "", int age = 0, char gender = 'n')
        : name(name), age(age), gender(gender) {}

    string getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    char getGender() const {
        return gender;
    }

    void setGender(char newGender) {
        gender = newGender;
    }
};
