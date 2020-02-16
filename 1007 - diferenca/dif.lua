function diferenca( a, b, c, d)
    return ((a*b)-(c*d))
end

local a, b, c, d, diff
a = io.read("*n")
b = io.read("*n")
c = io.read("*n")
d = io.read("*n")

diff = diferenca(a, b, c, d)
print ("DIFERENCA = "..diff)