class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       std::unordered_map<int, int> countMap;
    
    // Count occurrences of each number
    for (auto num : nums) {

        cout<<" nums is "<<num<<"and cmap is : "<<countMap[num];
        countMap[num]++;
        cout<<" badme nums is "<<num<<"and cmap is : "<<countMap[num]<<endl;
    }
    
    std::vector<int> result;

    for ( auto pair : countMap) {
        cout<<"first is : "<<pair.first<<". second is "<<pair.second<<end;
        if (pair.second == 1) {
            result.push_back(pair.first);
        }
    }
    
    return result;
}
};