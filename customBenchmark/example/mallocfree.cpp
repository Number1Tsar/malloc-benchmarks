#include <iostream>

using namespace std;

void* allocate(int size)
{
    void* memory = (void*) malloc(size);
    return memory;
}

void free(void** memory)
{
    delete memory;
}


int main()
{
    cout<<"Starting\n";
    free(allocate(8));
    cout<<"End\n";
}