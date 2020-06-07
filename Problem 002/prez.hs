fibf = takeWhile (< 4*10^6) fibs
  where
    fibs = 0:1:zipWith (+) fibs (tail fibs)

main :: IO ()
main = do
  (putStrLn . show) $ sum $ filter even fibf
