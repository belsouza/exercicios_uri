import Text.Printf
import System.IO
import Prelude

areadotrianguloretangulo :: Double -> Double -> Double
areadotrianguloretangulo baseA alturaC = (baseA * alturaC) / 2.0

areadocirculo:: Double -> Double
areadocirculo raioC = 3.14159 * raioC * raioC

areadotrapezio :: Double -> Double -> Double -> Double
areadotrapezio baseA baseB alturaC = ((baseA + baseB) * alturaC ) / 2.0 

areadoquadrado :: Double -> Double
areadoquadrado ladoB = ladoB * ladoB

areadoretangulo :: Double -> Double -> Double
areadoretangulo ladoA ladoB = ladoA * ladoB

main = do
    linha <- getLine
    let foo = words linha
        a = read (foo !! 0) :: Double
        b = read (foo !! 1) :: Double
        c = read (foo !! 2) :: Double

    let varareadotrianguloretangulo = areadotrianguloretangulo a c
    let varareadocirculo = areadocirculo c
    let varareadotrapezio = areadotrapezio a b c
    let varareadoquadrado = areadoquadrado b
    let varareadoretangulo = areadoretangulo a b

    printf "TRIANGULO: %.3f\n" varareadotrianguloretangulo
    printf "CIRCULO: %.3f\n" varareadocirculo
    printf "TRAPEZIO: %.3f\n" varareadotrapezio
    printf "QUADRADO: %.3f\n" varareadoquadrado
    printf "RETANGULO: %.3f\n" varareadoretangulo       