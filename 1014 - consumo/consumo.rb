def consumo ( x, y )
    return x / y
end

x = gets.to_i
y = gets.to_f
res = consumo( x, y )
puts "%.3f km/l" % [res]

