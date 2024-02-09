#include <bits/stdc++.h>
#include <list>
using namespace std;

template<class T>// creating template...
void print(list<T> lst) {
    typename list<T>::iterator itr; // typename keyword is required for dependent types
    for (itr = lst.begin(); itr != lst.end(); itr++) {
        cout << *itr << ' '; // printing the list. (*) is required.
    }
}


int main(){

    list<int> lst; // initializing list.
    lst.push_back(9);//pushing values. it should be before iteration.
    lst.push_back(4);
    lst.push_back(1);
    lst.push_back(6);

    list<int> lst2;
    lst.push_back(3);//pushing values. it should be before iteration.
    lst.push_back(5);
    lst.push_back(7);
    lst.push_back(8);

    //Iterator.
    list<int> :: iterator itr;//creating iterator to get values from list.
    itr = lst.begin();// giving it a head.

    // Removing elements.
    print(lst);
    cout<<'\n';
    lst.pop_back();//removing the last value.
    print(lst);
    lst.pop_front(); //removing the 1st value.
    cout<<'\n';
    print(lst);
    cout<<'\n';
    lst.remove(4);//remove a specific value.
    print(lst);

    //sotring list
    cout<<'\n';
    lst.sort();
    print(lst);

    //mergibg list
    cout<<'\n';
    lst.merge(lst2);
    print(lst);

    //reversing list
    lst.reverse();
    print(lst);


}