#include <bits/stdc++.h>
using namespace std;
// See cplusplus.com for template
int main(){

    vector<int> vec;//Initializing vector.


    vec.push_back(1);//push element in last.


    vector<int>::iterator itr = vec.begin();//creating an iterator for insert.
    vec.insert(itr,6);//inserting the value at the first.


    // from now on itr is invalid and we have to give it one more pointer.

    itr = vec.begin();//again giving the pointer.
    vec.insert(itr+1,7);//inserting the value at the second.*(itr+position)


    itr = vec.begin();
    vec.insert(itr+2,3,4);// this 3 is for inserting 3 4s.-> 4 4 4.
    

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<' ';
    }
    
    
}