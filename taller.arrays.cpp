#include<iostream>

using namespace std;

int main() {
    int array[5], sizeArray;

    sizeArray = sizeof(array)/sizeof(*array);

    for (int i = 0; i < sizeArray; i++) {
        cout<<"agrege un numero: ";cin>>array[i];
    }
    
    cout<<"\nelementos dentro del array: ";

    for (int num : array) cout<<num<<" ";
    

    return 0;
}