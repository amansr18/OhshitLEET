/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:    int newval(int target, MountainArray &mountainArr,int left){
        int start=left,end=mountainArr.length()-1;
        int flag=0,mid;
	    while(start<=end){
		    mid = (start + end)/2;
		    if(target<mountainArr.get(mid)){
			    start = mid+1;
		    }
		    else if(target > mountainArr.get(mid)) end = mid-1;
		    else {
			    flag=1;
			    break;
		    }
	    }
	    if(flag==1) return mid;
	    else return -1;
    }    

public: 
        int val(int target, MountainArray &mountainArr,int left){
        int start=0,end=left,temp = left;
        int flag=0,mid;
	    while(start<=end){
		    mid = (start + end)/2;
		    if(target<mountainArr.get(mid)){
			    end = mid-1;
		    }
		    else if(target > mountainArr.get(mid)) start = mid+1;
		    else {
			    flag=1;
			    break;
		    }
	    }
	    if(flag==1) return mid;
	    else return newval(target, mountainArr,temp);
    }
    

    
    
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int left = 0,right = mountainArr.length()-1,mid;
        while(left<right){
            mid = (left+right)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid +1)){
                right=mid;
            }
            else{
                left = mid+1;
            }
         }
        return val(target, mountainArr,left );
    }
};