def vesfera(raio)
    return (4.0 / 3.0) * 3.14159 * raio * raio * raio
end

raio = gets.to_f
vol = vesfera(raio)
puts "VOLUME = %.3f" % [vol]