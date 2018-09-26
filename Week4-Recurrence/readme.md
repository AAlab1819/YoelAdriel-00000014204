Problem 268 B - Buttons

In this problem we need to find the number of times Manao has to push a button in the worst-case scenario.
The rule is if Manao press wrong button than all the button unpress. 
So if we want to find 2 3 1
the worst case scenario is like this <br />
1 <br />
3 <br />
2 1 <br />
2 3 1 <br />

so manao has to push 7 button to unlock the lock. 
in this code we are using this 
  for(int i=1;i<n;i++){
        total += (n-i)*i;
    }
    
total is equal to n (input) coz for the first press we need to try all the button
than after  we got the right button so we need to find the second button 
and we are using (n-i)*i and it gonna calculate how many button manao need to push.
Best case: O(1)

Complexity:O(n)

submission link - http://codeforces.com/problemset/submission/268/43358727

Problem 598 D - Igor In the Museum

In this problem we need to find out how many pic igor can see. IF (.) and (*) adjacent thats mean igor can see one 
picture. Igor only can move from (.) to (.)
first we will input how many row,col, and the position. after that we will input (.) and (*) it will be store at value[i][j]
at this program we use floodfill  to count how many pic that igor can see. For every visited cell we will mark it as 0 so 
program will only check for cell than havent been visited <br />
if(visited[row][col]!=0) return; <br />
to check the surrounding of igor location we use recursive function <br />
	floodFill(row-1,col,n,m); <br />
	floodFill(row+1,col,n,m); <br />
	floodFill(row,col-1,n,m);<br />
	floodFill(row,col+1,n,m);<br />
  
to show the total picture we use
for(int i=0; i<n; i++) <br />
	{
		for(int j=0; j<m; j++) <br />
		{
			{
			    answer++;<br />
			    total=0;<br />
			    floodFill(i,j,n,m); <br />
			    ans[answer]=total;<br />
		    }
		}
	}

and print it using cout<<ans[visited[x-1][y-1]]<<endl;




submission link - http://codeforces.com/contest/598/submission/43459799

