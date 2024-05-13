//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_STAFFMEMBER_H
#define EMPLOY_TRIAL_STAFFMEMBER_H
#include "Department.h"

class Staffmember{
    ll StaffmemberID , Phone , pay;
    string Email , Name ;
    Department department;

public:
    Staffmember() ;
    Staffmember( ll StaffmemberID  , ll phone , string email , string name , Department department , ll pay );
    void setpay( ll pay) ;
    ll getpay() ;
    void setdepartment( Department department);
    Department getdepartment() ;
    void setName(string Name);
    string getname() ;
    void Setemail(string Email) ;
    string getEmail() ;
    void Setid(ll  ID) ;
    ll getid() ;
    void setphone(ll phone) ;
    ll getphone();
    void showprint() ;

};



#endif //EMPLOY_TRIAL_STAFFMEMBER_H
