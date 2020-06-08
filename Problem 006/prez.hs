sumofsquares n = n * (n+1) * (2*n +1) `div` 6
squareofsums n = (^2) $ (n+1) * n `div` 2

main :: IO ()
main = (putStrLn . show) $ squareofsums 100 - sumofsquares 100
