# Working of Bubble Sort

Bubble sort is a data sorting algorithm that works by randomly copying elements from the first array into a smaller second array, and then reversing the order of these arrays. After this process has been repeated multiple times, the sorted data will be located in the middle of the larger array. 

The basic idea behind the bubble sort is to compare the elements of an array one by one until they are sorted in ascending order, which is called bubble bursting. When an element needs to be moved, instead of moving the entire array, only the element affected by the change is moved. This technique conserves memory and keeps overall execution speed high because there are fewer updates than with other sorting algorithms.

## 1. First Iteration (Compare and Swap)

Bubble Sort is a sorting algorithm that works by first sorting the items into two piles, and then swapping the items in each pile until they are sorted in reverse order. This process is known as the First Iteration of Bubble Sort.

For example, we need to sort these elements -5, 72,0, 33, - 9, then the sequence will work in this way.

Starting with the first index, the first and second components should be juxtaposed.
The first and second elements are switched if the first one is bigger.
Compare the second and third items right now. If they are not in the proper sequence, swap them.
The method described above continues until the last component.
Bubble sort first iteration in C program 

```yaml

#include<stdio.h>

int main() {

double Array[5]; // array to be sorted

double temp; // temporary variable to hold the current element of the array

void bubbleSort(Array); // function that performs bubble sort on a given array

while (true) {

temp=Array[0]; /* swap two elements */

Arrays[1]=Arrays[2]; /* update second position */

Arrows ++; /* make next move */

}/*endwhile*/ // loop body }// end of Bubble Sort First Iteration in C programming language
```

## 2. Remaining Iteration

The Bubble Sort is an efficient sorting algorithm that works in O(n log n) time, where n is the number of items to be sorted. The first iteration of the Bubble Sort sorts the input item at index 0 into ascending order, and then repeats this process until all the inputs have been sorted. So, after performing one iteration of the bubble sort on an input dataset containing five items, there would be four remaining iterations left to perform.
