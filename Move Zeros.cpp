#include <iostream>
#include<vector>
using namespace std;

//using swap
// void moveZero(vector<int>& nums){
//     int j = 0;
//     for(int i=0; i< nums.size(); i++){
//         if(nums[i] != 0){
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }

//using pointers
void moveZero(vector<int>& nums){
    int insertPos = 0;
    for(int i = 0; i< nums.size(); i++){
        if(nums[i] != 0){
            nums[insertPos] = nums[i];
            insertPos++;
        }
        
    }
    
    for(int i =  insertPos; i< nums.size(); i++){
        nums[i] = 0;
    }
}
int main()
{
    vector<int> num = {0, 1, 0, 3, 12};
    moveZero(num);
    for(int i: num){
        cout<< i << " ";
    }
    return 0;
}


//Explaination
// | i | nums[i] | Action     | Array       | insertPos |
// | - | ------- | ---------- | ----------- | --------- |
// | 0 | 0       | Skip       | 0 1 0 3 12  | 0         |
// | 1 | 1       | nums[0]=1  | 1 1 0 3 12  | 1         |
// | 2 | 0       | Skip       | 1 1 0 3 12  | 1         |
// | 3 | 3       | nums[1]=3  | 1 3 0 3 12  | 2         |
// | 4 | 12      | nums[2]=12 | 1 3 12 3 12 | 3         |
