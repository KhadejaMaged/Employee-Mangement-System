# Staff Management System

This C++ program is designed to manage departments, staff members, projects, and budgets within an organization. It offers functionality to add, delete, and search for staff members, manage department details, create projects, and allocate budgets to them.

# Features 

## Department Management

1 -Add new departments.
2 - Print all existing departments.

## Staff Management

1- Add new staff members with details such as ID, name, email, phone, department, and payment.

2 - Print all existing staff members.

3 - Calculate payroll for staff members based on different types of employment (Hourly, Salary, Executive, Commission).

4 - Delete staff members by ID.

## Project Management

1- Add new projects with details such as ID, manager, location, and current cost.

2- Print all existing projects.

3 - Allocate budgets to existing projects.

4- Increase budgets for existing projects.

## Classes
### Department

Represents a department with an ID and name.

### Staffmember:

Represents a staff member with details like ID, phone, email, name, department, and payment.

### Staff

Manages a collection of staff members and provides functions to add, delete, search, and calculate payroll.

### Employee

Inherits from Staffmember and adds Social Security Number (SSN) functionality.

### Payroll

Handles payroll calculation based on different employment types.

### Budjet

Manages budget details with ID and value, providing functionality to increase budget amounts.

### Project

Represents a project with details such as ID, current cost, manager, location, and associated budgets.
