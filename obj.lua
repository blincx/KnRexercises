


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

-- bitwise

print(bit32.band(0XDF, 0xFD)) 
print(bit32.bor(0xD0,0x0D))

print(bit32.bor(2^32))

print(bit32.extract(0xABCDEF01,4,8))

tabb = {}
for i = 1,10 do
    tabb[#tabb+1] = i
end

require('pl')
pretty.dump(tabb)

table.insert(tabb,1,"HEOOEOE")
pretty.dump(tabb)

print(string.sub("TOASSSST",1,2))

print(string.gsub("TOASST IS CUTE", "IS", "_METAMATERIAL_"))

is = io.read()
if string.find(is, "%d") then 
    print "GRAVITY TOAST"
else
    print "NOOO"
end

io.stderr:write("HoW ArE YuO My Man?!")

print(pretty.dump(debug.getinfo(string.sub)))










