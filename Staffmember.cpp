//
// Created by a on 5/13/2024.
//

#include "Staffmember.h"
Staffmember ::Staffmember() {}
Staffmember :: Staffmember( ll StaffmemberID  , ll phone , string email , string name , Department department , ll pay )
{
    this->StaffmemberID = StaffmemberID ;
    this->Phone = phone;
    this->Email = email ;
    this->Name = name;
    this->department = department;
    this->pay = pay;

}

void Staffmember ::setpay( ll pay){
    this->pay = pay ;
}
ll  Staffmember :: getpay(){
    return this->pay;
}
void Staffmember :: setdepartment( Department department){
    this->department = department;
}


Department Staffmember :: getdepartment(){
    return this->department;
}
void Staffmember :: setName(string Name)
{
    this->Name = Name;
}

string Staffmember :: getname()
{
    return this->Name;
}
void Staffmember :: Setemail(string Email)
{
    this->Email = Email;
}

string Staffmember ::  getEmail(){
    return this->Email;
}

void Staffmember :: Setid(ll  ID)
{
    this->StaffmemberID = StaffmemberID;
}
ll Staffmember :: getid()
{
    return this->StaffmemberID;
}

void  Staffmember :: setphone(ll phone){
    this->Phone = phone;
}

ll Staffmember ::  getphone(){
    return this->Phone ;
}
void  Staffmember :: showprint(){
    cout << "ID: " << StaffmemberID << endl;
    cout << "Name: " << Name << endl;
    cout << "Phone: " << Phone << endl;
    cout << "Email: " << Email << endl;
    cout << "Department: " << department.getname() << endl;
}