class bank:
    acc:int
    aname:str
    balance:int

    def banker(self):
        self.acc=int(input("Enter Account Number:"))
        self.aname=input("Enter Customer Name:")
        self.balance=input("Enter Balance:")

    def customer(self):
        print("Account Number:",self.acc)
        print("Name :",self.aname)
        print("Balance :",self.balance)
    
b=bank()
print("--------------BANKER----------------")
b.banker()
print("--------------CUSTOMER--------------")
b.customer()
