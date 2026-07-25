#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
class Solution{
public:
  int romanInt(string st){
    unordered_map<char, int> num = {
    {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int result = 0;
    
    for(int i = 0; i < num.size(); i++){
      if(i<st.size()-1 && num[st[i]] < num[st[i+1]]){
        result = result - num[st[i]];
      }
      
      result = result + num[st[i]];
    }
    return result;
  }
};

int main(){
	Solution sol;
	//sol.romanInt("III");
	cout<<sol.romanInt("III")<< " "<<"\n";
	return 0;
}
