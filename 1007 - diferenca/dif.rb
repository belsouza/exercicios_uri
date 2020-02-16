def diferenca( a, b, c, d)
    return ( (a * b) - (c * d))
end

a = gets.to_i
b = gets.to_i
c = gets.to_i
d = gets.to_i
diff = diferenca(a, b, c, d)
puts "DIFERENCA = %d" % [diff]