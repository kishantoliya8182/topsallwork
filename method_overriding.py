
class master:
    def getdata(self,nm,rno):
        print("Name=",nm)
        print("Roll No=",rno)

class home(master):
    def getdata(self, nm, rno):
        return super().getdata(nm, rno)

class about(master):
    def getdata(self, nm, rno):
        return super().getdata(nm, rno)

class header(master):
    def getdata(self, nm, rno):
        return super().getdata(nm, rno)

hm=home()
ab=about()
hd=header()

hm.getdata("kishan",101)
ab.getdata("parth",102)
hd.getdata("zala",103)

