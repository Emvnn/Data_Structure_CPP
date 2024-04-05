# Vector
**Initialization / Access**
```CPP
#include <vector>
#include <iostream>

int main () {
using std::cout;
std::vector<int> v {2, 7, 9};
cout << v.size() << '\n';       // 3
cout << v[0] << '\n';           // 2
cout << v[1] << '\n';           // 7
v[1] = 4;                       // assign new value 
cout << v[1] << '\n';           // 4
cout << v.front() << '\n';      // 2
cout << v.back()  << '\n';      // 9
}

```
### Careful!

![imagename](https://hackingcpp.com/cpp/std/vector_init_pitfall.svg)  

***

**Appending Elements**
```CPP
vector<T>::push_back(Element)
```
_adds an element of type T at the end of the vector_

```CPP
#include <iostream>
#include <vector>

int main () {
using std::cout;
std::vector<int> v;
cout << v.size() << '\n';        //         // 0 
v.push_back(2);
cout << v.size() << '\n';        // 2       // 1
v.push_back(7);
cout << v.size() << '\n';        // 2 7     // 2
v.push_back(9);
cout << v.size() << '\n';        // 2 7 9   // 3
}

```
*** 

**Resizing**

```CPP
vector<T>::resize(new_number_of_elements, filler_value=T{})
```

```CPP
#include <iostream>
#include <vector>

int main () {
using std::cout;
std::vector<int> v {1,2};               // 1 2
v.push_back(3);                         // 1 2 3
cout << v.size() << '\n';               // 3
v.resize(6, 0);                         // 1 2 3 0 0 0
cout << v.size() << '\n';               // 6
}

```
***

**Erasing Elements (at the end)**
```CPP
vector<T>::pop_back()
vector<T>::clear()
```

```CPP
#include <iostream>
#include <vector>

int main () {
using std::cout;
std::vector<int> v {1,2,3,4,5,6};       // 1 2 3 4 5 6
cout << v.size() <<'\n';                // 6
v.pop_back();                     
cout << v.size() <<'\n';                // 1 2 3 4 5   // 5
v.pop_back();    
cout << v.size() <<'\n';                // 1 2 3 4    // 4
v.clear();
cout << v.size() <<'\n';                // 0
}

```
***

**Assign New Content**

```CPP
vector<int> u {5,7};                  // u = 5 7
vector<int> v {1,2,3};                // v = 1 2 3
// copy-assign from other
u = v;                                // u = 1 2 3    // v = 1 2 3
// multiple times same value
v.assign(4, 9);                       // u = 1 2 3     // v = 9 9 9 9          
```
