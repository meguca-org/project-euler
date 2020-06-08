candidates = filter condition [ (a,b) | a <- [1..1000], b <- [1..1000]]
  where
    condition (x,y) = x^2 + y^2 == (x + y - 1000)^2

main :: IO ()
main = (putStrLn . show) $ a * b * c
  where
    (a, b) = candidates!!1
    c = sqrt $ a^2 + b^2
