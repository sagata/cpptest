#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {

		if(str == NULL || length <=0) return;
		int zero_count = 0;
		int other_count = 0;
		int end = -1;

		for(int i=0;i<length;i++)
		{
			if(str[i] == '\0')
			{ 
				end = i-1;
				break;
			}
			if(str[i] == ' ') zero_count++;
			else other_count++;
		}

		int end2 = other_count + 3 * zero_count - 1;
		while(end >=0)
		{	
			if(str[end] == ' ')
			{
				str[end2--] = '0';
				str[end2--] = '2';
				str[end2--] = '%';
			} 
			else
			{
				str[end2--] = str[end];	
			}
			end--;
		}

	}
};

int main()
{
	char ch[20] = " helloworld";
	cout<<ch<<endl;
	cout<<sizeof(ch)<<endl;
	Solution s;
	s.replaceSpace(ch,20);
	cout<<ch<<endl;


	cout<<"test"<<endl;
}