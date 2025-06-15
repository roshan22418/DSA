#include<iostream>


using namespace std;

#include<unordered_map>
#include<vector>




void coutNoFrequency(string s){
    unordered_map<char,int> st;
    for(int i = 0 ; i<s.size() ;i++){
        st[s[i]] +=1;
    }
    for(auto i : st){
        cout<<i.first <<"->"<< i.second <<" ";
    }
    cout<<endl;

}


int main(){
    unordered_map<string,int> mp;
    pair<string,int> p = make_pair("Roshan",21);
    mp.insert(p);
    // type of insertion by using pair
    pair<string,int> r;
    r.first = "Sandeep";
    r.second = 18;
    mp.insert(r);

    pair<string,int> q("Vikash",24);
    mp.insert(q);

    mp["rohan"] = 23;

    cout<<mp.size()<<endl;
    

    //types of insertion 

    cout<<mp.at("Roshan") << endl;
    cout<<mp["Roshan"] << endl ;

    // searching
    // using count to check element present or not   // one represent how many number present
    cout<<mp.count("rohan") << endl;

    if(mp.find("Sandeep") != mp.end() ){
        // it's means element presenet in the map 
        //if i stand on end then item not present in map
        cout<<"item present "<<endl;

    }
    else{
        cout<<"item not present" <<endl;
    }

    cout<<mp.size()<<endl;
    cout<< mp["Sunila"] <<endl;
    cout<< mp.size() <<" here size increase becasue this  Sunila not present "<<endl;


    cout<<"count the frequency in string ";
    coutNoFrequency("roshankumarmahotdfdf");

}