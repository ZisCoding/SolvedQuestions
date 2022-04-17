// Question link
// https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

long long maxSubarraySum(int arr[], int n)
{
	long long ans=0 , maxans=0;
	
	for(int i=0 ; i<n ; i++)
	{
		ans+=arr[i];
		if(ans<0)
		{
			ans=0;
		}
		else if(ans>maxans)
		{
			maxans=ans;
		}
	}
	return maxans;
}
