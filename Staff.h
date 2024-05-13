//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_STAFF_H
#define EMPLOY_TRIAL_STAFF_H
#include "Staffmember.h"


class Staff{
    vector<Staffmember>arr;
public:
    void add(Staffmember user) ;
    void deletebyId(ll user)  ;
    string search( string user);
    void showall() ;
    ll callpayroll() ;
};

#endif //EMPLOY_TRIAL_STAFF_H
