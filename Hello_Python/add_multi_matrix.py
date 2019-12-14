from numpy import *

m1 = matrix('1 2 3; 4 5 6 ; 7 8 9')
m2 = matrix('1 2 3; 4 5 6 ; 7 8 9')
multi = matrix('0 0 0; 0 0 0; 0 0 0')
sum = 0
for i in range(len(m1)):
    for j in range(len(m2[0])):
        for k in range(len(m2)):
            multi[i][j] +=  m1[i][k] * m2[k][j]

print(multi)
