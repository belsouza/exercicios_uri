import System.IO
import Prelude
import Text.Printf

consumo :: Integer -> Double -> Double
consumo x y = (fromIntegral x)  / y

main :: IO()
main = do
    x <- readLn :: IO Integer
    y <- readLn :: IO Double
    let calc = consumo x y
    printf "%.3f km/l\n" calc

-- Disciplina 5992 chave CK2ft.x