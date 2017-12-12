// Difficulty Level : Hard 
// Implement function countNumbers that accepts a sorted vector of integers and counts the number of vector elements that
// are less than the parameter lessThan.
// For example, for vector v containing { 1, 3, 5, 7 }, 
// SortedSearch::countNumbers(v, 4) should return 2 because there are two vector elements less than 4.

// Passed all test Cases 
// Complexity : O(lg n)

#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std ;

class SortedSearch
{
public:
    static int countNumbers(const vector<int>& sortedVector, int lessThan)
    {
        int first, last, mid;
        first= 0;
        last= sortedVector.size()-1;
        int count =0;
        
        while(first<=last){
            
            mid=(first+last)/2;
            
            if(sortedVector[mid]==lessThan){
                count+=(mid-first);
                break;
            }
            else if(sortedVector[mid]<lessThan){
                count+=(mid-first+1);
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        
        return count ;
        
    }
    
};

#ifndef RunTests
int main()
{
   vector<int> v { 1, 3, 5, 7 };
   cout << SortedSearch::countNumbers(v, 4);
}
#endif
