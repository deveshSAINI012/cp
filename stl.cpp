#include<bits/stdc++.h>
using namespace std;


	//pairs
	void explainPair(){
		pair<int ,int>p={1,3};

		cout<<p.first<<" "<<p.second;

		pair<int, pair<int,int>>p={1,{2,3}};
		cout<<p.first<<p.second.second<<p.second.first;

		pair<int,int>arr[]={{1,2},{2,3}};

		cout<<arr[1].second;
	}


	//vectors
	void explainVector()
{
	vector<int> v;

	v.push_back(1);
	v.emplace_back(2); //same as push_back

	vector<pair<int,int>>vec;
	vec.push_back({1,3});

	vector<int> v(5,100);  //{100,100,100,100,100}
	vector<int>v2(v); //copy

    

    vector<int>::iterator it= v.begin();
    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

     vector<int>::iterator it= v.end(); // points to location right 'after' the last element !
      vector<int>::iterator it= v.rend();
       vector<int>::iterator it= v.rbegin();

      for(auto it=v.begin();it!=v.end();it++){
      	cout<<*it<<" ";
      }

      v.erase(v.begin(),v.begin()+2); //begin and begin +1 will be erased

      cout<<v.size(); // no of elements in v
     
     v.insert(v.begin()+1,1,2);// insert 1 and 2 at index 1 and 2 rfespectively

     v1,swap(v2); //swap two vectors

     v.clear() // clear the vector

     cout<<v.empty(); // return true if vector is empty



     //lists
     // same as vectors but have forward opertaions as well

     void explainList(){
     	list<int> ls;

     	ls.push_front(2);
     	ls.push_back(5);

     } 


     //Stack- last in first out

     void explainStack(){

     	stack<int> st;
     	st.push(1);
     	st.push(2);
     	st.push(3);

     	cout<<st.top(); //gives the element inserted last ie 3
     	st.pop(); //removes last entered element ie. 3

     	cout<<st.size();

     	//can swap as well

     }


     //Queue - first in first out
     void explainQueue(){
       queue<int>q;
       q.push(1);
       q.push(2);

       cout<<q.front();//  1
       cout<<q.back(); //2

       q.pop(); //removes first enteres ie. 1
       // size,swap,empty 


     }

     //priority_queue - greatest element will be at top
     void explainPQ(){

     	priority_queue<int>pq;
     	pq.push(2);
     	pq.push(1);
     	pq.push(5);
     	pq.push(0);

     	cout<<pq.top(); // 5
     	//pop ,swap,size,empty

     	//min heap  min priority queue

     	priority_queue<int,vector<int>,greater<int>>pq;
     	pq.push(2);
     	pq.push(1);
     	pq.push(5);
     	pq.push(0);
     	cout<<pq.top();// minimum ie. 0

     	//time comp-
     	// push log(n), pop log(n), top O(1)

     }

     //Set- sorted band unique
     void explainSet(){

     	set<int>s;
     	s.insert(2);
     	s.insert(1);
     	s.insert(3);
     	s.insert(1);
     	//s={1,2,3}

     	auto it=s.find(3); //points to the address of 3
     	//if element is not there it will return s.end()


     	int cnt=s.count(3); // if three is present it will return 1,else 0
     	st.erase(1);
     	st.erase(it, it2);


     	//multiset - sorted but store multiple occurances
     	//unordered set - unique but not sorted

     }

     //map- {key,value} ,keys must be unique ,stores in sorted acc to key
     void explainMap(){
     	map<int,int>m;

     	m[1]=2; // {1,2}

     	m.insert({3,1});

     	for(auto it:m{

     	}

     }

}