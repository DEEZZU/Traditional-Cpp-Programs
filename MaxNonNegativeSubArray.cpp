//
//  MaxNonNegativeSubArray.cpp
//  C++ TESTING SITE
//
//  Created by DEEPTI SHARMA on 19/12/17.
//  Copyright © 2017 . All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    
    public :
    
    static vector<int>* maxset(vector<int> &A) {
        
        int i =0;
        int j=0;
        int sum=0;
        int sumMax=0;
        int s1=0,s2=0;
        int len=A.size();
        vector<int>* max= new vector<int>(len);
        vector<int>* maxSet= new vector<int>(len);
        
        for ( i=0; i<len;i++ )
        {
            
            if( A[i]>0 )
            {
                sum+=A[i];
                max->push_back(i);
            }
            else
            {
                if(sumMax<sum){
                    
                    sumMax=sum;
                    sum=0;
                    maxSet->clear();
                    maxSet=max;
                    max->clear();
                }
                else if(sum==sumMax){
                    
                    sum=0;
                    s1=maxSet->size();
                    s2=max->size();
                    if(s1<s2){
                        maxSet->clear();
                        maxSet=max;
                        max->clear();
                    }
                   
                    max->clear();
                    
                }
                else{
                    
                    sum=0;
                    max->clear();
                }
            }
        }
        return maxSet;
    }
};

int main()
{
    vector<int> A;
    vector<int>* res;
    Solution S;
    
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(-3);
    A.push_back(1);
    A.push_back(12);
    
    res=S.maxset(A);
    
    int sz;
    sz=res->size();
    
    for(int i=0;i<sz;i++){
        cout << res->at(i) << " " ;
    }
    
    return 1;
    
}
