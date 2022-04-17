//Question link
// https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

vector<vector<long long int>> printPascal(int n) 
{
 	vector<long long int> previous; vector<long long int> current;
	
	previous.push_back(1);
	
	vector<vector<long long int>> ans ;
	
	ans.push_back(previous);
	
	for(int i=1 ; i<n ; i++)
	{
		for(int j=0 ; j<=i ; j++)
		{
			if(j==0 || j==i)
			{
				current.push_back(1);
                continue;
			}
			
			long long int temp = previous[j-1] + previous[j];
			
			current.push_back(temp);
		}
		
		ans.push_back(current);
        previous=current;
		current.clear();
	}
	
	return ans;
}
