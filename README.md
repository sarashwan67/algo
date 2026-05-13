Triangle Triplet Problem
Data Structures & Algorithms Project — C++

Given an array of integers, find if any 3 elements can form a valid triangle.


Files
FileDescriptionMaim.cppRecursive solution (Merge Sort + recursive search)main.cppNon-recursive solution (Insertion Sort + loop)Pseudo_Code.docxPseudocode for both algorithmsComplexity_Analysis_Both.docxLine-by-line complexity analysis

How it works
After sorting the array, only one check is needed per consecutive triplet:
A[i] + A[i+1] > A[i+2]
     RecursiveNon    -Recursive
Sort  Merge Sort    Insertion Sort
Time  O(n log n)       O(n²)
Space O(n)              O(1)

Run
bashg++ Maim.cpp -o recursive && ./recursive
g++ main.cpp -o nonrecursive && ./nonrecursive

## 👥 Team Members

- Sara Mohamed Rashwan Mohamed  
- Sondos Hassan Ghalshani  
- Mariam Hany Fathy  
- Sara Mostafa Nagy  
- Hagar Ezzat Ismail  
- Amira Ali Abdelhafeez  
