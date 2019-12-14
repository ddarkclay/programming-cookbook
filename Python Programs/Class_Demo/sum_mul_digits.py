class Count:
    mul = 1
    sum = 0
    rem = 0
    def __init__(self,num):
        self.n = num
        self.num = num

    def count_digit(self):

        while self.num > 0:
            rem = self.num % 10
            Count.sum = Count.sum + rem
            Count.mul = Count.mul * rem
            self.num = self.num // 10
        return Count.sum,Count.mul

    def show(self):
        print("\nThe Addition of Digits of {} is {} ".format(self.n, Count.sum))
        print("The Multiplication of Digits of {} is {} ".format(self.n, Count.mul))
        Count.sum = 0
        Count.mul = 1


num1 = int(input("Enter First Number : "))
num2 = int(input("Enter Second Number : "))
c1 = Count(num1)
c2 = Count(num2)
c1.count_digit()
c1.show()

c2.count_digit()
c2.show()
