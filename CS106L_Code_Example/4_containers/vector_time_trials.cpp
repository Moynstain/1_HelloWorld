// system and timing
#include <iostream>
#include <chrono>

// data structure imports
#include <vector>
#include <deque>
#include <list>

int main() {
    int numElems = 2000;
    std::vector<std::string> vec(numElems);
    std::deque<std::string> deq(numElems);
    std::list<std::string> lst(numElems);

    /* 
     * Adding numElems elements to the end of our vector:
     */
    
    // start timer
    auto start = std::chrono::high_resolution_clock::now();

    // Adding numElems elements to the end of the vector
    for(int i = 0; i < numElems; i++){
        vec.emplace_back("i");
    }

    // stop timer and output results
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "push_back finished.\n";
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Adding " << numElems << " elements to back of vector! Time measured: " << duration << " microseconds" << std::endl;

    /* 
     * Adding numElems elements to the beginning of a vector:
     */
    
    // clear vector and start timer
    start = std::chrono::high_resolution_clock::now();

    // Adding numElems elements to beginning of vector

    // stop timer and output results
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Adding " << numElems << " elements to front of vector! Time measured: " << duration << " microseconds" << std::endl;

    /* 
     * Acessing all elements;
     */
    
    // clear vector and start timer
    start = std::chrono::high_resolution_clock::now();

    // accessing all of the elements

    for (std::size_t i = 0; i < vec.size(); i++) {
        (void)vec[i];
    }

    // stop timer and output results
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Iterating through " << numElems << " elements in the vector! Time measured: " << duration << " microseconds" << std::endl;

    return 0;
}

