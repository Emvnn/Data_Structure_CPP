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
