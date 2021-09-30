num = int(input("Enter a number "))
score= 0
bits = 1 << 7
while(bits > 0):
  if((num & bits)!=0):
    score= (score*10) + 1
  else:
      score= (score*10) + 0
  bits=bits//2
sum = 0
while(score>0):
    d = score% 10
    score= score// 10
    sum = sum + d
if(sum >= 5):
      print('College won the Champion of the Champions trophy')
else:
        print('College lost the Champion of the Champions trophy')
