main :: IO ()
main = do
    (putStrLn . show . f) 1000
    where
      f n = sum [ x | x <- [1..n-1], 0 `elem` (map (mod x) [3, 5])]
