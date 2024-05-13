//
//

#include "Project.h"
Project ::Project(){}
Project :: Project( ll CurrentCost , string  Manager , string location){
    this->CurrentCost = CurrentCost ;
    this->Manager = Manager ;
    this->location = location ;
}
void Project :: addbudjet(Budjet b){
    budjets.push_back(b);
}

ll  Project :: Totalbudjet(){
    ll tot = 0 ;
    for (auto it : budjets) {
        tot+=it.getvalue();
    }
    cout << tot <<"\n";
}
void  Project :: setlocation( string location ){
    this->location = location ;
}

string Project :: getlocation(){
    return this->location;
}


void  Project :: setManager( string Manager ){
    this->Manager = Manager ;
}

string Project ::  getManager(){
    return this->Manager;
}

void Project ::  setid( ll ProjectID ){
    this->ProjectID = ProjectID ;
}

ll  Project :: getid(){
    return this->ProjectID;
}

void Project ::  setCurrentCost( ll CurrentCost ){
    this->CurrentCost = CurrentCost ;
}


ll Project :: getCurrentCost(){
    return this->CurrentCost;
}

void Project ::  printInfo()  {
    cout << "ProjectID"<<" "<<ProjectID<<" "<<"Location"<< location<<" "<<CurrentCost<<"\n";
    cout << "Manager"<< getManager() <<"\n";
    cout << "Budjets"<<"\n";
    for (auto it : budjets) {
        cout << it.getvalue() <<"\n";
    }
}