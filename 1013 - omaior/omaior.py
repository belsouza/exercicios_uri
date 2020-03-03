"""
def maiordedois (a, b):
    return ((a + b + abs(a - b)) / 2 )

def maiordetres (a, b, c):
    p1 = maiordedois(a, b)
    return maiordedois (p1, c)

a, b, c = raw_input().split()
maior = maiordetres(int(a), int(b), int(c))
print maior,"eh o maior"
"""

def maiordedois (a, b):
    return ((a + b + abs(a - b)) / 2 )

def maiordetres (a, b, c):
    p1 = maiordedois(a, b)
    return maiordedois (p1, c)

a, b, c = input().split()
maior = maiordetres(int(a), int(b), int(c))
print ("{0:d} eh o maior". format(int(maior)))