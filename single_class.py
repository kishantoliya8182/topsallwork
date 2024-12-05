class banker():
    acc:int
    aname:str
    balance:int

    def banker(self):
        self.acc=int(input("Enter Account Number:"))
        self.aname=input("Enter Customer Name:")
        self.balance=input("Enter Balance:")

class customer(banker):
    def customer(self):
        print("Account Number:",self.acc)
        print("Name :",self.aname)
        print("Balance :",self.balance)
    
c=customer()
print("------------Banker----------")
c.banker()
print("-------------Customer-------")
c.customer()

    
               