class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int size = nums.size(),k=0;int x=0;
    int j;
    for(int i=0;i<size;i++){
        if(nums[i]==val){
            nums.erase(nums.begin()+i);
            nums.push_back(-1);
            i--;
            x++;
      }else{
            k++;
        }
    }
    return k-x;
    }
};