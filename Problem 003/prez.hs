facs :: Integer -> [Integer]
facs n = [ x | x <- [m-1,m-2..2], n `mod` x == 0]
  where
    m = floor $ sqrt $ fromInteger n

isprime n = and $ map ((/=0) . (mod n)) [2..n-1]

main :: IO ()
main = do
  putStrLn . show . head $ filter isprime $ facs 600851475143
