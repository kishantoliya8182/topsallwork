s1=int(input("enter subject 1 marks"))
s2=int(input("enter subject 2 marks"))
s3=int(input("enter subject 3 marks"))
s4=int(input("enter subject 4 marks"))

total=s1+s2+s3+s4
print("total=",total)

pr=total/4
print("pr=",pr)

if pr>70:
    print("congratulation you passed with A+ grade")

elif pr>60:
    print("congratulation you passed with B grade")

elif pr>50:
    print("congratulation you passed with c grade")

elif pr>40:
    print("congratulation you passed with D grade")

else:
    print("you are fail")
