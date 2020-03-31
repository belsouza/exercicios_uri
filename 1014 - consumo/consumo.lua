function consumo( a , b )
    return a / b
end

x = io.read("*n")
y = io.read("*n")
io.write(string.format('%.3f', consumo(x,y)), ' km/l\n')