#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	long long sum=0;
	vector<int> arr;
	cin >>n;
	for(int i=0;i<n;i++)
		{
			int tmp;
			cin >> tmp;
			if(tmp%2==0){
				sum+=tmp;
			}
			else{
				arr.push_back(tmp);
			}
		}
		if(arr.size()%2==0)
		{
			for(int u:arr){
				sum+=u;
			}
		}
		else {
			sort(arr.begin(),arr.end());
			for(int i=1;i<arr.size();i++){
				sum+=arr[i];
			}
		}
    
	cout << sum << endl;
	return 0;
}