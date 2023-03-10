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

## Divide and Conquer 

<ins>1. Research</ins>
*   concept of sorting algorithms

<ins>2. Code Structure</ins>
*   creating a Makefile that doesn't relink
*   creating a header file 

<ins>3. Parsing</ins>
*   receive the arguments via ``ft_atoi`` and 
*   error management
*     doubles
*      
*   creation of the linked list


<ins>4. Implementation</ins>
*   creation of the pipe, two file descriptors are created, the first one ``fd[0]`` being the read end and the second one ``fd[1]`` the write end     of the pipe
