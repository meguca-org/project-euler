main :: IO ()
main = (putStrLn . show) $ foldr1 lcm [1..20]
