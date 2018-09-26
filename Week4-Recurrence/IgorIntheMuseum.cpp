#include <bits/stdc++.h>
using namespace std;

char value[1000][1000];
int ans[1000000]={0};
int visited[1000][1000]={0};
int total=0;
int answer=0;
int n,m,k,x,y;

//floodfill algorithm function
void floodFill(int row, int col, int n, int m) 
{
	if(row<0||col<0||row>=n||col>=m) return;
	if(visited[row][col]!=0) return;
	if(value[row][col]=='*')
	{
	    total++;
	    return;
	}
		
	visited[row][col]=answer;
	floodFill(row-1,col,n,m);
	floodFill(row+1,col,n,m);
	floodFill(row,col-1,n,m);
	floodFill(row,col+1,n,m);
	return;
}

int main() 
{
	cin>>n>>m>>k;

    //to input the value layout
	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<m; j++) 
		{
			cin>>value[i][j];
		}
	}

    //to count the total pictures
	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<m; j++) 
		{
			{
			    answer++;
			    total=0;
			    floodFill(i,j,n,m);
			    ans[answer]=total;
		    }
		}
	}
	
    //to print the amount of total pictures
	for(int i=0; i<k; i++) 
	{ 
		cin>>x>>y;
		
		cout<<ans[visited[x-1][y-1]]<<endl;
	}
	return 0;
}
