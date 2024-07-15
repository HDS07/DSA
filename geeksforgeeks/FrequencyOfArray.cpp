// Frequencies of Limited Range Array Elements

// Examples
// Input: n = 5 arr[] = {2, 3, 2, 3, 5} p = 5
// Output: 0 2 2 0 1
// Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 2 times. 3 occurring 2 times. 4 occurring 0 times. 5 occurring 1 time.

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        map<int,int>mpp;
       for(int i=0;i<N;i++){
           mpp[arr[i]]=mpp[arr[i]]+1;
       }
       
       for(int i=0;i<N;i++){
           arr[i]=mpp[i+1];
       }
        
    }
};
int main() 
{ 
	int N, P;
	cin >> N; 
	vector<int> arr(N);
	for(int i = 0; i < N ; i++){
	    cin >> arr[i]; 
	}
    cin >> P;
    Solution ob;
	ob.frequencyCount(arr, N, P); 
	for (int i = 0; i < N ; i++) 
		cout << arr[i] << " ";
	cout << endl;
	return 0; 
}