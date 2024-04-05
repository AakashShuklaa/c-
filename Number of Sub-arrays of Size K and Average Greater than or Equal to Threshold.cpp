class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int first=0,second=0,sum=0,len=0,ans=0;
        while(len<k && second<arr.size()){
            sum+=arr[second];
            len++;
            second++;
        }
        int avg=sum/len;
        if(avg>=threshold)
            ans++;
        
        while(second<arr.size()){
            sum-=arr[first];
            first++;
            sum+=arr[second];
            len=second-first+1;
            second++;
            avg=sum/len;
            if(avg>=threshold)
                ans++;
        }
        return ans;
    }
};