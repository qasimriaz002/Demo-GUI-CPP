# DEMO GUI CPP
### The code contains following:

1. Creation of CPP CLR windows Forms in Microsoft Visual C++
2. Creation of classes in Microsoft Visual C++
3. Integration of old Dev C++ / VS Code classes and objects with windows Forms
4. Taking input from windows Forms and storing in class objects
5. Conversion of one data-type to other
6. Use of getter setter methods for input/output
7. Showing output from class objects at windows Forms
8. Specifically function named as "MarshalString()" to convert of String (capital S String) to string (small s string) this function can be found in code of Form1.h file.

### Important data type coversions
Here I have put some sample code including some user-defined and built-in functions to convert one data-type into other.
#### 1. Code of Built-in Functions to convert basic data types:
  Converstion from <b>int</b> to <b>string</b> (small s string of standard C++)

  ```sh
  // Remember for string (small s string) we must add #include <string> at top of our file
  int num = 5;
  string s = to_string(num); // Here int is converted into string
  ```
  Converstion from <b>float</b> to <b>string</b> (small s string of standard C++)
 
    ```sh
  // Remember for string (small s string) we must add #include <string> at top of our file
  float num = 5;
  string s = to_string(num); // Here float is converted into string
  ```
  Converstion from <b>string</b> (small s string of standard C++) to <b>String</b> (capital S String of Dot-Net Framework Visual C++)
 
  ```sh
  // Remember for string (small s string) we must add #include <string> at top of our file
  string small_s = "Any Text or string";
  String^ capital_S = gcnew String(small_s.c_str());
  //gcnew is almost equvelant to new keyword in c++, c_str() means character string
  ```
  Converstion from <b>int</b> to <b>String</b> (capital S String of Dot-Net Framework Visual C++)

 ```sh
  // Remember for string (small s string) we must add #include <string> at top of our file
  int num = 5;
  string small_string = to_string(num); // Here int is converted into small s string
  String^ capital_String = gcnew String(small_string.c_str());  // converted to capital S string
  // gcnew is almost equvelant to new keyword in c++, c_str() means character string
  // We can also do it in single line direct conversion from int to String (captial S String) as following
  String^ mystring = gcnew String(to_string(num).c_str());
  ```

#### 2. Code of User Define Function to convert String (captial S String of .Net Framwork) into string (small s string of standard cpp)

  ```sh
  // Function to convert the String (captial S String) into string (small s string)
  string MarshalString(String^ s) {
	   using namespace Runtime::InteropServices;
	   string os;
	   const char* chars =
		   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	   os = chars;
	   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   return os;
  }
  // Function call will be as following:
  String^ capital_String = "Any Text or String";
  string small_string = MarshalString(capital_String);
  ```
