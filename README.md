# engine-takehome-interview

## Prompt

Your application is a matching engine that receives orders and continuously matches them to see if they can trade.
Orders are timestamped by their arrival time.
Orders are first ranked according to their price; orders of the same price are then ranked depending on the timestamp at entry.
Read orders from an input file using the format below and emit the trades.
Print all remaining orders that didn’t fully trade after all input is read.
Please note the streaming nature of this input and structure your program accordingly.


## Input Format

Every line of input contains an order.
The order consists of an `OrderID`, `Side`, `Instrument`, `Qty` and `Price`.
The orders are listed in same order as the time of entry.

### Sample Input

```
12345 BUY BTCUSD   5   10000
zod42 SELL BTCUSD   2   10001
13471 BUY BTCUSD .  6   9971
11431 BUY ETHUSD   9   175
abe14 SELL BTCUSD   7   9800
plu401 SELL ETHUSD   5   170
45691 BUY ETHUSD   3    180
```

## Output Format

Please output any trades that are possible in the following format:

The word `TRADE` followed by `Instrument`, `OrderID`, `ContraOrderID`, `Qty` and `Price`.
At the end of reading input, please list all remaining orders in the same format as the entry: `OrderID`, `Side`, `Instrument`, `RemainingQty`, `Price`.

### Sample Output

```
TRADE BTCUSD abe14 12345 5 10000
TRADE BTCUSD abe14 13471 2 9971
TRADE ETHUSD plu401 11431 5 175

zod42 SELL BTCUSD 2 10001
13471 BUY BTCUSD 4 9971
11431 BUY ETHUSD 4 175
45691 BUY ETHUSD 3 180
```
