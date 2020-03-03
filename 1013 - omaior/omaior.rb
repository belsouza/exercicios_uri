def maiordedois (a, b)
    return ((a + b + (a - b).abs) / 2 )
end

def maiordetres (a, b, c)
    p1 = maiordedois(a, b)
    p2 = maiordedois(p1, c)
    return p2
end

line = gets.chomp
vararray = line.split(" ")
a = (vararray[0]).to_i
b = (vararray[1]).to_i
c = (vararray[2]).to_i
maior = maiordetres(a, b, c)
puts "%d eh o maior" % [maior]