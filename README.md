# push_swap
42 Project about sorting algorithms. 

## Table of Contents

* [Project Overview](#project-overview)
* [Divide and Conquer](#divide-and-conquer)
* [Result](#result)
* [Tips for 42 students](#tips-for-42-students)
* [What I learned](#what-i-learned)


## Project Overview
The program, called push_swap, takes a list of integers and sorts it using a set of predefined operations on two stacks. Another program, called checker, verifies the correctness of the sorting by executing the instructions generated by push_swap on the stack A.

The predefines operations are the following: 

| Operation     | Description                                          |
|     :---:     | :---         |   
|      sa       | swaps first two elements of stack A                  |
|      sb       | swaps first two elements of stack B                  |
|      ss       | sa and sb at the same time                           |
|      pa       | pops the first elememt on B and puts it on top of A  |
|      pb       | pops the first elememt on A and puts it on top of B  |
|      ra       | rotates stuck A up by one                            |
|      rb       | rotates stuck B up by one                            |
|      rr       | rotates both A and B up by one                       |
|      rra      | rotates stuck A down by one                          |
|      rrb      | rotates stuck B down by one                          |
|      rrr      | rotates both A and B down by one                     |

## Divide and Conquer 

<ins>1. Research</ins>
*   concept of sorting algorithms

<ins>2. Code Structure</ins>
*   creating a Makefile that doesn't relink
*   creating a header file 

<ins>3. Parsing</ins>
*   receive the arguments via ``ft_atoi`` and 
*   error management
     *  doubles
*   handels "1 2 3" as well as 1 2 3 


<ins>4. Implementation</ins>
*   creation of the linked list


## Result 

Examples with [push swap visualizer](https://github.com/o-reo/push_swap_visualizer) 
50 

100

500 


## Tips for 42 students 
*   this project is perfect if you want to deepen your understanding about linked lists, if you want to refresh your knowledge about linked lists, I recommand this [video from the CS50 cours](https://www.youtube.com/watch?v=2T-A_GFuoTo)
*   


## What I learned 

