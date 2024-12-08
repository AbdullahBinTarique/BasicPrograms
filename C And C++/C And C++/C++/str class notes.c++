#include <string>

string functions in c++

str.length(),str.size(): the name says its function

str.capacity() it returns  the maximum number of char a string can hold

str.resize(30) it will resize the string to store upto mentioned number i.e 30

str.max_size() it shows the maximum size a string can expand itself

str.clear() it clears the targeted _String

str.empty() does the same task as above // currently not working

str.append("Bye") will append Bye to str

str.insert(3,"kk") will insert kk on 3rd position
str.insert(3,"apple",2) will insert only 2 words "ap"at 3rd pos of 
targeted string

str.replace(3,5,"aa") middle one will replace number of terms with "aa"

str.erase() same as clear

str.push_back('a') it will insert a single character in a string

str.pop_back() it will remove a single character from a string

str.swap(str2) This will swap str with str2


str.copy(char str2[], Num of elements you wanna copy  )

str.find(str) or part of str in " " or any char

str.rfind() same as above function but will search from the right Side

str.find_first_of('char') will search for first occurence and return its index

str.find_first_of('l',4)it will search for l after 4th index
can also be used to find  search multiple elements at the same time like
str.find_first_of("le",4) it will search for both l and e and whichever comes first 
thats index will be returned.

str.find_last_of('char') will search last first occurence and return its index

s.substr(start, number of elements you want)

s.compare(str)

s.at(4) is same as s[4] 
s.front() return first letter of string  
s.back() returns last letter of string
+ operator is used in string to concatenate 2 _String
ex. str3=str1+str2;

= operator is used to assign 1 string to another
str3=str2;

iterators is a strings class
string::iterator it; (syntax) to create an object of iterator. Iterator is a pointer
it=str.begin(); it will point to beginning of the String
it=str.end(); it will point to ending of the string from left to right
it ++ ; will move iterator fwd
cout<<*it; will print the content in the 'it' object; 
similarly we have reverse _Iterator
string::reverse_iterator it;
it=str.rbegin(); It will begin from right ENd
it=str.rend() It will point to end ending at left

