# week11-1.py Hash Map , Hash Set
table = {} #用大括號但代表字典 ，也就是 Hash Table (Hash Map , Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341]) #會印出9
print(table[4433997]) #會印出4
#print(table[0]) #沒有這個key 會爆炸
if 0 not in table:
  print('table[0]不存在')