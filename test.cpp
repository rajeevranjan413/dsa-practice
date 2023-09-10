#include <bits/stdc++.h>
using namespace std;

// Guest instance implementation
class Guest
{
    string name;
    int age;

public:
    Guest(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
};

// ticket instance implementation
class ZooTicket
{
    vector<Guest> guests;

public:
    ZooTicket(vector<Guest> &guests)
    {
        this->guests = guests;
    }
    int calculateTotalCharge()
    {
        int totalCharge = 0;
        for (int i = 0; i < guests.size(); i++)
        {
            if (guests[i].getAge() <= 2)
            {
                totalCharge += 0;
            }
            else if (guests[i].getAge() < 18)
            {
                totalCharge += 100;
            }
            else if (guests[i].getAge() < 60)
            {
                totalCharge += 500;
            }
            else
            {
                totalCharge += 300;
            }
        }

        return totalCharge;
    }
    void generateTicket()
    {
        int totalCharges = calculateTotalCharge();
        cout << "\n\n\n\n**********Ticket*******\n";
        cout << "Guests:\n";
        for (int i = 0; i < guests.size(); i++)
        {
            cout << i + 1 << ". " << guests[i].getName() << "(" << guests[i].getAge() << ")\n";
        }
        cout << "\nTotoal Amount : " << totalCharges;
    }
    void displayGuestsValidation()
    {
        cout << "\nTicket Details for Validation:" << std::endl;
        for (int i = 0; i < guests.size(); ++i)
        {
            cout << i + 1 << ". " << guests[i].getName() << "(" << guests[i].getAge() << ")\n";
        }
    }
};

int main()
{
    int numGuests;
    cout << "Enter the number of guests: ";
    cin >> numGuests;
    vector<Guest> guests;

    for (int i = 0; i < numGuests; i++)
    {
        string name;
        int age;
        cout << i + 1 << ".\n";
        cout << "Enter the name : ";

        cin >> name;
        cout << "Enter the age : ";
        cin >> age;

        // creating  guest instance
        Guest guest(name, age);

        // storing all guest members
        guests.push_back(guest);
    }

    // creating ticket instance
    ZooTicket ticket(guests);
    ticket.generateTicket();

    // validation process
    cout << "\n\n\n\nTicket Validation by Security Personnel:" << std::endl;
    ticket.displayGuestsValidation();

    return 0;
}