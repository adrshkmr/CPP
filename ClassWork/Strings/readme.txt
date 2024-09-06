swap() - swap(string1, string2)
find() - can pass a substring and find in the main string
clear() - used to clear all the elements from the string
strncmp() - This function compares at most the first num bytes of both passed strings.
strncmp() - This function is similar to strcpy() function, except that at most n bytes of src are copied
.replace() - // Replaces 7 characters from 0th index by s2  s1.replace(0, 7, s2); 
.substr() -  string r = s1.substr(3, 2);
.erase() - The function erases a part of the string content, shortening the length of the string. str.erase(), str.erase(1) from 1 to all will be freed up
.compare()  -   int result = str1.compare(str2); 0/1/-1
strcat() - strcat(dest, src)
strrchr() - finds the last occurance of a character and returns pointer to that character.      char* ptr = strrchr(str, chr);
.rfind() - returns the last occurance of the string, if any character is passed then searches for the last occurance of the character
.capacity() - equal to length or more than that
.resize() - used to resize the string
.shrink_to_fit() - destory the removed characters and reduces the capacity as well
.at() - returns the character at the index
