""" python 2 """

def consumo(x, y):
    return(x / y)

x = int(input())
y = float(input())
print '{:.3f} km/l'.format( consumo(x , y) )

""" python 3 """


def consumo(x, y):
    return(x / y)

x = int(input())
y = float(input())
print ('{:.3f} km/l'.format( consumo(x , y) ))