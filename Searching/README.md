# The meaning of Searching

Searching in C++, this is the process of finding a certain data item from a given list of values, this process is called searching. The searching process is considered successful if the specified data item is successfully found during the searching process in C++ otherwise, if the specified data item is not found then the result is declared unsuccessful. The search operation comes to an end or is terminated when the specified item is found. This may also be possible that more than one instance of the searched item may be present in the provided list.

Based on the type of search operation, these algorithms are generally classified into two categories:

## 1.Sequential Search:
In this, the list or array is traversed sequentially and every element is checked. For example: **Linear Search**.


### How Linear Search Works?

The following steps are followed to search for an element k = 1 in the list below.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-initial-array.png)

1.Start from the first element, compare k with each element x.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)

2.If x == k, return the index.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-found.png)

3.Else, return not found.

## 2.Interval Search:
These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half. For Example: **Binary Search**.


### How Binary Search Works?

> Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

Binary Search Algorithm can be implemented in two ways which are discussed below.

1.Iterative Method
2.Recursive Method

The recursive method follows the divide and conquer approach.
The general steps for both methods are discussed below.

1.The array in which searching is to be performed is:

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-initial-array.png)

Let x = 4 be the element to be searched.

2.Set two pointers low and high at the lowest and the highest positions respectively.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-set-pointers.png)

3.Find the middle element mid of the array ie. arr[(low + high)/2] = 6.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid.png)

4.If x == mid, then return mid.Else, compare the element to be searched with m.

5.If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.

6.Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-find-mid.png)

7.Repeat steps 3 to 6 until low meets high.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid-again.png)

8.x = 4 is found.

![Github logo](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-found.png)





# heading 1
## heading 2
### heading 3
#### heading 4
##### heading 5
###### heading 6

**This will be Bold**

*This will be italic*

***This will be both bold and italic***

1. item 1
2. item 2
3. item 3
   1. sub-item 1 of item 3
   2. sub-item 2 of item 3
   
   * item 1
* item 2
* item 3
   * sub-item 1 of item 3
   * sub-item 2 of item 3
   
   [Github](https://www.github.com)
   
   ![Github logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png)
   
   As Albert Einstein said:
> Insanity is repeating things and excepting different results.

\ backslash 
` backtick 
* asterisk 
_ underscore
{} curly braces 
[] square brackets 
() parentheses 
# hash mark 
+ plus sign 
— minus sign (hyphen) 
. dot 
! exclamation mark


