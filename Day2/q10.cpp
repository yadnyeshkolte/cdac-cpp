#include <iostream>
using namespace std;


int checkBalance(int bal);
int deposit(int bal, int value, int arr[], int index);
void withdraw(int bal, int value, int arr[]);
void miniStatement(int arr[]);


int main(){
    cout << "welcome to Bank";
    int balance = 0;
    int arr[5];
    int index = 0;
    while(true){
        char ch;
        cout << "Enter the case c,d,w,m,e: ";
        cin >> ch;
        if(ch == 'e'){
            cout << "Bye!" << "\n";
            break;
        }
        
        switch(ch){
            case 'c': cout << "Balance is: " << checkBalance(balance) << "\n";
            break;
            case 'd': cout << "Enter the money to Deposite: ";
            int value;
            cin >> value;
            if(index<5){
                balance = deposit(balance, value, arr, index);
                index++;
            }
            else{
                index = 0;
            }
            cout << "Balance is: " << balance << "\n";
            break;
            case 'w': cout << "hi";
            break;
            case 'm': miniStatement(arr);
            break;
            default: cout << "Invalid Operation" << "\n";
        }

    }

    return 0;
}

int checkBalance(int bal){
    return 0;
}

int deposit(int bal, int value, int arr[], int index){
    arr[index] = value;
    return bal+value;
}

void withdraw(int bal, int value, int arr[]){

}

void miniStatement(int arr[]){
    for(int i=0;i<5;i++){
        if(arr[i]>=0){
            cout << arr[i] << "Deposited " << "\n";
        }
        else{
            cout << arr[i] << "WithDrawed " << "\n";
        }
    }
}