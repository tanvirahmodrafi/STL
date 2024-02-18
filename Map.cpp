#include <bits/stdc++.h>
#include <map>
using namespace std;

//https://cplusplus.com/reference/map/map/insert/

int main(){
    map<string,int> marks;
    marks["Rafi"]= 98;
    marks["Tahia"]= 100;
    marks["Ashik"]= 34;

    map<string,int>::iterator itr; //create iterator

    //insert values
    marks.insert(make_pair("rithi", 88));
    marks.insert(make_pair("juwel", 98));
    marks.insert(make_pair("Sabrin", 89));
    marks.insert(make_pair("Pranto", 78));


    for(itr = marks.begin();itr != marks.end();itr++){
        cout<<itr->first<<": "<<itr->second<<endl; //print value
    }

    cout<< marks.size()<<'\n'; //Shows the current size
    cout<< marks.max_size()<<endl; // shows the maximum size it can hold.
    cout<< marks.empty()<<endl;//return if its true or false.

}