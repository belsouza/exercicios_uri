function vesfera ( raio )
    return (4.0 / 3.0) * 3.14159 * raio * raio * raio 
end

raio = io.read("*n")
vol = vesfera(raio)
io.write("VOLUME = "..string.format("%.3f\n",vol))