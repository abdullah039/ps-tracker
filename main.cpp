#include<iostream>
#include<string>
using namespace std;

struct expense{
    string title;
    string category;
    float amount;
    string date;
};

expense e[100];

void addexpense(){
    for(int a=0;a<100;a++){
        cout<<"Title: ";
        cin>>e[a].title;
        cout<<"Category: ";
        cin>>e[a].category;
        cout<<"Amount: ";
        cin>>e[a].amount;
        cout<<"Date: ";
        cin>>e[a].date;
        cout<<endl;
        cout<<"Expense Add Successfully...."<<endl;
    }
}

void viewexpense(){
    for(int v=0;v>100;v++){
        cout<<"Title: "<<e[v].title<<endl;
        cout<<"Category: "<<e[v].category<<endl;
        cout<<"Amount: "<<e[v].amount<<endl;
        cout<<"Date: "<<e[v].date<<endl;
    }
}

void searchexpense(){}

void deleteexpense(){}

void updateexpense(){}

void calculatetotalexpense(){}

void clearscreen(){}

void menu(){
    
}

int main(){
    while(true){
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
return 0;
}