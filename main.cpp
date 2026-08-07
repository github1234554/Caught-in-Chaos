#include <iostream> // A header file. This line is a prepocessor directive that tells the code to compile its content as well

int main(){
    // std - Standard (represents standard namespace)   :: - scope resolution operator (like a pointer)    cout - Character output   endl - End line
    std::cout << "I am bip" << std::endl;
    std::cout << "I like sticks" << '\n'; // \n is better performance wise because it does not flush the output buffer
    /*However here line buffering occurs when we write to terminal, meaning it auto flushes every time it encounters \n
    When writing to files \n does not flush
    Also this comment is a multi-line comment, which is used to write comments that span multiple lines. It starts with /* and ends with
    */

    int x; // decleration of variable x of type int (integer)
    x = 5; // assignment of value 5 to variable x

    return 0;
}