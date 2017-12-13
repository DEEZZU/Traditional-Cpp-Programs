#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class TwoSum
{
public:
    static pair<int, int> findTwoSum(vector<int>& list, int sum)
    {
        pair<int,int> indices;
        indices.first=-1;
        indices.second=-1;
        int i,j;
        i=j=0;
        int diff;
        int index;
        
        for(i=0;i<list.size()-1;i++){
            diff=sum-list[i];
            index=binarySearch(list,diff);
            //cout << diff << index ;
            if(index==-1)
            {
                continue;
            }
            else if(index!=i)
            {
                
                indices.first=i;
                indices.second=index;
                return indices;
            }
        }
        
        return indices;
    }
    
    static int binarySearch(vector<int>& list, int val)
    {
        int first , last, mid;
        first=0;
        last=list.size();
        
        while(first<=last){
            mid=(first+last)/2;
            if(list[mid]==val){
                return mid;
            }
            else if(list[mid]>val){
                last=mid-1;
            }
            else
            {
                first =mid+1;
            }
        }
        
        return -1;
    }
};

#ifndef RunTests
int main()
{
    vector<int> list;
    list.push_back(1);
    list.push_back(3);
    list.push_back(3);
    list.push_back(7);
    list.push_back(8);
    
    pair<int, int> indices = TwoSum::findTwoSum(list, 11);
    cout << indices.first << '\n' << indices.second;
}
#endif
