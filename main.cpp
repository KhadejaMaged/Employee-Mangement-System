#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace  std ;

#include "Budjet.h"
#include "Employeee.h"
#include "Staffmember.h"
#include "Staff.h"
#include "Payroll.h"
# include "Project.h"
int main() {
    vector<Department> depart;
    vector<Staffmember> staff;
    vector<Project> projects;
    int choice = -1;
    while (choice != 0) {
        cout << "1. Department" << endl;
        cout << "2. Staff" << endl;
        cout << "3. Project" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            ll depchoice;
            cout << "1. Enter department details:" << endl;
            cout << "2. Print All Department" << endl;
            cin >> depchoice;
            if (depchoice == 1) {
                ll id;
                string name;
                cout << "Enter department ID:" << "\n";
                cout << "Enter department Name:" << "\n";
                cin >> id;
                cin >> name;
                Department d1(id, name);
                depart.push_back(d1);
            } else if (depchoice == 2) {
                cout << "This is the all department" << "\n";
                for (auto it: depart) {
                    cout << "The ID of department: " << it.getid() << " The Name of the Department: " << it.getname()
                         << "\n";
                }
            }
        }
        if (choice == 2) {
            ll ch;
            cout << "1.Add New Members:" << endl;
            cout << "2. Print All Members" << endl;
            cout << "3. Calculate Payroll" << endl;
            cout << "4. Delete Member:" << endl;
            cin >> ch;
            Staff obj;
            if (ch == 1) {
                ll StaffmemberID, phone, departmentID, pay;
                string Staffname, email, DepName;
                cout << "Add a new member:" << "\n";
                cout << "Enter member details :" << "\n";
                cout << "Enter StaffmemberID: " << "\n";
                cin >> StaffmemberID;
                cout << "Enter phone: " << "\n";
                cin >> phone;
                cout << "Enter email: " << "\n";
                cin >> email;
                cout << "Enter name: " << "\n";
                cin >> Staffname;
                cout << "Enter department:{ID , Name } " << "\n";
                cin >> departmentID >> DepName;
                cout << "Enter payment:" << "\n";
                cin >> pay;
                Department d1(departmentID, DepName);
                Staffmember s1(StaffmemberID, phone, email, Staffname, d1, pay);
                obj.add(s1);
                staff.push_back(s1);
            }
            if (ch == 2) {
                cout << "All Members in Staff : " << "\n";
                for (auto it: staff) {
                    cout << "Staffid: " << it.getid() << " Staffname: " << it.getname() << "\n";
                }
            }
            if (ch == 3) {
                cout << "Calculate Payroll:" << "\n";
                cout << "Enter emptype in Capital letter:" << "\n";
                for (auto it: staff) {
                        payroll p;
                        cout << "Type of employee HOURLY or SALARY or EXECUTIVE or COMISSION " << "\n";
                        string emptype;
                        cin >> emptype;
                        if (emptype == "HOURLY") {
                            cout << "Enter your Rate and hour:" << "\n";
                            ll rate, hour;
                            cin >> rate >> hour;
                            p.sethourly(rate, hour);
                            cout << "Employee ID: " << it.getid() << endl;
                            cout << "Employee Name: " << it.getname() << endl;
                            ll f = p.calcpayroll(emptype);
                            cout << "the Hourly payroll = "<<f<<"\n";
                        } else if (emptype == "SALARY") {
                            cout << "Enter your Salary:" << "\n";
                            ll salary;
                            cin >> salary;
                            p.setsalary(salary);
                            cout << "Employee ID: " << it.getid() << endl;
                            cout << "Employee Name: " << it.getname() << endl;
                            ll f = p.calcpayroll(emptype);
                            cout << "the Salary payroll = "<<f<<"\n";

                        } else if (emptype == "EXECUTIVE") {
                            cout << "Enter your Executive:" << "\n";
                            ll salary, bonus;
                            cin >> salary >> bonus;
                            p.setExecutive(salary, bonus);
                            cout << "Employee ID: " << it.getid() << endl;
                            cout << "Employee Name: " << it.getname() << endl;
                            ll f = p.calcpayroll(emptype);
                            cout << "the EXECUTIVE payroll = "<<f<<"\n";
                        } else {
                            cout << "Enter your Comission:" << "\n";
                            ll comision;
                            cin >> comision;
                            p.setcomssion(comision);
                            cout << "Employee ID: " << it.getid() << endl;
                            cout << "Employee Name: " << it.getname() << endl;
                            ll f = p.calcpayroll(emptype);
                            cout << "the Comission payroll = "<<f<<"\n";                        }
                    }

                }
                if (ch == 4) {
                    cout << "Enter the id of the Member you want to delete:" << "\n";
                    ll id;
                    cin >> id;
                    bool flag = false;
                    for (auto it = staff.begin(); it != staff.end();) {
                        if (it->getid() == id) {
                            it = staff.erase(it);
                            flag = true;
                            cout << "User with ID " << id << " deleted successfully." << endl;
                            break;
                        } else {
                            ++it;
                        }
                    }
                    if (!flag) {
                        cout << "USER NOT FOUND" << "\n";
                    }

                }
            }
            if (choice == 3) {
                cout << "1. Add New Project\n";
                cout << "2. Print All Projects\n";
                cout << "Add budjet to Existing Project\n";
                cout << "4. Increase Budget to Existing Project\n";
                ll ch;
                cin >> ch;
                if (ch == 1) {
                    cout << "Add New Project\n";
                    cout << "Enter project details:\n";
                    ll ProjectID, CurrentCost;
                    string Manager, Location;
                    cout << "Enter Project ID: ";
                    cin >> ProjectID;
                    cout << "Enter Manager: ";
                    cin.ignore(); // Ignore newline character left in the input buffer
                    getline(cin, Manager);
                    cout << "Enter Location: ";
                    getline(cin, Location);
                    cout << "Enter Current Cost: ";
                    cin >> CurrentCost;
                    Project newProject(CurrentCost, Manager, Location);
                    newProject.setid(ProjectID);
                    projects.push_back(newProject);
                    cout << "New project added successfully!\n";
                } else if (ch == 2) {
                    cout << "Print All Projects\n";
                    for (auto &project: projects) {
                        project.printInfo();
                        cout << endl;
                    }
                } else if (ch == 3) {
                    cout << "Add Budget to Existing Project\n";
                    cout << "Project Id: ";
                    ll pid, bid;
                    cin >> pid;
                    cout << "Budjet id " << "\n";
                    cin >> bid;
                    cout << "Budget Value: ";
                    ll budval;
                    cin >> budval;
                    bool foundProject = false;
                    for (auto &project: projects) {
                        if (project.getid() == pid) {
                            foundProject = true;
                            Budjet b(bid, budval);
                            project.addbudjet(b);
                            cout << "Budget added successfully to Project with ID " << pid << endl;
                            break;
                        }
                    }
                    if (!foundProject)
                        cout << "Project with ID " << pid << " not found." << endl;
                } else if (ch == 4) {
                    cout << "Increase Budget to Existing Project\n";
                    cout << "Project Id: ";
                    ll pid;
                    cin >> pid;
                    cout << "Budget Id: ";
                    ll bid;
                    cin >> bid;
                    cout << "Budget adds value: ";
                    ll addval;
                    cin >> addval;
                    bool foundProject = false;
                    for (auto &project: projects) {
                        if (project.getid() == pid) {
                            foundProject = true;
                            for (auto &budjet: project.budjets) {
                                if (budjet.getid() == bid) {
                                    budjet.Increasebudjet(addval);
                                    cout << "Budget increased successfully for Project with ID " << pid << endl;
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    if (!foundProject)
                        cout << "Project with ID " << pid << " not found." << endl;
                }

            }

        }


    return 0 ;

    }

