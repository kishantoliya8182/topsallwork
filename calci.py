a=int(input("enter number A="))
b=int(input("enter number B="))

print("---------------------------------------")
print("enter + for addition")
print("enter - for subtraction")
print("enter * for multiplication")
print("enter / for division")
print("---------------------------------------")

c=input("enter your choice=")

print("---------------------------------------")

if c=="+":
    print("Add=",a+b)
if c=="-":
    print("sub=",a-b)
if c=="*":
    print("mul=",a*b)
if c=="/":
    print("div=",a/b)
else :
    print("please enter valid number")