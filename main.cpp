#include<iostream>
#include<string>
using namespace std;

struct expense{
    int id;
    string title;
    string category;
    float amount;
    string date;
};

expense e[100];

void addexpense(){}

void viewexpense(){}

void searchexpense(){}

void deleteexpense(){}

void updateexpense(){}

void calculatetotalexpense(){}

void clearscreen(){}

int main(){
    cout<<"======================================================"<<endl;
    cout<<"||                  Expense Tracker                 || "<<endl;
    cout<<"======================================================"<<endl;

    cout<<"Choose Option:"<<endl;
    cout<<"1. Add Expense           2. View Expenses"<<endl;
    cout<<"3. Search Expense        4. Delete Expense"<<endl;
    cout<<"5. Update Expense        6. Calculate Total Expense"<<endl;
    cout<<"7. Exit....."<<endl;

    int option;
    cout<<"Choose the Option:";
    cin>>option;

    switch(option){
    case 1:
    addexpense();
    break;
    case 2:
    viewexpense();
    break;
    case 3:
    searchexpense();
    break;
    case 4:
    deleteexpense();
    break;
    case 5:
    updateexpense();
    break;
    case 6:
    calculatetotalexpense();
    break;
    case 7:
    clearscreen();
    break;
    }
}