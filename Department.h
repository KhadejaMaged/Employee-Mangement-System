//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_DEPARTMENT_H
#define EMPLOY_TRIAL_DEPARTMENT_H
#include <bits/stdc++.h>
#define  ll long long
using namespace  std ;

class Department{

    ll DepartmentID ;
    string Name ;
public:
    Department();
    Department( ll DepartmentID , string Name );
    void setid( ll id);
    ll getid() ;
    void setname(string name );
    string  getname();

};


#endif //EMPLOY_TRIAL_DEPARTMENT_H
