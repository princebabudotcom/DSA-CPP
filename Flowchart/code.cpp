#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world";

    return 0;
}

/*
 1. include <iostream> is a preprocessor directive that tells the compiler to include the standard input/output stream library, which allows us to use the cout object for outputting text to the console.

 2. using namespace std; is a directive that allows us to use all the names in the std namespace without having to prefix them with std::, making our code cleaner and easier to read.

 3. int main() is the main function where the execution of the program begins. It returns an integer value, which is a common convention in C++ to indicate the success or failure of the program.

 4. cout << "Hello world"; is a statement that uses the cout object to output the string "Hello world" to the console. The << operator is used to insert the string into the output stream.

 5. return 0; is a statement that indicates the program has ended successfully. Returning 0 from the main function is a common convention in C++ to indicate that the program executed without any errors.
 */