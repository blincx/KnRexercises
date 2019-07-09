


Account = {}

function Account:create (bal)
    self.balance = bal
    return self
end

function Account:withdraw (v)
    self.balance = self.balance - v
end

b1 = Account:create(10000)
b1:withdraw(2000)
print(type(b1))
print(b1.balance)

------
--







