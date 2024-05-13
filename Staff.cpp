//
// Created by a on 5/13/2024.
//

#include "Staff.h"

void  Staff :: add(Staffmember user)
{
    arr.push_back(user);
}

void  Staff :: deletebyId(ll user) {
    bool found = false;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (it->getid() == user) {
            found = true;
            it = arr.erase(it); // Erase the element and update the iterator
            cout << "User with ID " << user << " deleted successfully." << endl;
            break;
        }
    }
    if (!found)
        cout << "User with ID " << user << " not found." << endl;
}

string Staff :: search( string user){
    for (auto it : arr) {
        if(it.getname() == user){
            return it.getname();
        }
    }
    return "This name is not found in the list";
}

void  Staff :: showall(){
    cout <<"This is a list to show you your Name of the list";
    for (auto it : arr) {
        cout << it.getname()<<"\n";
    }
}

ll Staff :: callpayroll(){
    ll ans  = 0;
    for (auto it : arr) {
        ans+=it.getpay();
    }
    return  ans;
}


