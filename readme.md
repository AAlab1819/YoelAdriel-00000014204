946a Partition

in this problem we need to find max possible value for B-C.
B is sum of all the positive number and C sum of negative number.
 for(int i = 0; i < n; ++i) {
  	cin >> tmp;
  	if(tmp >= 0)
  		b += tmp;
  	else
  		c += tmp;
  }
so we are using this code if its positive number it will immidiately added to b value.
and after that just b-c. finished  


submission link - http://codeforces.com/contest/946/submission/44726207

978b File Name

in this case program need to check if there is triple x in a row that mean program need to erase one of the x.
After that show the output of how many x deleted for valid input. 
so in this program after we input the string with s as variable name 
  while(s.length() >= 3 && s.find("xxx") != string::npos) {
    int idx = s.find("xxx");
    s.erase(idx, 1);
  }

we are going to check if there the string lenght is more than 3 thats mean there is a posibility than the string contain triple x
and than programm will check if there is xxx.
if there is xxx than the program will delete the x from it location
the output for how many deleted x is just find the difference between original input with the new string after deletion. 


submission link - http://codeforces.com/contest/978/submission/44729566
	
731b Coupons and Discount 

in this program we need to find if sereja can order pizza only using coupons and discounts. So we gonna check if there is 2 day in a row pizza purchase thats mean sereja got a coupon 
or if there is 2 purchased pizza sereja got discount. After inputing the array we are going to check if the value in the array is odd and if the next array --= 0 thats mean sereja cant use coupons and discounts so the output will be no
else yes 

 

submission link - http://codeforces.com/contest/731/submission/44776645