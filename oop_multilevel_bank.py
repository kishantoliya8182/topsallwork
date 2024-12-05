import random 

class opening :
    n = random.randint(111111111,2222222222)
    acno=n
    anm:str
    atype:str
    def getinfo(self):
        self.anm=input("Enter A/C Holder Name:")
        self.atype=input("Enter A/C Type:")

class deposite(opening):
    bal:int
    def depo(self):
        while True:
            self.bal=int(input("Enter Deposite Value:"))
            if self.bal >= 2000 :
                break
            else :
                print("2000 Minimum balance required ")

class withdraw(deposite):
    withd:int
    mbal:int
    def withdraw(self):
        while True:
            self.withd=int(input("Enter Ammount you want to withdraw:"))
            if self.bal >= self.withd:
                print("withdraw successfuly")
                self.mbal=self.bal-self.withd

                break
            else:
                print("please check your balance")

class statement(withdraw):
    def state(self):
        print("Account Number:",self.acno)
        print("Account Holder Name:",self.anm)
        print("Account Type:",self.atype)
        print("Total Balance",self.mbal)

s=statement()
s.getinfo()
s.depo()
s.withdraw()
s.state()

