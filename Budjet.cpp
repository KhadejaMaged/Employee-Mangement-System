//
// Created by a on 5/13/2024.
//

#include "Budjet.h"
 Budjet :: Budjet(){}

 Budjet :: Budjet( ll BudjetID , ll value ){
    this->BudjetID = BudjetID;
    this->value = value;
}

ll  Budjet :: getid(){
    return this->BudjetID;
}
void  Budjet :: setvalue( ll value){
    this->value = value;
}

void  Budjet :: Increasebudjet( ll amount){
    value+=amount;
}
ll  Budjet :: getvalue(){
    return  value ;
}