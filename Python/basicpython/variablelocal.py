#local variable is declare inside the body of the function

#function definition
def add():
    e=34
    f=34
    m=e+f
    print("SUM=",m)
add()
#value of m canot be access outside of varibale
#so we put a new value for m
m=20
print(m)