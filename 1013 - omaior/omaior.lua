function maiordedois(a, b)
    return ((a + b + math.abs(a - b)) / 2 )
end

function maiordetres(a, b, c)
    p1 = maiordedois(a, b)
    return maiordedois(p1, c)
end

a, b, c = io.read("*n","*n","*n")
maior = maiordetres(a, b, c)
io.write(string.format("%d eh o maior\n", maior))