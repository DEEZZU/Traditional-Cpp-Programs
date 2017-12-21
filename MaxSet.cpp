vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

        int i =0;
        int j=0;
        long sum=0;
        long sumMax=0;
        int s1=0,s2=0;
        int len=A.size();
        vector<int> max;
        vector<int> maxSet;
        
        for ( i=0; i<=len;i++ )
        {
            
            if( A[i]>=0 && i<len )
            {
                sum+=A[i];
                max.push_back(A[i]);
               // cout << sum  << " ";
            }
            else if (A[i]<0 || i==len)
            {
                
                if(sumMax<sum){
                    
                    sumMax=sum;
                    sum=0;
                    maxSet.clear();
                    maxSet=max;
                    max.clear();
                }
                else if(sum==sumMax){
                    
                    sum=0;
                    s1=maxSet.size();
                    s2=max.size();
                    if(s1<s2){
                        maxSet.clear();
                        maxSet=max;
                        max.clear();
                    }
                   
                    max.clear();
                    
                }
                else{
                    
                    sum=0;
                    max.clear();
                }
            }
        }
        return maxSet;
}
