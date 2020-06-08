import Data.List

ispalindrome n = (reverse . show) n == show n

fug = [a*b | a <- threedig, b <- threedig]
  where
    threedig = [999,998..100]

main :: IO ()
main = do
  (putStrLn . show . head) $ sortBy (flip compare) $ filter ispalindrome fug

