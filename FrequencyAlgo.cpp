//Frequency algorithm is use in strings , it works by checking the occurrence if an alphabet .
string s={b,a,n,a,n,a};
int freq[26]={};//declare size as 26 because there are only 26 alphabets in english.
for(char c : s){//this loop work by storing values of string s in c one by one .
  freq[c-'a']++//so c = b for 1st iteration , & 'b'-'a' = 1 which is equal to b (a=0,b=1,c=2 & so on ).
//++ is used to increase the value at 1 , so at b 1 will be increased , jsut as when n (13), 1 will be increased 
// a = 3
// b = 1
// n = 2
//this how it counts frequency , it will be helpful in hashing.
//leetcode question 389 perfect example
}
