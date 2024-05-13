//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_PAYROLL_H
#define EMPLOY_TRIAL_PAYROLL_H
#define  ll long long

#include "Employeee.h"

class payroll : public Employeee {
    ll rate ,  hour ,  salary ,  target ,  bonus ;
    string  emptype;
public:
    payroll();
    payroll(string emptype ,ll rate , ll hour , ll salary , ll target , ll bonus ) ;
    void sethourly( ll hour , ll rate ) ;
    void setsalary( ll salary) ;
    void setExecutive(ll salary , ll bonus) ;
    void setcomssion( ll target) ;
    ll calcpayroll( string emptype) ;
    void  prntcalc() ;

};



#endif //EMPLOY_TRIAL_PAYROLL_H
