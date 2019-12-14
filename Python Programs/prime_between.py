def prime(n1,n2):
    for a in range(n1,n2+1):
       k = 0
       for i in range(2,a//2+1):
           if(a%i==0):
               k = k + 1
       if(k<=0):
            print(a)


prime(22,224)
