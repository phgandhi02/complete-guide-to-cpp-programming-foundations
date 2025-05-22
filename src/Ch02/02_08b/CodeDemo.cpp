// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// C-style enumeration of asset_type
/*
Each variable has an assigned value based on it's index.
*/
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    asset_type asset_value;

    // int sound = 8; // If this line is active then:
    /*
    The sound variable will override the sound enum variable which is not the expected behavior. If the line is removed then the asset_value will be 1.
    */

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
