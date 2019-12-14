
def dec1(func):     #chanaging who_is_san method using dec1
    def nowexec():
        print("Executing Now ")
        func()
        print("Executed")
    return nowexec

# @dec1
def who_is_san():  # this is existing function to change working this function we use decorator of dec1
    print("I am San")
who_is_san = dec1(who_is_san)
who_is_san()

'''
decorators are used for to change working of existing function
in this example who_is_san() is already defined function we have to change working of this function then we need use decorators

'''