import json

data = '{"var1":"jay","var2":23}'

presnt = json.loads(data)
print(presnt['var1'])


data2 = {
    "name":"jay",
    "cars":["od","farary","bmw"],
     
    "houes":('  morbi',34),
    "jet":False
}

jscomp=json.dumps(data2)

print(jscomp)