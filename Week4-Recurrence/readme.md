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


