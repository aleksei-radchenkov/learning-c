# Learning C - My Journey into C Programming
Welcome to my Learning C repository. This is where I will document my journey into C programming throughout the years, from the basics to more advanced concepts. Here, you'll find resources I'm using, books I read, projects I'm building, problems I'm solving, challenges I face, and my progress notes.

---

## Contents
- [Personal Rules & Guidelines](#personal-rules--guidelines)
  + [Tools](#tools)
  + [AI Usage](#ai-usage)
  + [Learning Approach](#learning-approach)
  + [Projects](#projects)
- [Roadmap](#roadmap)
  + [Formal Education](#formal-education)
  + [Interfaces](#interfaces)
  + [Algorithms](#algorithms)
  + [Compilers](#compilers)
  + [Linux System Programming](#linux-system-programming)
  + [TCP/IP Sockets](#tcpip-sockets)
  + [Cryptography & Protocols](#cryptography--protocols)
  + [Image Processing](#image-processing)
  + [Computational Geometry](#computational-geometry)
  + [Digital Filters](#digital-filters)
  + [Embedded Systems](#embedded-systems)
  + [Parallel Computing](#parallel-computing)
- [Repository Structure](#repository-structure)
- [Progress Log](#progress-log)
- [Resources](#resources)
  + [Books](#books)
  + [Online Courses and Tutorials](#online-courses-and-tutorials)
  + [Docs & References](#docs--references)
- [Coding Problems](#coding-problems)
- [Projects](#projects-showcase)

---

##  Personal Rules & Guidelines
To stay focused, build deeper understanding, and avoid shortcuts that hurt my long-term improvement, I’m following the following rules:

### Tools
- Follow the [OpenBSD style](https://man.openbsd.org/style).
- Each project must include a Makefile with, at minimum, a compilation command for the project and the used libraries.
- Third-party libraries should only be used if implementing the same functionality from scratch would significantly exceed the scope of the project.
- All commit messages for git must be meaningful and descriptive.
- When actively working on any code, commit daily or after finishing a logically complete task.

### AI Usage
- AI should not be used to generate any code, tests, or solutions.
- What AI is allowed for:
    * Helping write documentation and comments when necessary.
    * Helping design graphical aspects of applications, if applicable (e.g., styles), since design is not the focus of this repo.
    * Debugging help, to pinpoint an issue in larger code.
    * Scanning code for vulnerabilities and bugs for larger projects.
- If I use AI, I’ll document when, why, and what I learned from it.

### Learning Approach
- For coding problems, always try to solve the problem until it is successful. Never search for hints or solutions until the problem has been solved.
- Once a problem or a project has been solved/completed, search for other people's approaches online and see if there is a better way to do it.
- All problems must be documented, not only the final solution, but the thoughts behind it and how I come to that solution.
- If a concept or code doesn't make sense, always research it until fully understood.
- Never accept unexpected behaviour; try to understand the reasoning behind how and why it works.

### Projects
- Any code marked as a project must be appropriately linted, commented, and documented.
- All project code must have some error handling and testing.
- Any commits associated with projects must have appropriate commit messages, describing exactly what was changed and learned.

---

## Roadmap
Each topic on the roadmap is independent and does not act as a prerequisite for any other topic. So I will often swap between different sections of this roadmap on my journey.

### Formal Education
This section includes all courses in UNSW that I am taking that are taught in the C language. Course repos are currently private, since publishing solutions to assignments on GitHub is against UNSW plagiarism policies.

- [COMP1511](https://cgi.cse.unsw.edu.au/~cs1511/current/) - Programming Fundamentals - [repo](https://github.com/alekseiradchenkov/1511)
	* [X] Intro to UNIX
	* [X] Variables/Constant
	* [X] Control Flow
	* [X] Custom Data Types
	* [X] Static Arrays
	* [X] 2D Arrays
	* [X] Strings
	* [X] Pointers
	* [X] Dynamic arrays Memory
	* [X] Memory (heap vs stack)
	* [X] Linked Lists
    * [X] Project 1 - Sokoban
    * [X] Project 2 - Pet Salon

- [X] [COMP1521](https://cgi.cse.unsw.edu.au/~cs1521/current/) - Computer Systems Fundamentals - [repo](https://github.com/alekseiradchenkov/1521)
    * [X] Integers
    * [X] Bitwise Operations
    * [X] Floating Point
    * [X] Files
    * [X] Processes
    * [X] Unicode
    * [X] Threads
    * [X] Assignment 2 - a simple MIPS emulator

- [X] [COMP2521](https://webcms3.cse.unsw.edu.au/COMP2521/24T3/) - Data Structures and Algorithms - [repo](https://github.com/alekseiradchenkov/2521)
    * [X] Recursion
    * [X] Analysis of Algorithms
    * [X] Sorting Algorithms
    * [X] Abstract Data Types
    * [X] Binary Search Trees
    * [X] Balancing BSTs and AVL Trees
    * [X] Graphs
    * [X] Digraph Algorithms
    * [X] Dijkstra's Algorithm
    * [X] Minimum Spanning Trees
    * [X] Hash Tables
    * [X] Priority Queues and Heaps
    * [X] Tries
    * [X] Assignment 1 - Efficient Multiset ADT
    * [X] Assignment 2 - Detective Academy

### Interfaces
The roadmap for this topic is based on the book ["Interfaces and Implementations by David R. Hanson"](https://www.r-5.org/files/books/computers/languages/c/mod/David_R_Hanson-C_Interfaces_and_Implementations-EN.pdf).

- [ ] Atoms
- [ ] Exceptions and Assertions
- [ ] Memory Management
- [ ] Lists
- [ ] Tables
- [ ] Sets
- [ ] Dynamic Arrays
- [ ] Sequences
- [ ] Rings
- [ ] Bit Vectors
- [ ] Formatting
- [ ] Low-Level Strings
- [ ] High-Level Strings
- [ ] Extended-Precision Arithmetic
- [ ] Arbitary-Precision Arithmetic
- [ ] Multiple-Precision Arithmetic
- [ ] Threads
- [ ] Project - A reusable C library/toolkit for arbitrary and multiple-precision arithmetic

### Algorithms
The roadmap for this topic is based on the books ["Algorithms in C" by Robert Sedgewick](https://theswissbay.ch/pdf/Gentoomen%20Library/Algorithms/Algorithms%20in%20C.pdf) and ["Data Structures using C" by ISRD Group](https://dpvipracollege.ac.in/wp-content/uploads/2023/01/data-structures-using-c-by-isrd-group.pdf).

- [ ] Data Types and ADTs
- [ ] Polynomials and Sparse Matrix
- [ ] Recursion and Trees
- [ ] Sorting Methods
- [ ] Quicksort
- [ ] Merging and Mergesort
- [ ] Priority Queues and Heapsort
- [ ] Radix Sorting
- [ ] Special-Purpose Sorts
- [ ] Symbol Tables and BSTs
- [ ] Balanced Trees
- [ ] Multiway Trees
- [ ] Hashing
- [ ] String Processing
- [ ] Radix Search
- [ ] External Searching
- [ ] Storage Management
- [ ] Project 1 - Modular Data Structures & Sorting Library - Build a reusable C library, implementing core data structures and sorting algorithms from scratch.
- [ ] Project 2 - Symbol Table & Search Engine - Build a tool that traverses a directory/files and lets you quickly search for words using trees, hash tables, etc (ag/grep mini-clone).
- [ ] Project 3 - External Sorting & Merging Engine - Create a program that can sort huge text files that don’t fit in memory by reading and sorting small parts, then merging them.

### Compilers
The roadmap for this topic is based on the book ["Compilers Design in C" by Allen I. Holub](https://holub.com/goodies/compiler/compilerDesignInC.pdf).

- [ ] Basic Concepts
- [ ] Input and Lexical Analysis
- [ ] Context-Free Grammars
- [ ] Top-Down Parsing
- [ ] Bottom-Up Parsing
- [ ] Code Generation
- [ ] Project - A Simple Compiler for a Tiny Language in C.

### Linux System Programming
The roadmap for this topic is based on the book ["Linux System Programming" by Robert Love](https://igm.univ-mlv.fr/~yahya/progsys/linux.pdf).

- [ ] Essentials of Systems Programming
- [ ] File I/O
- [ ] Buffered I/O
- [ ] Process Management
- [ ] Advanced Process Management
- [ ] Threading
- [ ] File and Directory Management
- [ ] Memory Management
- [ ] Signals
- [ ] Time
- [ ] Project 1 - Real-time File System Monitor with Alerts
- [ ] Project 2 - Custom Shell with Job Control and Resource Monitoring

### TCP/IP Sockets
The roadmap for this topic is based on the book ["TCP/IP Sockets in C" by Michael J. Donahoo and Kenneth L. Calvert](https://booksite.elsevier.com/samplechapters/9780123745408/01~Front_Matter.pdf).

- [ ] Basic Sockets
- [ ] Constructing Messages
- [ ] Using UDP Sockets
- [ ] Socket Programming
- [ ] Under the Hood
- [ ] Domain Name Service
- [ ] TCP Multi-person Chat Room Server

### Cryptography & Protocols
The roadmap for this topic is based on the book ["Applied Cryptography" by Bruce Schneier](https://mrajacse.wordpress.com/wp-content/uploads/2012/01/applied-cryptography-2nd-ed-b-schneier.pdf).

- [ ] Cryptography Foundations
- [ ] Cryptographic Protocols
- [ ] Cryptographic Techniques
- [ ] Cryptographic Algorithms
- [ ] Project 1: Terminal-Based Secure Chat Application
- [ ] Project 2: File Encryption & Signing Tool

### Image Processing
The roadmap for this topic is based on the book ["Image Processing in C" by Dwayne Phillips](https://homepages.inf.ed.ac.uk/rbf/BOOKS/PHILLIPS/cips2ed.pdf).

- [ ] Intro to CIPS
- [ ] Image File management
- [ ] Viewing and Printing Image Numbers
- [ ] Halftoning
- [ ] Histograms and Equalization
- [ ] Basic Edge Detection
- [ ] Advanced Edge Detection
- [ ] Spatial Frequency Filtering
- [ ] Image Operations
- [ ] Histogram-Based Segmentation
- [ ] Segmentation via Edges & Gray Shades
- [ ] Manipulating Shapes
- [ ] Boolean and Overlay Operations
- [ ] Geometric Operations
- [ ] Wrapping and Morphing
- [ ] Basic Textures Operations
- [ ] Random Dot Stereograms
- [ ] Hiding Information using Steganography
- [ ] Makefiles
- [ ] Project 1 - CLI-based Image Editor
- [ ] Project 2 - Steganography & Pattern Detection Tool

### Computational Geometry
The roadmap for this topic is based on the book ["Computational Geometry" by Joseph O'Rourke](https://api.pageplace.de/preview/DT0400.9781107266476_A23760366/preview-9781107266476_A23760366.pdf).

- [ ] Polygon Triangulation
- [ ] Polygon Partitioning
- [ ] Convex Hulls in Two Dimensions
- [ ] Convex Hulls in Three Dimensions
- [ ] Voronoi Diagrams
- [ ] Arrangements
- [ ] Search and Intersection
- [ ] Motion Planning
- [ ] Project - 2D Geometry Visualizer and Toolkit

### Digital Filters
The roadmap for this topic is based on the book ["Digital Filter Designer's Handbook" by C. Britton Rorabaugh](https://cdn.preterhuman.net/texts/engineering/Dsp/Digital%20Filter%20Designer%27S%20Handbook.pdf).

- [ ] Filter Fundamentals
- [ ] Butterworth Filters
- [ ] Chebyshev Filters
- [ ] Elliptical Filters
- [ ] Bessel Filters
- [ ] Fundamentals of Digital Signal Processing
- [ ] Discrete Fourier Transform
- [ ] The z Transform
- [ ] FIR Filter Fundamentals
- [ ] Fourier Series Method of FIR Filler Design
- [ ] Frequency Sampling Method of FIR Filler Design
- [ ] Remez Exchange Method of FIR Filler Design
- [ ] IIR Filters
- [ ] IIR Filters via Bilinear Transformation
- [ ] Project 1 - Audio Signal Filter Tool
- [ ] Project 2 - Audio Compression Tool

### Embedded Systems
The roadmap for this topic is based on the book ["Embedded C" by Michael J. Pont](http://www.ecpe.nu.ac.th/ponpisut/22323006-Embedded-c-Tutorial-8051.pdf).

- [ ] Reading Switches
- [ ] OOP and Structure
- [ ] Real-time Constraints
- [ ] Creating an embedded OS
- [ ] Multi-state systems and function sequences
- [ ] Serial Interface
- [ ] Project - Secure Digital Access Control System (Lock System)

### Parallel Computing
The roadmap for this topic is based on the book ["Introduction to Parallel Computing" by W. P. Peterson and P. Arbenz](http://103.203.175.90:81/fdScript/RootOfEBooks/E%20Book%20collection%20-%202020%20-%20B/MATHEMATICS/Introduction%20to%20Parallel%20Computing%20a%20Practical%20Guide%20with%20Examples%20in%20C%20by%20W.%20P.%20Petersen%20P.%20Arbenz.pdf).

- [ ] Parallelism Applications
- [ ] Single Instruction, Multiple Data
- [ ] Shared Memory Parallelism
- [ ] Multiple Instruction, Multiple Data
- [ ] Project - Parallel DNA Sequence Alignment Tool

---

## Repository Structure
- [`/resources/`](./resources) - Books, study notes, roadmaps and other learning resources.
- [`/projects/`](./projects/) - Mini-projects and real-world applications. (Bigger projects will be placed in their own repositories and linked here.)
- [`/practice/`](./practice/) - Coding problems and practice exercises.
- [`/notes/`](./notes/) - Personal study notes, summaries, and references.
- [`/diary/`](./diary/) - Personal progress updates, reflections and goals.

---

## Progress Log
A summary log of what I'm learning over time.

| Date | Topic/Task | Notes |
|------|------------|-------|
| 2025-07-30 | Started the repository | Initialised the repo |
| 2025-08-01 -> Current | Coding Problems - LeetCode | Solving bit manipulation problems on LeetCode |

---

## Resources
A list of learning resources I frequently use on my journey.

### Books

- [ ] ["C A Reference Manual" by Samuel P. Harbison III and Guy L. Steele Jr.](https://savedparadigms.wordpress.com/wp-content/uploads/2014/09/harbison-s-p-steele-g-l-c-a-reference-manual-5th-ed.pdf)
- [ ] ["C Programming, A Modern Apporach" by K. N. King](https://dn790000.ca.archive.org/0/items/c-programming-a-modern-approach-2nd-ed-c-89-c-99-king-by/C%20Programming%20-%20A%20Modern%20Approach%20-%202nd_Ed%28C89%2C%20c99%29%20-%20King%20by%20.pdf)
- [ ] ["Functional C" by Pieter Hartel and Henk Muller](https://ris.utwente.nl/ws/portalfiles/portal/5128727/book.pdf)
- [ ] ["Problem Solving and Program Design in C" by Jeri R. Hanly and Elliot B. Koffman](https://gooliusboozler.neocities.org/Problem%20Solving%20and%20Program%20Design%20in%20C%208th%20Edition%20-%20Jeri%20Hanly%20-%20Pearson.pdf)
- [ ] ["The C Programming Language" by Brian W. Kernighan and Denis M. Ritchie](https://colorcomputerarchive.com/repo/Documents/Books/The%20C%20Programming%20Language%20%28Kernighan%20Ritchie%29.pdf)
- [ ] ["The C Puzzle Book" by Alan R. Feuer](https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf)
- [ ] ["Interfaces and Implementations by David R. Hanson"](https://www.r-5.org/files/books/computers/languages/c/mod/David_R_Hanson-C_Interfaces_and_Implementations-EN.pdf)
- [ ] ["Algorithms in C" by Robert Sedgewick](https://theswissbay.ch/pdf/Gentoomen%20Library/Algorithms/Algorithms%20in%20C.pdf)
-  [ ] ["Data Structures using C" by ISRD Group](https://dpvipracollege.ac.in/wp-content/uploads/2023/01/data-structures-using-c-by-isrd-group.pdf)
- [ ] ["Compilers Design in C" by Allen I. Holub](https://holub.com/goodies/compiler/compilerDesignInC.pdf)
- [ ] ["Linux System Programming" by Robert Love](https://igm.univ-mlv.fr/~yahya/progsys/linux.pdf)
- [ ] ["TCP/IP Sockets in C" by Michael J. Donahoo and Kenneth L. Calvert](https://booksite.elsevier.com/samplechapters/9780123745408/01~Front_Matter.pdf)
- [ ] ["Applied Cryptography" by Bruce Schneier](https://mrajacse.wordpress.com/wp-content/uploads/2012/01/applied-cryptography-2nd-ed-b-schneier.pdf)
- [ ] ["Image Processing in C" by Dwayne Phillips](https://homepages.inf.ed.ac.uk/rbf/BOOKS/PHILLIPS/cips2ed.pdf)
- [ ] ["Computational Geometry" by Joseph O'Rourke](https://api.pageplace.de/preview/DT0400.9781107266476_A23760366/preview-9781107266476_A23760366.pdf)
- [ ] ["Digital Filter Designer's Handbook" by C. Britton Rorabaugh](https://cdn.preterhuman.net/texts/engineering/Dsp/Digital%20Filter%20Designer%27S%20Handbook.pdf)
- [ ] ["Embedded C" by Michael J. Pont](http://www.ecpe.nu.ac.th/ponpisut/22323006-Embedded-c-Tutorial-8051.pdf)
- [ ] ["Introduction to Parallel Computing" by W. P. Peterson and P. Arbenz](http://103.203.175.90:81/fdScript/RootOfEBooks/E%20Book%20collection%20-%202020%20-%20B/MATHEMATICS/Introduction%20to%20Parallel%20Computing%20a%20Practical%20Guide%20with%20Examples%20in%20C%20by%20W.%20P.%20Petersen%20P.%20Arbenz.pdf)

### Online Courses and Tutorials

- [X] [COMP1511 at UNSW](https://cgi.cse.unsw.edu.au/~cs1511/current/) - Programming Fundamentals
- [X] [COMP1521 at UNSW](https://cgi.cse.unsw.edu.au/~cs1521/current/) - Computer Systems Fundamentals
- [X] [COMP2521 at UNSW](https://webcms3.cse.unsw.edu.au/COMP2521/24T3/) - Data Structures and Algorithms
- [X] [Sololearn's C Introduction](https://www.sololearn.com/en/learn/courses/c-introduction) - [Certificate](https://www.sololearn.com/certificates/CC-DRK7YROQ)
- [X] [Sololearn's C Intermediate](https://www.sololearn.com/en/learn/courses/c-intermediate) - [Certificate](https://www.sololearn.com/certificates/CC-ZQBFDA0D)

### Docs & References

- [C Reference](https://en.cppreference.com/w/c.html)
- [Raylib Reference](https://www.raylib.com/) (GUI Library)

---

## Coding Problems

### [LeetCode](./practice/leetcode/) - [Profile](https://leetcode.com/u/Aleksei_Radchenkov/)
![LeetCode Stats](https://leetcard.jacoblin.cool/Aleksei_Radchenkov?theme=chartreuse&font=Single%20Day&ext=heatmap)

#### [ ] [Bit Manipulation](./practice/leetcode/bit_manipulation/):
| Difficulty | Completed | Total | Progress |
| ---------- | --------- | ----- | -------- |
| [Easy](./practice/leetcode/bit_manipulation/easy/)       | 13        | 48    | ![13/48](https://progress-bar.xyz/13/?scale=48\&width=100\&color=green)  |
| [Medium](./practice/leetcode/bit_manipulation/medium/)     | 0         | 116   | ![0/116](https://progress-bar.xyz/0/?scale=116\&width=100\&color=yellow) |
| [Hard](./practice/leetcode/bit_manipulation/hard/)       | 0         | 83    | ![0/83](https://progress-bar.xyz/0/?scale=83\&width=100\&color=red)      |

- [X] [67. Add Binary](./practice/leetcode/bit_manipulation/easy/add_binary/) | EASY
- [X] [136. Single Number](./practice/leetcode/bit_manipulation/easy/single_number/) | EASY
- [X] [190. Reverse Bits](./practice/leetcode/bit_manipulation/easy/reverse_bits/) | EASY
- [X] [191. Number of 1 Bits](./practice/leetcode/bit_manipulation/easy/number_of_1_bits/) | EASY
- [ ] [222. Count Complete Tree Nodes](./practice/leetcode/bit_manipulation/easy/count_complete_tree_nodes/) | EASY
- [X] [231. Power of Two](./practice/leetcode/bit_manipulation/easy/power_of_two/) | EASY
- [ ] [268. Missing Number](./practice/leetcode/bit_manipulation/easy/missing_number) | EASY
- [X] [338. Counting Bits](./practice/leetcode/bit_manipulation/easy/counting_bits) | EASY
- [X] [342. Power of Four](./practice/leetcode/bit_manipulation/easy/power_of_four) | EASY
- [X] [389. Find the Difference](./practice/leetcode/bit_manipulation/easy/find_the_difference) | EASY
- [ ] [401. Binary Watch](./practice/leetcode/bit_manipulation/easy/binary_watch) | EASY
- [ ] [405. Convert a Number to Hexadecimal](./practice/leetcode/bit_manipulation/easy/convert_a_number_to_hexadecimal) | EASY
- [X] [461/2220. Hamming Distance](./practice/leetcode/bit_manipulation/easy/hamming_distance) | EASY
- [X] [476/1009. Number Complement](./practice/leetcode/bit_manipulation/easy/number_complement) | EASY
- [ ] [645. Set Mismatch](./practice/leetcode/bit_manipulation/easy/set_mismatch) | EASY
- [X] [693. Binary Number with Alternating Bits](./practice/leetcode/bit_manipulation/easy/binary_number_with_alternating_bits) | EASY

---

## Projects Showcase

| Project | Description | Status |
|---------|-------------|--------|
| TODO | TODO | TODO |
