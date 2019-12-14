class Count:
    count = 0

    def __init__(self,num):
        self.num = num

    def count_digit(self):
        while self.num > 0:
            Count.count = Count.count +1
            self.num = self.num // 10
        return Count.count

c1 = Count(2323)
total = c1.count_digit()
print("The Number of Digits : ",total)