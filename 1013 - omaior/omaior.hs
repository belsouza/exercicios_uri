import Prelude
import System.IO
import Text.Printf

maiordedois :: Int -> Int -> Int
maiordedois a b = do
    let sub = a - b
    let aff = abs sub
    let j = (a + b + aff)
    j `div` 2


maiordetres :: Int -> Int -> Int -> Int
maiordetres a b c = do
    let p1 = maiordedois a b
    maiordedois p1 c

    
main = do
    linha <- getLine
    let lista = words linha
        a = read( lista !! 0 ) :: Int
        b = read( lista !! 1 ) :: Int
        c = read( lista !! 2 ) :: Int

    let maior = maiordetres a b c
    printf "%d eh o maior\n" maior
