import json

data = '{"var1" : "san", "var2" : 32}'
print(data)

parsed = json.loads(data)
print(type(parsed))
print(parsed)

data2 = {
    "name" : "san",
    "programming" : ['C','C++','Python','Java'],
    "home" : ('Pune','Delhi','Hyderabad'),
    "played" : False
}

jscomp = json.dumps(data2)
print(jscomp)
