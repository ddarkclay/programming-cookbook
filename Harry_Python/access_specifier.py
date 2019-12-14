class Demo:
    n = 10
    _num = 8
    __number = 12

    def function(self):
        pass


class Test(Demo):
    pass


d = Demo()
t = Test
t.n = 60
d._num = 40
d.__number = 50
# print(d.n)
# print(d._num)
# print(d.__number)
print(t.n)
print(t._num)
print(t.__number_)