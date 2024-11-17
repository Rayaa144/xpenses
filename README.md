<h1 align="center">test</h1>
this project is mostly so that i can learn in the process  
here i would like to document what i learnde so far
1st commit   learned how to make header files and manage them
             learned somewhat new things about make file
             finally used other datatypes in c like sort and unsignned char

so const is used to show and make sure that a function doesnot change the data by mistake

if char is initialized then no need to mention its size but you gotta make sure that if the string is changed then it remain in the bounds  or else bad things will happen so its a good measure to add const char txt = "idk somethin" to make it immutable

again sizeof says the bites of data in that datatype  aka in includes the null byte   and the strlen says the length of string until null byte +1 i.e. if word[20] = "hello"; then sizeof(word) is 6 and strlen is 5 where 5tn index is null byte '\0'
