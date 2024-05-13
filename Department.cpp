//
// Created by a on 5/13/2024.
//

#include "Department.h"

Department ::Department() {}
Department ::Department( ll DepartmentID , string Name )
{
    this->DepartmentID = DepartmentID ;
    this->Name = Name;
}
 void Department :: setid( ll id)
{
    this->DepartmentID = id;
}
ll Department ::getid(){
    return this->DepartmentID;
}
void Department :: setname(string name )
{
    this->Name = name;
}
string  Department :: getname()
{
    return this->Name;
}