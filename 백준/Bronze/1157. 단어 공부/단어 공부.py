string = input()
result = {}
string = string.upper()
for k in string:
    if k not in result.keys():
        result[k]=1
    else :
        result[k]+=1

count = []
for k in result.keys():
    
    maxNum = max(result.values());
    if (result[k]==maxNum) :
        count.append(k)
    
if (len(count)==1) : print(count[0])
else : print("?")