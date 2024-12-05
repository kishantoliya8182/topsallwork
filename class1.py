class student:
    stid=input("Enter your ID:")
    stname=input("Enter your name:")

    def printdetails(self):
        print("Name is ",self.stname)
        print("ID is :",self.stid)

st=student()
st.printdetails()