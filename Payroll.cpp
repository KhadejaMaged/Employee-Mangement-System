//
// Created by a on 5/13/2024.
//

#include "Payroll.h"

payroll :: payroll(){}
 payroll :: payroll(string emptype ,ll rate , ll hour , ll salary , ll target , ll bonus ){
this->emptype = emptype;
this->rate = rate;
this->hour = hour ;
this->salary = salary;
this->target = target ;
this->bonus = bonus ;
}
void payroll :: sethourly( ll hour , ll rate ){
    this->hour = hour;
    this->rate = rate ;
}

void  payroll :: setsalary( ll salary){
    this->salary = salary;
}

void payroll::setExecutive(long long int salary, long long int bonus) {
    this->salary = salary;
    this->bonus = bonus;
}
void payroll :: setcomssion( ll target){
    this->target = target;
}

ll payroll :: calcpayroll( string emptype)
{
    if(emptype == "HOURLY"){
        return this->hour * this->rate;
    }
    if(emptype == "SALARY"){
        return  this->salary;
    }
    if(emptype == "EXECUTIVE"){
        return  this->salary + this->bonus;
    }
    if(emptype == "COMMISSION"){
        return 0.05 * this->target;
    }

}

void payroll ::   prntcalc(){
    double f = calcpayroll(emptype);
    if(emptype == "HOURLY"){
        cout << "Hour employee payroll " << f <<"\n";
    }
    if(emptype == "SALARY"){
        cout << "Salary employee payroll " << f <<"\n";
    }
    if(emptype == "EXECUTIVE"){
        cout << "Executive employee payroll " << f <<"\n";
    }
    if(emptype == "COMMISSION"){
        cout << "Commission employee payroll " << f <<"\n";
    }
}
