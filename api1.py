import requests

url='https://data.covid19india.org/data.json'

req=requests.get(url) 

data=req.json()

#print(data)
for i in data:
    for j in range(len(i)):
        print(f"{data['statewise'][j]['active']}")
        print(f"{data['statewise'][j]['deaths']}")
        print(f"{data['statewise'][j]['state']}")


