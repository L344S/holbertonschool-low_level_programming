# ☘ Search Algorithms

## Table of Contents
- [Description](#description)
- [Files and Functions](#files-and-functions)
- [How it works](#how-it-works)
- [Author](#author)

## Description

This project focuses on implementing various search algorithms and analyzing their time complexity using Big O notation. Search algorithms are fundamental in computer science and are used to find specific elements or patterns within a given data structure. The efficiency of these algorithms is measured by their time complexity, which describes how the algorithm's execution time is measured.

## Files and Functions

| File Name | Function | Description |
| --- | --- | --- |
| search_algos.h | --- | Header file that contains function prototypes for the search algorithms implemented in the project. |
| 0-linear.c | linear_search | Implements a linear search algorithm. |
| 1-binary.c | binary_search | Implements a binary search algorithm. |
| 2-O | --- | Contains time complexity (worst case) of a linear search in an array of size n. |
| 3-O | --- | Contains the space complexity (worst case) of an iterative linear search algorithm in an array of size n. |
| 4-O | --- | Contains  the time complexity (worst case) of a binary search in an array of size n. |
| 5-O | --- | Contains the space complexity (worst case) of a binary search in an array of size n. |
| 6-O | --- | Contains the space complexity of the given function/algorithm |



## How it works

#### Linear Search

Linear search is the simplest search algorithm. It traverses through each element in the array one by one until it finds a match with the searched element. If the element is found, it returns the index of that element in the array. Otherwise, it returns -1.

#### Binary Search

Binary search is a more efficient search algorithm that works on sorted arrays. It divides the array into two halves, compares the middle element with the searched element, and discards the half of the array in which the searched element cannot be. It continues to divide and conquer until it finds the element or the array is empty.

#### Big O Notation

Big O notation is used in computer science to describe the performance or complexity of an algorithm. It describes the worst-case scenario, the longest possible running time or the maximum space an algorithm could require.

| Big O Notation | Description |
| --- | --- |
| O(1) | The algorithm runs in constant time. The running time does not change with the size of the input. |
| O(n) | The running time of the algorithm is directly proportional to the size of the input. |
| O(n!) | The running time increases factorially with the size of the input. This is seen in very complex problems like the traveling salesman problem. |
| O(nm) | The running time is proportional to the product of two input sizes. This is common in algorithms dealing with two-dimensional data structures. |
| O(n^2) | The running time is proportional to the square of the input size. This is common in inefficient sorting algorithms like bubble sort. |
| O(sqrt(n)) | The running time is proportional to the square root of the input size. This is less common but found in some number factorization algorithms. |
| O(log(n)) | The running time increases logarithmically with the input size. This is the case with binary search. |
| O(nlog(n)) | The running time is proportional to the input size multiplied by the logarithm of the input size. This is the case with efficient sorting algorithms like merge sort and quick sort. |

## Author
- [@L344S](https://www.github.com/L344S)