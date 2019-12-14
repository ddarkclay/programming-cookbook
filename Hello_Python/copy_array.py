from array import *
vals = array('i',[3,56,23,64])
newArr = array(vals.typecode, (a*a for a in vals))

for e in newArr:
    print(e)