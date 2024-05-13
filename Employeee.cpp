//
// Created by a on 5/13/2024.
//

#include "Employeee.h"

Employeee :: Employeee(){}

void  Employeee :: SetSSN( ll SSN){
    this->SSN = SSN;
}

ll  Employeee :: getSSN(){
    return this->SSN;
}

void  Employeee :: showprint(){
    Staffmember:: showprint();
    cout << SSN <<"\n";
}

