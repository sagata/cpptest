#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
    	int x_max = array[0].size() - 1;
    	int y_max = array.size() - 1;
    	int px = 0;
    	int py = y_max;
    	while(py > 0)
    	{
    		while(py!=0 and array[px][py] > target) py--;
    		if(array[px][py] == target) return true;
    		while(px!=x_max and array[px][py] < target) px++;
    		if(array[px][py] == target) return true;
    		py --;
    	}
    	return false;

        
    }
};



int main()
{
	vector<vector<int> > test = {{1,2,8,19},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	Solution s;
	bool result = s.Find(19,test);
	cout<<result<<endl;
	cout<<test.size()<<endl;
}