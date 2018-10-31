433B Kuriyama Mirai's Stones

in the first problem we need to find the answer to kuriyama mirai's' question. 
the format of the input is question - index1 - index 2
question 1 mean we need to show the answer of sum value from index1 to index 2 from the given data
question 2 mean we need to sort the given data first than sum the value from index1 to index2 
<br>
example <br>
6 4 2 7 2 7 <br>
1 3 4 == >the answer is 2 + 7 = 9 <br>
2 3 4 ==> we are going to sort the data first ==>  2 2 4 6 7 7 ==> thats mean the answer is 4 + 6 = 10 <br>
in this code we already fill the <br>and uscum[n] array with the addition value. is for sorted array sum and uscum[n] is for unsorted array.
afther that we going to input the question type. If the question type is 1 thats mean we are using the uscum[n] data. 
to find the sum from index1 to index2 we are going to substract uscum[index2] with scum[index1-1]. 
same thing for question 2.  



submission link - http://codeforces.com/contest/433/submission/44930627


913C Party Lemonade


in this program we need to find the smallest number of roubles we have to pay for L liters of lemonade.
even though we only need 3 liters, if the 8 liter bottle cheaper than we will chose the 8 liter botttle.
we are going to check each array price. after that we are going to take the minimum amount of the money. than we are going to chck if the minimum price drink have the amount that we need.
if its not that the code will find the second cheapest price and than check again if the amountn of lemonade already fullfil 
the amount of lemonade that we need.

submission link - http://codeforces.com/problemset/submission/913/44930730