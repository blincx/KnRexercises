-- everything!

dofile("1.lua")

--[[ 
   tremendous comments!
   ]]


a = "one world"
b = string.gsub(a, "one","another")
print(a)
print(b)

print(#a) -- length
print(#b) -- length

-- tables

ta = {}
k = "x"
ta[k] = "How are things going, my boy?"
print(ta.x)

print (ta["x"])
-- populate a table
ab = {}
for i = 1, 1000 do ab[i] = i*2 end
print(ab[223])

for i = 1, #ab do print("whose eating cheese now ", ab[i]) end



bb = 10
if (bb ~= 11) then print "whoa" end

bbs = "thats when strings are " .. tostring(bb) .. " on the Princeton"
print(bbs)

-- ways to initiate tables

ts = {x=10,y=20}

-- or
ts = {}; ts.x=10; ts.y=20;

-- yes!!!





