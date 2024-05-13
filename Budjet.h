//
// Created by a on 5/13/2024.
//

#ifndef EMPLOY_TRIAL_BUDJET_H
#define EMPLOY_TRIAL_BUDJET_H
# define  ll long long

class Budjet{
    ll BudjetID , value;
public:
    Budjet() ;
    Budjet( ll BudjetID , ll value )  ;
    ll getid() ;
    void setvalue( ll value) ;
    void Increasebudjet( ll amount) ;
    ll getvalue() ;

};


#endif //EMPLOY_TRIAL_BUDJET_H
