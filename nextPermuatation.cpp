//Question link
// https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <algorithm>
vector<int> nextPermutation(vector<int> &permutation, int n)
{
	vector<int> ans;
	ans=permutation;
	int index;
	for(int i=n-2 ; i>0 ; i--)
	{
		if(ans[i]<ans[i+1])
		{
			index=i+1;
			for(int j=i+2 ; j<n ; j++)
			{
				if(ans[i]<ans[j])
				{
					index=j;
				}
			}
			int temp=ans[i];
			ans[i]=ans[index];
			ans[index]=temp;
			reverse(ans.begin()+i+1 , ans.end());
			return ans; 
		}
	}
	if(ans[0]<ans[n-1])
	{
		int temp=ans[0];
		ans[0]=ans[n-1];
		ans[n-1]=temp;
		reverse(ans.begin()+1,ans.end());
		return ans; 
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
