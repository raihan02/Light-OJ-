//
//  main.cpp
//  Hello.cpp
//
//  Created by Raihan on 8/11/22.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int arr[20005];
int visitedArray[20005];
int main(int argc, const char * argv[]) {
   
    int tes, o = 0;
    cin >> tes;
    
    while(tes--){
        o++;
        string str;
        cin >> str;
        cout<<"Case " << o << ":";
        if(str[4] == 's'){
            cout<< " " << str << endl;
        }
        else{
            string temp = "https";
            for(int i = 4; i < str.size(); i++){
                temp += str[i];
            }
            cout<< " " << temp << endl;
        }
        
    }
}
