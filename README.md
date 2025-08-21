AIM:- To perform matrix operations in cpp
THEORY:-
1.Matrix addition is a basic operation where two matrices of the same order (same number of rows and columns) are added by adding their corresponding elements.
2.Compare each element of the first row with the corresponding element in the second row
3.Diagonal elements in a square matrix are those where row index = column index (𝑖=𝑗). The sum is the sum of these elements.
4.Multiplication of Two Matrices Matrix multiplication involves multiplying rows of the first matrix with columns of the second matrix. The number of columns in the first matrix must equal the number of rows in the second matrix.
5.Transpose of a matrix 𝐴 is obtained by swapping rows with columns
ALGORITHMS:-
1. ADDITION OF TWO NUMBERS
Input: Read the elements of matrix A.
Input: Read the elements of matrix B.
Check: Verify if dimensions of both matrices are the same.
Process: Add corresponding elements of matrices A and B to create matrix C.
Output: Display the resultant matrix C.

2.COMPARISON BETWEEN 1ST AND SECOND ROW ELEMENTS:-
input matrix dimensions and elements.
For each element in the first two rows, compare and print the result.
Output the comparison for each column.

3.DIAGONAL ADDITION:-
Input size 𝑛 of square matrix.
Input matrix elements.
Initialize sum = 0.
Add elements where row == column.
Print the sum.

4.MULTIPLICATION
nput dimensions 𝑚,𝑛 for 𝐴 and 𝑛,𝑝 for 𝐵
Input matrices 𝐴 and 𝐵
Initialize matrix 𝐶 with zero.
Use triple nested loop to calculate each element of 𝐶
Output 𝐶

5.TRANSPOSE OF A MATRIX
Input matrix dimensions and elements.
Create a new matrix 𝑇
Assign T[i][j]=A[j][i].
Display the transpose matrix.

CONCLUSION:- we learnt how to implement matrix operations is c++
