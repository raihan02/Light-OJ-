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
        
        int n;
        vector <int> takenArray;
        map< int, bool> mp;
        cin >> n;
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            
            cin >> arr[i];
        }
        reverse(arr, arr + n);
        
        for(int i = 0; i < n; i++){
            int sumValue = arr[i];
            int absValue = arr[i];
            
            if(absValue < 0){
                absValue = absValue * (-1);
            }
            
            if(mp[absValue] == false){
                sum += sumValue;
                mp[absValue] = true;
            }
        }
        
        
        printf("Case %d: %lld\n", o, sum);
        
    }
}
