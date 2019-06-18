#!/usr/local/bin/lua
u={}
u[1]="a"
u[3]="b"
u[2]="c"
u[4]="d"
u["hello"]="world"

for key,value in ipairs(u) do print(key,value) end
print("second loop")

for key,value in pairs(u) do print(key,value) end

-- create a table without keys, it behaves as a numeric array
-- a = {"one", "two","three"}
a = {1, 4, 9, 16, 25, 36, 49, 64, 81}
for key,value in pairs(a) do print(key,value) end
for key, value in ipairs(a) do print(key,value) end



