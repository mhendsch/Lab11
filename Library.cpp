//include headers and libraries
#include <iostream>
#include <string>
using namespace std;

#include "Library.h"



//implement class functions
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library::addBook(string bookName){
    int i;
    for(i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName){
    int i;
    for(i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

void Library::print(){
    int i;
    cout<<"Library contents:"<<endl;
    for(i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}
//implement class functions
