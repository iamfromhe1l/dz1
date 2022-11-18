def f(S, N):
  res = ''
  stackToIn = [i for i in range(1, N+1)]
  stackToOut = []
  for e in S:
    if len(stackToIn) != 0 and stackToIn[0] == int(e):
      stackToIn.pop(0)
      res += "SX"
    elif len(stackToOut) != 0 and stackToOut[-1] == int(e):
      stackToOut.pop(-1)
      res += "X"
    else:
      q = len(stackToIn)
      stackToOut.append(stackToIn[0])
      stackToIn.pop(0)
      while stackToOut[-1] != int(e):
        if q == 0:
          print('Error')
          return ""
        q -= 1
        stackToOut.append(stackToIn[0])
        stackToIn.pop(0)
        res += 'S'
      stackToOut.pop(-1)
      res += 'SX'
  return res

print(f('235678941', 9))
