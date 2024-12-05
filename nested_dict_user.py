stdata={}

n=int(input("enter number of student:"))

for i in range(n):
    st={}
    st=input("enter your child dict name=")
    stdata[st]={}

    id=input("enter id=")
    name=input("enter name:")
    stdata[st]['id']=id
    stdata[st]['name']=name

print(stdata)