#include <iostream>
int main() {

    /* 
    primer ejercicio: suma a través de punteros: 
    */

    /*
    int a, b, c;
    int *p1, *p2, *p3;

    std::cout << "ingresa el valor de a: \n";
    std::cin >> a;

    std::cout << "ingresa el valor de b: \n";
    std::cin >> b;

    c = a + b;
    std::cout << "resultado de c: " << c << "\n";

    p1 = &a;
    p2 = &b;
    p3 = &c;

    std::cout << "direccion de memoria de a: " << &a << "\n";
    std::cout << "direccion de memoria de b: " << &b << "\n";
    std::cout << "direccion de memoria de c: " << &c << "\n";

    std::cout << "p1 = " << p1 << "\n";
    std::cout << "p2 = " << p2 << "\n";
    std::cout << "p3 = " << p3 << "\n";

    std::cout << "*p1 + *p2 = " << *p1 + *p2 << "\n"; 
    std::cout << "*p3 = " << *p3 << "\n";

    si imprimo "p1" me imprime la direccion de memoria de a
    pero si imprimo "*p1" me imprime el valor de a 
    */
    
    // ---------------------------------------------------------------

    /* 
    segundo ejercicio: escribir un programa que obtenga
    la direccion de memoria de una variable, la almacene en una
    una variable tipo puntero y muestre su valor por pantalla. 
    */

    /*
    int s;
    int *k = NULL;

    std::cout << "ingresa el valor de s: ";
    std::cin >> s;

    k = &s;
    std::cout << "el valor de s es: " << *k << "\n";
    std::cout << "la direccion de memoria de s es: " << &s << "\n"; 
    */

// ---------------------------------------------------------------

    /* 
    third exercise: make an array with the number of jellyfish 
    in different areas of the ocean. use pointers to traverse it and 
    add up all the jellyfish values, and create a function that 
    receives an array and returns a pointer to the largest element.
    */

    /*
    int jellyfish[5] = {8, 3, 6, 9, 2};
    int sum = 0;
    int *biggestPtr = jellyfish; // apunta al primero por ahora

    int *ptr = NULL;
    ptr = jellyfish;

    for (int i = 0; i < 5; i++) {
        sum += *ptr; 
        if (*ptr > *biggestPtr) {
            biggestPtr = ptr; // actualiza el puntero al mayor
        }        

        ptr++;
    }

    std::cout << "there are " << sum << " jellyfish in the ocean.\n";
    std::cout << "the biggest jellyfish is: " << *biggestPtr << "\n";
    std::cout << "the address of the biggest jellyfish is: " << biggestPtr << "\n"; 
    */

// ---------------------------------------------------------------

    /* 
    fourth exercise: now, reverse the array! (using pointers) 
    */

    /*
    int jellyfish[5] = {8, 3, 6, 9, 2};

    int *start = NULL;
    int *end = NULL;
    int *temp = NULL;

    start = jellyfish;
    end = jellyfish + 4; // this points to the last element

    while (start < end) { // to swap the elements
        int temp = *start;
        *start = *end;
        *end = temp;

        // move the pointers to the next elements
        start++;
        end--;
    }

    // print the reversed array
    std::cout << "the reversed array is: ";
    for (int i = 0; i < 5; i++) {
        std::cout << jellyfish[i] << " ";
    }

    std::cout << "\n"; 
    */

// ---------------------------------------------------------------

    /*
    std::cout << u8"(｡•́︿•̀｡) we lost a jellyfish... but don't worry, more are coming!" << "\n";
    std::cout << u8"🪼  🪼  🪼  🪼  🪼 " << "\n";
    */
    

    /* i use "u8" to print the kaomojis because they are unicode characters
    and i need to use the "u8" prefix to print them correctly in the console
    if i don't use the "u8" prefix, the console will print a lot of weird characters
    and i won't be able to see the kaomojis correctly. */

// ---------------------------------------------------------------



    return 0;
}
