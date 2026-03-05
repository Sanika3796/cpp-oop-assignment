#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalCars;
    double totalMoney;

public:
    // Constructor
    TollBooth()
    {
        totalCars = 0;
        totalMoney = 0;
    }

    // Car paying toll
    void payingCar()
    {
        totalCars++;
        totalMoney += 0.50;
    }

    // Car not paying toll
    void nopayCar()
    {
        totalCars++;
    }

    // Display result
    void display()
    {
        cout << "\nTotal Cars Passed: " << totalCars << endl;
        cout << "Total Money Collected: $" << totalMoney << endl;
    }
};

int main()
{
    TollBooth booth;
    int choice;

    do
    {
        cout << "\n--- Toll Booth Menu ---\n";
        cout << "1. Paying Car\n";
        cout << "2. Non-Paying Car\n";
        cout << "3. Display Total\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            booth.payingCar();
            break;

        case 2:
            booth.nopayCar();
            break;

        case 3:
            booth.display();
            break;

        case 4:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}