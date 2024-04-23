#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
void addTask(vector<vector<string>>& list) {
    string todo;
    cout << "Enter Task You want to Add to List:" << endl;
    getline(cin, todo);
    list.push_back({todo,"Pending"});
    cout << "Task Added to List." << endl;
}
void displayTask(vector<vector<string>>& list) {
    if(!list.empty()) {
        for(int i=0; i<list.size(); i++) {
            cout << "Task" << i+1 << ':' << list[i][0]<<"   ("<<list[i][1]<<')' << endl;
        }
    }
    else cout << "List is Empty." << endl;
    cout << "Press Enter to continue" << endl;
    cin.ignore();
}
void removeTask(vector<vector<string>>& list){
    int i;
    displayTask(list);
    cout << "Enter Task you want to remove: ";
    cin >> i;
    list.erase(list.begin()+i-1);
    cout << "Task "<< i << " removed" << endl;
}
void markTask(vector<vector<string>>& list){
    displayTask(list);
    int i;
    cout << "Which task you want to mark as complete?: ";
    cin >> i;
    list[i-1][1]="Completed";
}
int main() {
    vector<vector<string>> list;
    char choice;
    while(1) {
        cout << "Choose Action:" << endl<<"1.Add to list"<<endl<<"2.Display list"<<endl<<"3.Mark Task"<<endl<<"4.Remove Task"<<endl<<"5.Exit"<<endl;
        cin>>choice;
        cin.ignore();
        sleep(1);
        system("cls");
        switch(choice) {
        case '1':
            addTask(list);
            break;
        case '2':
            displayTask(list);
            break;
        case '3':
            markTask(list);
            break;
        case '4':
            removeTask(list);
            break;
        case '5':
            exit(0);
            break;
        default:
            cout << "Invalid Choice." << endl;
            break;
        }
        sleep(2000);
        system("clear");
    }
}