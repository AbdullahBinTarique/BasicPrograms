from numpy import *
# print("This is num py\n")
# arr=([1,2,3],[4,5,6],[7,8,9])
# arr=array(arr)
# matrix=matrix(arr)
# mtranspose=matrix.transpose()
# print(mtranspose)

# arr=([1,2,3],[4,5,6],[7,8,9])
# matrix=matrix(arr)
# print(matrix[0,:].max())
# print(matrix[1,:].max())
# print(matrix[2,:].max())

arr=([1,2,3],[4,5,6],[7,8,9])
matrix=matrix(arr)
if matrix.all()==matrix.transpose().all():
    print("Symmetric")
else :
    print("not Symmetric")