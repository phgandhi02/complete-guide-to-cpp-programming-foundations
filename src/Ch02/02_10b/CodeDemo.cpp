// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45;
    sprite_x = target_x; // should be -123
    player_x = sprite_x; // should 

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32): " << sprite_x << std::endl;
    std::cout << "Player X (unsigned int32): " << player_x << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
