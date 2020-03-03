import Text.Printf
import System.IO

vesfera :: Double -> Double
vesfera r = (4.0 / 3.0) * 3.14159 * r * r * r

main = do
    r <- readLn
    let vol = vesfera r :: Double
    printf "VOLUME = %.3f\n" vol