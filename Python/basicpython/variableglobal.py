#global varibale is created out side a function

q=55
m=69
def add():
    #global variable can be access inside function
    print("sum=",q+m)
add()
#accessing global varibale outside the function
print("Add=",m+q)

    