def ud(id,name,city):
    print("===========================")
    print("id=",id)
    print("name=",name)
    print("city=",city)
dict1={}
n=int(input("enter number of student  ="))


for i in range(n):
    d=int(input("enter id="))
    na=input("enter name=")
    ci=input("enter city=")
    dict1['id']=d
    dict1['name']=na
    dict1['city']=ci

print(dict1)


    