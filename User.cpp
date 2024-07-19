#include<bits/stdc++.h>
#include"User.h"
using namespace std;

 string User:: getName()  {
        return name;
    }

    void User:: setName( string newName) {
        name = newName;
    }

    int User:: getAge()  {
        return age;
    }

    void User:: setAge(int newAge) {
        age = newAge;
    }

    char User:: getGender() {
        return gender;
    }

    void User:: setGender(char newGender) {
        gender = newGender;
    }
