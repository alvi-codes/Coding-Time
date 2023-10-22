
[//]: # (This may be the most platform independent comment ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////)

# C++
<ul>

<details>
<summary>Built-in Functions</summary>

<ul>


<details>
<summary>Numeric, Alphabetic & Alphanumeric</summary>
<ul>

`isalnum(int c)`: Checks if `c` is alphanumeric (0-9, a-z, A-Z). Returns non-zero if true, zero if false.

`isalpha(int c)`: Checks if `c` is alphabetic (a-z, A-Z). Returns non-zero if true, zero if false.

`isdigit(int c)`: Checks if `c` is a digit (0-9). Returns non-zero if true, zero if false.

All of these belong to the `<cctype>` header.

Here's a concise example to demonstrate their usage:

```cpp
#include <iostream>
#include <cctype>

int main() {
    char ch = 'A';

    if (isalnum(ch)) {
        std::cout << ch << " is alphanumeric." << std::endl;
    }

    if (isalpha(ch)) {
        std::cout << ch << " is alphabetic." << std::endl;
    }

    if (isdigit(ch)) {
        std::cout << ch << " is a digit." << std::endl;
    }

    return 0;
}
```

In this example, the output will be:
```cpp
A is alphanumeric.
A is alphabetic.
                    // A is not a digit, so nothing is printed
```
Even though functions `isalnum`, `isalpha`, and `isdigit` are defined to take an `int` as an argument, like `is...(int c)`, we can pass `char` too like we did in the above code, which will be automatically promoted to an `int`.

For example, passing '5' to these functions would indicate it's alphanumeric and a digit, but not alphabetic.

To check if all characters in a string are alphanumeric, alphabetic, or digits, use a loop to iterate through each character of the string and apply the respective function.

Here's a brief example using `isalnum()`:

```cpp
#include <iostream>
#include <cctype>
#include <string>

bool isStringAlphanumeric(const std::string& str) {
    for (char ch : str) {
        if (!isalnum(ch)) return false;
    }
    return true;
}

int main() {
    std::string s = "Hello123";
    
    if (isStringAlphanumeric(s)) {
        std::cout << "The string is alphanumeric.\n";
    } else {
        std::cout << "The string is not alphanumeric.\n";
    }

    return 0;
}
```
For the string "Hello123", the output would be:
```
The string is alphanumeric.
```

</ul>
</details>

<details>
<summary>Substring</summary>
<ul>

A substring is a part of a string. You can extract a substring using the `substr()` function of the `std::string` class. Here's a concise example:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string fullString = "Hello, World!";
    
    // Extract a substring from position 7 to the end.
    std::string substring1 = fullString.substr(7);
    std::cout << "Substring 1: " << substring1 << std::endl;

    // Extract a substring from position 0 with a length of 5 characters.
    std::string substring2 = fullString.substr(0, 5);
    std::cout << "Substring 2: " << substring2 << std::endl;

    return 0;
}
```
This code demonstrates how to use `substr()` to create substrings starting from specific positions in a string, with or without specifying a length.

Time Complexity: <br>
`substr()` has a time complexity of O(k), where k is the length of the extracted substring. It scales linearly with the substring size.

</ul>
</details>

<details>
<summary>Power</summary>
<ul>

We can calculate the power of a number using the `pow()` function from the `<cmath>` library.

It takes two arguments: the base and the exponent, and returns the result.
 
Here's a concise example:

```cpp
#include <iostream>
#include <cmath>

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);
    std::cout << base << "^" << exponent << " = " << result << std::endl;
    return 0;
}
```
This code calculates and prints the result of 2^3, which is 8.

Time Complexity: <br>
`pow()` typically has a time complexity of O(log n), where n is the exponent.  It is efficient for integer exponents, but can be less efficient for non-integer exponents due to complex calculations. Compiler and library optimizations may affect the actual time complexity.
</ul>
</details>

<!-- <details>
<summary>Power</summary>
<ul>

</ul>
</details> -->

<details>
<summary>String to Int</summary>
<ul>

In C++, `stoi` is a standard library function used to convert a string to an integer. It's particularly useful when you need to work with numeric values from user input or strings read from files. Here's a simple example:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string numStr = "42"; // A string containing a numeric value
    
    // Using stoi to convert the string to an integer
    int num = std::stoi(numStr);

    std::cout << "The integer value is: " << num << std::endl;
    
    return 0;
}
```

In this example, the string `"42"` is converted to the integer `42` using `std::stoi`, allowing you to work with the numeric value as an integer in your program.

</ul>
</details>


<details>
<summary>Int to String</summary>
<ul>

In C++, `std::to_string` is a standard library function used to convert an integer to a string. It's useful when you need to convert an integer to a string for purposes like concatenation or displaying the integer as part of a larger string.

```cpp
#include <iostream>
#include <string>

int main() {
    int num = 42; // An integer
    
    // Using std::to_string to convert the integer to a string
    std::string numStr = std::to_string(num);

    std::cout << "The string representation is: " << numStr << std::endl;
    
    return 0;
}
```

In this example, the integer `42` is converted to the string `"42"` using `std::to_string`, allowing you to work with the integer as a string in your program.

</ul>
</details>

<!-- <details>
<summary>Power</summary>
<ul>

</ul>
</details> -->


<details>
<summary>Char to Int</summary>
<ul>

In C++, you can convert a character to an integer by using type casting. This allows you to get the numeric value of the character based on its ASCII value.

```cpp
#include <iostream>

int main() {
    char charValue = '5'; // A character
    
    // Using type casting to convert the character to an integer
    int intValue = charValue - '0';

    std::cout << "The integer value is: " << intValue << std::endl;
    
    return 0;
}
```

In this example, the character `'5'` is converted to the integer `5` by subtracting the ASCII value of `'0'`. This technique works for converting characters that represent digits (0-9) to their corresponding integer values.

</ul>
</details>





</details>

<details>
<summary>Built-in Data Structures</summary>

<ul>


<details>
<summary>Vector</summary>
<ul>



### Vectors in C++:

- **`std::vector`**:
   - **Description**: A dynamic array that auto-resizes. It provides direct access to elements and efficiently manages memory storage.
   - **Header**: `#include <vector>`

---

### Declaring Vectors in C++:

1. **Default Initialization**: Creates an empty vector.
    ```cpp
    std::vector<int> vec1;
    ```

2. **Initialization with Size**: Creates a vector with a specified size, initializing all elements to a default value (e.g., 0 for integers).
    ```cpp
    std::vector<int> vec2(5);  // Vector of size 5 with all elements as 0
    ```

3. **Initialization with Size and Value**: Creates a vector with a specified size and initializes all elements to a given value.
    ```cpp
    std::vector<int> vec3(5, 10);  // Vector of size 5 with all elements as 10
    ```

4. **List Initialization**: Creates a vector and initializes it with the given elements.
    ```cpp
    std::vector<int> vec4 = {1, 2, 3, 4, 5};
    ```

5. **Copy Initialization**: Creates a new vector as a copy of an existing one.
    ```cpp
    std::vector<int> vec5 = vec4;  // Creates a copy of vec4
    ```

---

### Common Member Functions for `std::vector`:

- **`at(index)`**: Access element at a specified index with bounds checking.
  
- **`operator[]`**: Access element at a specified index without bounds checking.

- **`front()`**: Access the first element.

- **`back()`**: Access the last element.

- **`push_back(const Type &value)`**: Insert an element at the end.

- **`pop_back()`**: Remove the last element.

- **`begin(), end()`**: Return iterators pointing to the start and one-past-the-end of the vector, respectively.

- **`rbegin(), rend()`**: Return reverse iterators.

- **`empty()`**: Check if the vector is empty.

- **`size()`**: Return the number of elements.

- **`capacity()`**: Return the current memory allocation size.

- **`resize(size_type n)`**: Change the number of elements.

- **`reserve(size_type n)`**: Request a change in capacity.

- **`clear()`**: Remove all elements.

- **`insert(iterator position, const Type &value)`**: Insert elements at the specified position.

- **`erase(iterator position)`**: Remove element at the specified position.

---
### Inserting New Value In-front or In-between:

  Use member `insert(iterator position, const Type &value)` to insert elements at the specified position.


- **Insert an element at the beginning of a vector**:

  ```cpp
  #include <iostream>
  #include <vector>

  int main() {
      std::vector<int> myVector = {2, 3, 4};

      // Insert an element at the beginning
      myVector.insert(myVector.begin(), 1);

      for (int num : myVector) {
          std::cout << num << " ";
      }

      return 0;
  }
  ```

  Resultant Output:
  ```
  1 2 3 4
  ```

- **Insert an element in front of index 5 of a vector**:

  ```cpp
  #include <iostream>
  #include <vector>

  int main() {
      std::vector<int> anotherVector = {0, 1, 2, 3, 4, 5, 6};
      
      // Insert an element in front of index 5
      int newValue = 42;
      anotherVector.insert(anotherVector.begin() + 5, newValue);

      for (int num : anotherVector) {
          std::cout << num << " ";
      }

      return 0;
  }
  ```

  Resultant Output:
  ```
  0 1 2 3 4 42 5 6
  ```

  **Insert an entire vector**:
    
  ```cpp
  #include <iostream>
  #include <vector>

  int main() {
      std::vector<int> existingVector = {1, 2, 3};
      std::vector<int> toAdd = {4, 5, 6};

      // Use insert() to add the entire 'toAdd' vector to 'existingVector'
      existingVector.insert(existingVector.end(), toAdd.begin(), toAdd.end());

      // Display the combined vector
      for (int num : existingVector) {
          std::cout << num << " ";
      }

      return 0;
  }
  ```

  Resultant Output:
  ```
  1 2 3 4 5 6
  ```
---
### Copying Vectors:

- **Whole Vector**: 
  - Direct copy using the copy constructor or assignment.
  ```cpp
  std::vector<int> vec1 = {1, 2, 3};
  std::vector<int> vec2(vec1);  // Copy constructor
  std::vector<int> vec3 = vec1;  // Assignment
  ```

- **Part of a Vector**: 
  - Copy a segment using iterators. The range is `[first, last)`, i.e., it includes the first element but excludes the last.
  ```cpp
  std::vector<int> vec1 = {1, 2, 3, 4, 5};
  std::vector<int> subvec(vec1.begin() + 1, vec1.begin() + 4);  
  // the new vector is subvec = {2, 3, 4}
  ```


---

### Bounds Checking:
<ul>

Bounds checking ensures that an index accessing a container's element is within valid limits. In C++, `std::vector` offers the `at()` function for this.

**Example with `std::vector`:**
```cpp
std::vector<int> vec = {10, 20, 30};
```

- **Without bounds checking**:
  ```cpp
  int val = vec[5];   // Undefined behavior; index 5 is out of bounds
  ```

- **With bounds checking**:
  ```cpp
  int safeVal = vec.at(5);   // Throws an std::out_of_range exception
  ```

Traditional C++ arrays don't have an `at()` function; manual bounds verification is needed.

Using `at()` ensures safety but with a minor performance cost. If sure of index validity, `operator[]` is faster but riskier.
</ul>

---

### Notes:

- `std::vector` is frequently used in C++ due to its versatility and performance characteristics.
  
- Copying vectors is a linear-time operation. For partial copies, ensure to specify valid ranges to prevent out-of-bounds issues.







</ul>
</details>

<details>
<summary>Array</summary>
<ul>


### **Arrays in C++:**

Arrays, central to C++ programming, are collections of elements stored in contiguous memory locations. They can be the traditional C++ arrays or the `std::array` from the Standard Library.

Note: `Traditional Arrays Do Not Have Any Member Functions` 

---

### **1. Traditional C++ Arrays:** 

- **Definition**: A fixed-size collection of elements of the same type.

**Declaring Arrays**:

- **Default Declaration**: Declares an array without initialization. The values are indeterminate.
```cpp
int arr1[5];
```

- **Initialization at Declaration**: Declares an array and initializes it with the given elements.
```cpp
int arr2[5] = {1, 2, 3, 4, 5};
```

- **Implicit Size Deduction**: Declares an array without specifying size. The compiler determines the size from the initialization elements.
```cpp
int arr3[] = {1, 2, 3, 4, 5};  // Size is 5
```

- **Initialization with a Specific Value**: Declares an array and initializes all its elements to a specific value.
```cpp
int arr4[5] = {0};  // All elements are initialized to 0
```

**Accessing Elements**:
- Directly using an index: `int thirdElement = arr2[2];`

Recall: `Traditional Arrays Do Not Have Any Member Functions` 

---



### **2. `std::array`:**

- **Definition**: A C++11 container that wraps fixed-size arrays, offering various utilities.
- **Header**: `#include <array>`

**Declaration & Initialization**:
```cpp
std::array<int, 5> myArray = {1, 2, 3, 4, 5};
```

**Key Member Functions**:
- `at()`: Access with bounds checking.
- `operator[]`: Direct access.
- `front()`, `back()`: Access the first and last elements.
- `begin()`, `end()`: Obtain iterators.
- `size()`: Get element count.
- `empty()`: Check emptiness.
- `fill()`: Populate with a value.

---
### **Getting the Size:**


<ul>

### For Traditional Arrays:

- **Using `sizeof()`:** 
  The `sizeof()` operator provides the total memory (in bytes) the array occupies. To find the number of elements, you divide the total size by the size of one element.

  ```cpp
  int arr[] = {1, 2, 3, 4, 5};
  size_t length = sizeof(arr) / sizeof(arr[0]);
  ```

  **Note:** `This method is valid only in the scope where the array is declared. Once the array is passed to a function, it decays to a pointer, and this method will not provide the correct count.`

### For `std::array` Arrays:

- **Using `size()`:** 
  `std::array` offers the `size()` member function which directly provides the number of elements it contains.

  ```cpp
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  int length = arr.size();
  ```

</ul>

---
### **Best Practices & Insights**:

1. Traditional arrays don't provide bounds-checking or size data, leading to potential errors.
2. `std::array` is a safer, feature-enriched alternative with bounds checking and a fixed size.
3. Always monitor array boundaries to prevent undefined behavior.
4. For dynamic collections, `std::vector` is an excellent choice.

---


</ul>

</details>

<details>
<summary>Vectors VS Arrays</summary>
<ul>

---

| Feature/Property            | Arrays                         | Vectors                    |
|-----------------------------|--------------------------------|----------------------------|
| **Size**                    | Fixed at declaration           | Dynamic                    |
| **Memory Location**         | Contiguous                     | Contiguous                 |
| **Header**                  | None (built-in type)           | `#include <vector>`        |
| **Bounds Checking**         | No (manual check needed)       | Yes (using `at()` method)  |
| **Size Retrieval**          | Manual (using `sizeof`)        | `size()` method            |
| **Resizing**                | Not possible                   | `resize()`, `push_back()`, `pop_back()` |
| **Element Access**          | Direct indexing                | Direct indexing or `at()`  |
| **Performance**             | Slightly faster (no overhead)  | Slight overhead for dynamic sizing |
| **Safety & Flexibility**    | Less safe, less flexible       | More safe, more flexible   |
| **Insertion/Deletion**      | Not possible                   | Possible at any position   |

---

</ul>
</details>

<details>
<summary>Stack</summary>

<ul>

### Stack in C++:

- **Description**: The `std::stack` is a container adapter that provides Last-In-First-Out (LIFO) data structure.
- **Header**: `#include <stack>`

---

### Common Member Functions:

- **`push(const value_type& value)`**: Adds a new element to the top of the stack.
- **`pop()`**: Removes the top element from the stack. Note that this function doesn't return the removed element.
- **`top()`**: Returns a reference to the top element in the stack.
- **`empty()`**: Returns whether the stack is empty (`true` if empty, `false` otherwise).
- **`size()`**: Returns the number of elements in the stack.

---

### Notes:

- `std::stack` is an adapter, which means it's built on top of an underlying container type. By default, this container is `std::deque`, but you can specify others like `std::vector` or `std::list`.
- Unlike some other containers, `std::stack` provides a restricted subset of functionality – mainly focused on the top element – to adhere to the LIFO principle.


</ul>

</details>

<details>
<summary>Queue</summary>

<ul>

### Types of Queues in C++:

1. **`std::queue`**:
   - **Description**: A first-in, first-out (FIFO) data structure.
   - **Header**: `#include <queue>`

2. **`std::priority_queue`**:
   - **Description**: A data structure where elements are served in priority order, not in FIFO sequence. By default, the largest element has the highest priority.
   - **Header**: `#include <queue>`

---

### Common Member Functions:

#### `std::queue`:

- **`front()`**: Access the element at the front of the queue.
- **`back()`**: Access the element at the back of the queue.
- **`push(const Type &value)`**: Insert an element at the back of the queue.
- **`pop()`**: Remove the element from the front of the queue.
- **`empty()`**: Check if the queue is empty.
- **`size()`**: Return the number of elements in the queue.

#### `std::priority_queue`:

- **`top()`**: Access the top element (highest priority).
- **`push(const Type &value)`**: Insert an element into the priority queue.
- **`pop()`**: Remove the top element.
- **`empty()`**: Check if the priority queue is empty.
- **`size()`**: Return the number of elements in the priority queue.

---

### Notes:

- A `std::queue` provides functionality to operate in a FIFO manner. It does not support random access to its elements.
  
- A `std::priority_queue` does not allow direct access to the underlying data. It provides a sorted view based on priority (but internally, it might not be sorted).

- Both types of queues can be backed by different container types like `std::vector`, `std::deque`, etc., although there are defaults (`std::deque` is the default for both).

Choose between `std::queue` and `std::priority_queue` based on your requirements for data ordering and access.


</ul>

</details>

<details>
<summary>Map</summary>

---
<ul>

### Types of Maps in C++:

1. **`std::map`**:
   - **Description**: A collection of unique key-value pairs, sorted by their keys.
   - **Header**: `#include <map>`

2. **`std::multimap`**:
   - **Description**: Similar to `std::map`, but allows multiple key-value pairs with equivalent keys.
   - **Header**: `#include <map>`

3. **`std::unordered_map`**:
   - **Description**: A collection of unique key-value pairs, hashed by their keys. Doesn't maintain any order.
   - **Header**: `#include <unordered_map>`

4. **`std::unordered_multimap`**:
   - **Description**: Similar to `std::unordered_map`, but allows multiple key-value pairs with equivalent keys.
   - **Header**: `#include <unordered_map>`

---

### Common Member Functions:

#### Ordered Maps (`std::map` and `std::multimap`):

- **`begin(), end()`**: Return iterators pointing to the start and one-past-the-end of the map, respectively.
- **`rbegin(), rend()`**: Return reverse iterators pointing to the last element and one-before-the-start of the map.
- **`empty(), size(), clear()`**: Container metadata and management.
- **`insert({key, value})`, `erase(iterator or key)`**: Data manipulation.
- **`find(key)`, `count(key)`**: Data query.
- **`lower_bound(key), upper_bound(key)`**: Range queries based on key.

#### Unordered Maps (`std::unordered_map` and `std::unordered_multimap`):

- **Similar Functions**: Like ordered maps, they offer functions for metadata (`empty()`, `size()`, `clear()`), data manipulation (`insert()`, `erase()`), and data query (`find()`, `count()`).
- **Note**: Unordered maps lack range query functions like `lower_bound()` and `upper_bound()` due to their lack of inherent order.

---

### Notes:

- Ordered maps maintain their elements in sorted order based on the key.
- Unordered maps organize elements into buckets based on their hash values, offering faster average access times but no ordering guarantees.
  
Choose between ordered and unordered maps based on your requirement for element ordering and performance considerations.

---
</ul>
</details>

<details>
<summary>Set</summary>
<ul>



In a `std::set` or `std::unordered_set` in C++, each element is a unique value. The term `"key"` is sometimes used to refer to these values, but there's no distinction between key and value as in maps. The value itself ensures uniqueness or ordering in the set.

---
### **Types of Sets in C++:**

1. **`std::set`**: 
   - **Description**: A collection of unique keys sorted by their values.
   - **Header**: `#include <set>`
   
2. **`std::multiset`**:
   - **Description**: Similar to `std::set`, but allows multiple entries with equivalent keys.
   - **Header**: `#include <set>`

3. **`std::unordered_set`**:
   - **Description**: A collection of unique keys, hashed by their values. Doesn't maintain any order.
   - **Header**: `#include <unordered_set>`

4. **`std::unordered_multiset`**:
   - **Description**: Similar to `std::unordered_set`, but allows multiple entries with equivalent keys.
   - **Header**: `#include <unordered_set>`
Certainly, let's add more details to these points:

---

### **Common Member Functions:**

 #### Ordered Sets (`std::set` and `std::multiset`):

- **`begin(), end()`**: Return iterators pointing to the start and one-past-the-end of the set, respectively.
- **`rbegin(), rend()`**: Return reverse iterators pointing to the last element and one-before-the-start of the set.
- **`empty()`**: Returns `true` if the set is empty, otherwise `false`.
- **`size()`**: Returns the number of elements in the set.
- **`clear()`**: Removes all elements from the set, making it empty.
- **`insert(value)`**: Adds the specified value to the set. For `multiset`, duplicates are allowed.
- **`erase(iterator or value)`**: Removes the specified value or the value at the specified iterator from the set.
- **`find(value)`**: Returns an iterator to the specified value if found; otherwise, returns `end()`.
- **`count(value)`**: Returns the number of elements with the specified value (1 for `set`, possibly more for `multiset`).
Certainly!

- **`lower_bound(value)`** returns an iterator to the first element not less than the value. If the value is `3` in a set `{1, 2, 4, 5}`, it points to `4`. Note that it returns an iterator, so to access the value, you need to dereference the iterator.
  ```cpp
  std::set<int> s1 = {1, 2, 4, 5};
  auto lb = s1.lower_bound(3);
  std::cout << *lb;  // Outputs: 4
  ```

- **`upper_bound(value)`** returns an iterator to the first element greater than the value. If the value is `4` in a set `{1, 2, 4, 4, 5}`, it points to `5`. Note that it returns an iterator, so to access the value, you need to dereference the iterator.

  ```cpp
  std::set<int> s2 = {1, 2, 4, 4, 5};
  auto ub = s2.upper_bound(4);
  std::cout << *ub;  // Outputs: 5
  ```

#### Unordered Sets (`std::unordered_set` and `std::unordered_multiset`):

- **Similar Functions**: Like ordered sets, they offer functions for metadata (`empty()`, `size()`, `clear()`), data manipulation (`insert()`, `erase()`), and data query (`find()`, `count()`).
- **Note**: Unordered sets lack range query functions like `lower_bound()` and `upper_bound()` due to their lack of inherent order.

---

### Set-specific Operations (for ordered sets):
To utilize these operations, include the `<algorithm>` header.

- **`std::set_intersection`**: Produces a set containing elements common to both input sets. For `std::multiset`, the `std::set_intersection` function considers multiple occurrences of elements. It counts the minimum occurrences of each element in both multisets for the intersection. If one multiset has an element twice and the other thrice, the intersection will have it twice.
- **`std::set_union`**: Combines two sets, producing a set containing all elements from both. For `std::set_union` with `std::multiset`, the resulting union will contain the sum of the occurrences of each element from both multisets. So, if one multiset has an element twice and the other has it thrice, the union will indeed contain that element five times.
- **`std::set_difference`**: Yields a set with elements present in the first set but not in the second.
- **`std::set_symmetric_difference`**: Produces a set containing elements that are in either of the input sets but not in both.
  

    Sample Code:

    ```cpp
    #include <set>
    #include <algorithm>
    #include <iterator>
    #include <iostream>

    int main() {
        std::multiset<int> ms1 = {1, 2, 2, 3};
        std::multiset<int> ms2 = {2, 2, 3, 4};
        std::multiset<int> result;

        std::set_intersection(ms1.begin(), ms1.end(), ms2.begin(), ms2.end(), std::inserter(result, result.begin()));
        // For set_union, set_difference, or set_symmetric_difference, replace set_intersection with the desired function.

        for (int num : result) {
            std::cout << num << " ";
        }
        return 0;
    }

    ```

---

### **Notes:**
- Ordered sets maintain their elements in sorted order (by key value or a provided comparator function).
- Unordered sets organize elements into buckets based on their hash values, offering faster average access times but no ordering guarantees.
  
Choose between ordered and unordered sets based on your requirement for element ordering and performance considerations.

</ul>

</details>

</details>

<details>
<summary>Loops & Iterators</summary>

</details>

<details>
<summary>Passing to Functions</summary>

<ul>
Here's a concise summary of the different methods to pass parameters to functions:

---

### **Passing by Reference with `const`**
```cpp
void foo(const std::string& s) { /* ... */ }
```
- **Pros**: 
  - Avoids copying, saving time and memory.
  - Explicitly denotes that data cannot be modified.
- **Cons**: 
  - Potential issues if original data is deleted.
- **Use Cases**: 
  - Inspecting data without risk of altering it.

---

### **Passing by Value (Copy)**
```cpp
void foo(std::string s) { /* ... */ }
```
- **Pros**: 
  - Function works on an independent data copy.
- **Cons**: 
  - Copying can be resource-intensive (time and memory) for big data.
- **Use Cases**: 
  - When local modifications won't affect the caller's data.

---

### **Passing by Pointer**
```cpp
void foo(std::string* s) { /* ... */ }
```
- **Pros**: 
  - Direct access to original data, allowing changes to it.
  - Null pointer can signify no valid data.
- **Cons**: 
  - Requires careful handling of pointer dereferencing.
- **Use Cases**: 
  - When there's potential need for null or memory operations.

---

### **Passing by Reference (non-const)**
```cpp
void foo(std::string& s) { /* ... */ }
```
- **Pros**: 
  - Direct and efficient access to original data.
  - Changes in function reflect on original data.
- **Cons**: 
  - Unintended data changes can be risky.
- **Use Cases**: 
  - When the function must alter the caller's data.

---

</ul>

</details>


<details>
<summary>Pointers</summary>

<ul>

<details>
<summary>New & Delete</summary>

<ul>

Use the `new` operator to allocate memory on the heap.

Use the `delete` operator to release that memory when it is no longer needed. 

Failing to release memory allocated with `new` can lead to memory leaks in your program. This trapped memory in RAM reduces available resources and hampers computer performance. It's worth noting that memory leaks primarily affect a program during its execution, and when the program terminates, the system reclaims the dynamically allocated memory.

Here's how you can use `new` and `delete` with pointers:

```cpp
int* p = new int;  // Allocate an integer on the heap
*p = 42;           // Assign a value to the allocated integer

// ... use p ...

delete p;          // Release the memory allocated for the integer
p = nullptr;       // Set the pointer to nullptr to avoid a dangling pointer
```

If you allocate an array with `new[]`, you should release it with `delete[]`:

```cpp
int* arr = new int[10];  // Allocate an array of 10 integers on the heap

// ... use arr ...

delete[] arr;            // Release the memory allocated for the array
arr = nullptr;           // Set the pointer to nullptr to avoid a dangling pointer
```

In modern C++, it's often recommended to use smart pointers such as `std::unique_ptr` or `std::shared_ptr` instead of raw pointers. Smart pointers automatically manage the memory for you, so you don't have to remember to release it with `delete`. Here's an example using `std::unique_ptr`:

```cpp
#include <memory>

std::unique_ptr<int> p = std::make_unique<int>(42);

// No need to delete p; it will be released automatically when it goes out of scope
```

Using smart pointers helps you write safer and more maintainable code, as they reduce the risk of memory leaks and other common mistakes associated with manual memory management.
</ul>
</details>
</ul>


</details>



</ul>






[//]: # (This may be the most platform independent comment ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////)

# Algorithms

<ul>

<details>
<summary>Search</summary>
<ul>

<details>
<summary>Binary Search</summary>

</details>

</details>



</ul>

# Time Complexities

<ul>


<details>
<summary>std::vector</summary>

- `push_back()`: O(1) on average, O(n) worst-case (reallocation).
- `pop_back()`: O(1)
- `insert()`: O(n) worst-case.
- `erase()`: O(n) worst-case.
- `operator[]`, `at()`, `front()`, `back()`: O(1)
- `size()`, `empty()`, `capacity()`: O(1)

</details>

<details>
<summary>std::list (and other linked-list based containers)</summary>

- `push_back()`, `push_front()`: O(1)
- `pop_back()`, `pop_front()`: O(1)
- `insert()`, `erase()`: O(1) with iterator, O(n) without.

</details>

<details>
<summary>std::set, std::map, std::multiset, std::multimap (Red-Black Tree based)</summary>

- `insert()`, `erase()`, `find()`: O(log n)
- `begin()`, `end()`, `rbegin()`, `rend()`, `empty()`, `size()`: O(1)

</details>

<details>
<summary>std::unordered_set, std::unordered_map, std::unordered_multiset, std::unordered_multimap (Hash Table based)</summary>

- `insert()`, `erase()`, `find()`: O(1) average, O(n) worst-case (hash collisions).
- `empty()`, `size()`: O(1)

</details>

<details>
<summary>Algorithms</summary>

- `std::sort()`: O(n log n) average and worst-case.
- `std::nth_element()`: O(n) average.
- `std::binary_search()`: O(log n)
- `std::max_element()`, `std::min_element()`: O(n)
- `std::find()`: O(n) for most containers.
- `std::lower_bound()`, `std::upper_bound()`: O(log n) for sorted ranges.

</details>


</ul>



