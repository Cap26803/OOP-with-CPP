#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& name, int employeeID, double salary)
        : name(name), employeeID(employeeID), salary(salary) {}

    virtual void displayInformation() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }

    virtual double calculatePay() const = 0;
};

class Waiter : public Employee {
    int tablesServed;

public:
    Waiter(const string& name, int employeeID, double salary, int tablesServed)
        : Employee(name, employeeID, salary), tablesServed(tablesServed) {}

    void displayInformation() const override {
        cout << "Waiter Information" << endl;
        Employee::displayInformation();
        cout << "Tables Served: " << tablesServed << endl;
    }

    double calculatePay() const override {
        return salary + (tablesServed * 2.5); // Additional pay per table served
    }
};

class Chef : public Employee {
    int mealsCooked;

public:
    Chef(const string& name, int employeeID, double salary, int mealsCooked)
        : Employee(name, employeeID, salary), mealsCooked(mealsCooked) {}

    void displayInformation() const override {
        cout << "Chef Information" << endl;
        Employee::displayInformation();
        cout << "Meals Cooked: " << mealsCooked << endl;
    }

    double calculatePay() const override {
        return salary + (mealsCooked * 5.0); // Additional pay per meal cooked
    }
};

class Manager : public Employee {
public:
    Manager(const string& name, int employeeID, double salary)
        : Employee(name, employeeID, salary) {}

    void displayInformation() const override {
        cout << "Manager Information" << endl;
        Employee::displayInformation();
    }

    double calculatePay() const override {
        return salary; // No additional pay for a manager
    }
};

int main() {
    string name;
    int employeeID, tablesServed, mealsCooked;
    double salary;

    cout << "Enter waiter's name: ";
    getline(cin, name);

    cout << "Enter waiter's employee ID: ";
    cin >> employeeID;

    cout << "Enter waiter's salary: ";
    cin >> salary;

    cout << "Enter the number of tables served by the waiter: ";
    cin >> tablesServed;

    cout << endl;

    Employee* waiter = new Waiter(name, employeeID, salary, tablesServed);

    cout << "Enter chef's name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter chef's employee ID: ";
    cin >> employeeID;

    cout << "Enter chef's salary: ";
    cin >> salary;

    cout << "Enter the number of meals cooked by the chef: ";
    cin >> mealsCooked;

    cout << endl;

    Employee* chef = new Chef(name, employeeID, salary, mealsCooked);

    cout << "Enter manager's name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter manager's employee ID: ";
    cin >> employeeID;

    cout << "Enter manager's salary: ";
    cin >> salary;

    cout << endl;

    Employee* manager = new Manager(name, employeeID, salary);

    cout << endl;

    cout << "----- Employee Information -----" << endl;

    waiter->displayInformation();
    cout << "Total Pay: $" << waiter->calculatePay() << endl;
    cout << endl;

    chef->displayInformation();
    cout << "Total Pay: $" << chef->calculatePay() << endl;
    cout << endl;

    manager->displayInformation();
    cout << "Total Pay: $" << manager->calculatePay() << endl;

    delete waiter;
    delete chef;
    delete manager;

    return 0;
}
