isprime n = and $ map ((/=0) . (mod n)) [2..m]
  where
    m = ceiling $ sqrt $ fromInteger n

main :: IO ()
main = (putStrLn . show) $ (filter isprime [1..])!!10000
