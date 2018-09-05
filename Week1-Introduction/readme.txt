Problem 854 A - Fractions

in this case , we need to make a program that create a fraction from our input which the sum of numerator and denominator 
is the number that we already input and they have to be irreducible.
in my code, i find the numerator number first by dividing the input and than just substract it with the input and that will be the denominator number.

for even number i use 
	a=n/2-1;
	b= n-a;
-1 is for making irreducible fraction 

for odd number i use 
	a+=(n-1)/2;
	b= n-a;
in this code i substract n with 1 so the number is not decimal

after this , to make the fraction irreducible i need to check the greates common divisor, 
if the common divisor not 1 thats mean the fration is not irreducible 
for(int i=1;i<=a&&i<=b;i++){

if(a%i==0 && b%i == 0 ){

gcd=i;
}
}
if (gcd!=1)
{
	a -= 1;
	b += 1;
}
this is the code to find the gcd and after that if the gcd is not 1 that ill reduce a 1 and add b 1 so
the praction will be irreducible 

submission link : http://codeforces.com/contest/854/submission/42461981

Problem 912 A - Tricky Alchemy

in this problem we need to know the minimal number of crystals that grisha need. We know that 
yellow = 2 yellow crystal
green = 1 yellow crystal 1 blue crystal 
blue = 3 yellow crystal

in my code to know how many minimal crystals grisha need, we need to know first how many yellow that we need to make a ball
	if (a<(2*x+y))
	{
		kurang+= ((2*x+y)-a);
	}
so to find the minimal yellow crystal is if the available crystal less than what we want to make 
just find the difference from a and the crystal that we need. same as the blue one. 

submission link : http://codeforces.com/contest/912/submission/42449586

Problem 988 A - Diverse Team

in this problem to show the team member location we need to use array so 
for(int i=0;i<n;i++){
cin>>arr[i];
se.insert(arr[i]);
++arr2[arr[i]];}
is for making array as many as input from before. Ex 3 so it will loop 3 time and put the data inside 3 different array
	for(int i=0;i<n&&q<k;i++){
		 if(arr2[arr[i]]!=-1){
			 cout<<i+1<<" ";
			 arr2[arr[i]]=-1;
			 q++;
		 }
	}
this part is for checking the value inside the array. If the value is different than it location will be shown  i+1
cz array always start from 0. 
submission link : http://codeforces.com/contest/988/submission/42483958
