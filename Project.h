//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_PROJECT_H
#define EMPLOY_TRIAL_PROJECT_H
# define  ll long long
#include <bits/stdc++.h>
# include "Budjet.h"
using namespace  std ;

class Project{
    ll ProjectID  , CurrentCost ;
    string location  , Manager;
public:
    vector<Budjet>budjets;
    Project();
    Project( ll CurrentCost , string  Manager , string location) ;
    void addbudjet(Budjet b) ;
    ll Totalbudjet();
    void setlocation( string location ) ;
    string getlocation() ;
    void setManager( string Manager ) ;
    string getManager() ;
    void setid( ll ProjectID ) ;
    ll getid() ;
    void setCurrentCost( ll CurrentCost ) ;
    ll getCurrentCost() ;
    void printInfo()  ;
};


#endif //EMPLOY_TRIAL_PROJECT_H
