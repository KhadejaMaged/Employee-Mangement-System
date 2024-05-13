//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_EMPLOYEEE_H
#define EMPLOY_TRIAL_EMPLOYEEE_H
#include "Staffmember.h"
#include "Staff.h"
#define  ll long long

class Employeee : public Staffmember{
    ll SSN;
public:
    Employeee();
    Employeee(ll ID, ll phone, string email, string name, Department department, ll pay, ll SSN) :
            Staffmember(ID, phone, email, name, department, pay) {
        this->SSN = SSN;
    }
    void SetSSN( ll SSN) ;
    ll getSSN() ;
    void showprint() ;
};

#endif //EMPLOY_TRIAL_EMPLOYEEE_H
