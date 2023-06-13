class Solution {
private:
    vector<int> merging(vector<int>& nums1, vector<int>& nums2){
        vector<int> merged(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        return merged;
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> finarr = merging(nums1, nums2);
        int mid;
        float median;
        if(finarr.size()%2 == 0){
            mid = finarr.size()/2;
            median = (finarr[mid] + finarr[mid - 1])/2.0;
        }
        else{
            mid = finarr.size()/2;
            median = finarr[mid];
        }
        return median;
    }
};