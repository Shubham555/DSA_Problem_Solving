class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
        int n2=nums2.size();
        int n=(n1+n2);
        int i=0;
        while(i<n2)
        {
            nums1.push_back(nums2[i]);
            i++;
        }
        sort(nums1.begin(),nums1.end());
        if(n&1)
        {
            int m=(n+1)/2;
            double ans=(double)nums1[m-1];
            return ans;
        }
        else
        {
            int m1=(n-1)/2;
            int m2=(n+1)/2;
            double ans=((double)nums1[m1]+(double)nums1[m2])/2;
            return ans;
        } 
    }
};
