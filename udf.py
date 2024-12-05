def ud(id,name,city):
    print("===========================")
    print("id=",id)
    print("name=",name)
    print("city=",city)

n=int(input("enter number of student  ="))

for i in range(n):
    d=int(input("enter id="))
    na=input("enter name=")
    ci=input("enter city=")
    ud(d,na,ci)
    print("--------------------")
print("=============end===============")