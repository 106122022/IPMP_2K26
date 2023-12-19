#include <bits/stdc++.h>
using namespace std;
int main()
{


    // VECTORS
    vector<int> v;
    v.push_back(2); // to push the element into vector(dynamic in nature)
    v.push_back(2);
    v.push_back(2);
    int maxi = *max_element(v.begin(), v.end()); // TC  O(N)
    int min = *min_element(v.begin(), v.end());
    sort(v.begin(), v.end()); // TC O(NlogN) for ascending
    sort(v.begin(), v.end(), greater<int>());
    auto lower = lower_bound(v.begin(), v.end(), 2); // returns the adress of first 2 in a vector : remember not index TC O(logN)
    cout << "lower index id: " << lower - v.begin();
    auto upper = upper_bound(v.begin(), v.end(), 2);
    cout << "upper index is: " << upper - v.begin();
    v.insert(v.begin(), 2, 5);         // insert 5  2times at starting       TC O(N);
    v.erase(v.begin(), v.begin() + 3); //   TC O(N)
    vector<vector<int>> v1;            // nested vectors



    // PAIRS
    pair<int, int> p;
    int x, y;
    cin >> x >> y;
    p = {x, y};
    cout << p.first << p.second;
    pair<int, int> p1, p2;
    p1.swap(p2);               // swap contents of p1,p2
    vector<pair<int, int>> vp; // vector of pairs




    // MAPS
    // generally maps are used to count a particular dat_type
    map<int, int> mp; // stored the value based on the ascending oeder of keys and stores unique values
    mp[1] = 2;
    mp[5] = 5;
    mp[2] = 4;
    mp[1] = 4;         // resets the val of key 1
    mp.insert({3, 8}); // TC O(logN)
    auto it = mp.begin();
    cout << it->first << it->second;
    // checks if key 1 is present or not
    if (mp.count(1)) // O(logN)
        cout << "The key 1 is present\n";
    else
        cout << "The key 1 is not present\n";
    mp.erase(3);                  // key is passed
    auto it1 = mp.find(2);        // adress if it is not found returns map.end() which last +1 of map
    auto itu = mp.upper_bound(4); // The map::upper_bound() is a built-in function in C++ STL which returns an iterator pointing to the immediate next element just greater than k.
    auto itl = mp.lower_bound(3); // The map::lower_bound(k) is a built-in function in C++ STL which returns an iterator pointing to the key in the container which is equivalent to k passed in the parameter.
    // The function returns an iterator pointing to the key in the map container which is equivalent to k passed in the parameter. In case k is not present in the map container, the function returns an iterator pointing to the immediate next element which is just greater than k.
    unordered_map<int, int> mp1; // same operations as maps but stores in the oeder you have intilalise so TC is O(1)




    set<int> s;                  // stores unique values in sorted order in max cases TC is O(logN)
    s.insert(6);
    s.insert(9);
    s.insert(6);
    // remaining all operations similar to maps




    // STACKKKK
    stack<int> st;
    st.push(3);
    st.push(7);
    st.push(3);
    st.push(9);
    st.push(3);
    st.pop();
    st.top();




    // QUEUEEEE
    queue<int> q1;
    q1.push(5);
    q1.push(7);
    q1.push(9);
    q1.push(5);
    q1.front();
    q1.pop();




    //priority queues
    priority_queue<int>pq;//MAX HEAP;
    priority_queue<int ,greater<int>>pq1;//MIN HEAP
    pq.push(3);//TC O(logN)
    pq.push(8);
    pq.push(88);
    pq.push(45);
    pq.top();// o(1) return the max element of pushed values
    pq.pop();//o(logN) remove the topmost element




    //deques 
    deque<int>dq;
    dq.push_back(20);
    dq.push_front(10);
    dq.push_back(30);
    dq.pop_back();
    dq.pop_front();
    dq[0];//accessing elements using index
    cout<<dq.size();
    dq.front();




    //LISTS
    list<int>l;
    l.push_back(6);
    l.push_front(4);
    l.remove(6);
    l.insert(l.begin(),{2,3});
    l.pop_back();
    l.pop_front();
    l.reverse();
    l.sort();



    //RANGE BASED FOR LOOPS
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto p:mp){
        cout<<p.first<<p.second<<endl;
    }


    //NESTED STL
    vector<vector<int>>vv;
    vector<pair<char,int>>vp;
    vector<list<int>>vl;
    vector<map<string,int>>vm;
    vector<set<string,int>>vs;





}
