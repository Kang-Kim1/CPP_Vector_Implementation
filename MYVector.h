/*
	Author : Kangmin Kim 
*/

#ifndef _MYVECTOR_H
#define _MYVECTOR_H
#include <string>

using namespace std;

class MYVector
{
    public:
        // constructor, destructor

        MYVector(const MYVector& another);
        explicit MYVector(size_t n, int val);
        MYVector (int* pBegin, int*  pEnd);
        ~MYVector();

        // = operator
        MYVector& operator=(const MYVector& x);

        // modifier
        size_t size() const;
        size_t capacity() const;
        bool empty();

        // accessor
        int *begin();
        int *end();

        // modifier
        int* insert(int* pPosition, const int val);
        int* erase(int* pPosition);
        void push_back(const int& val);
        void pop_back();
        void swap(MYVector& another);
        void reserve(size_t n);

        int& at(size_t n);
        int& operator[](size_t n);

        int& front();
        int& back();

        void print_vector();


        typedef int* iterator;


    private:
        size_t num_items;
        size_t current_capacity;
        static const size_t INITIAL_CAPACITY;
        int* item_ptr;
};

#endif // MYVECTOR_H
