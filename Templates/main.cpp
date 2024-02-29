#include <iostream>
#include "test.h"

using namespace std;


int main(){
    Test<string> test1("Hello");
    Test<int> test2(2);

    test1.print();
    test2.print();

    printNoTemplate(5);
    // printNoTemplate("string"); Cannot be called cause the sigh is int, no string

    printTemplate<int>(10);
    printTemplate<string>("Hello"); // Can be called cause your using the template function
    printTemplate("Hello");         // Compiler puts the typename implictly
    printTemplate(3);               // Compiler puts the typename implictly

    float a = 6.7;
    printTemplate(a);             // If argument typename does not match with template <Without these arror brackets> and you have defined an specific implementation
                                  // for that typename, it will be used, see line 31 in test.h
     printTemplate<>(a);          // but if you add those <> brackets, it will use the template version

    printTemplate<char>('s');      // Template specialization


    return 0;
}