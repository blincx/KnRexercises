#!/usr/local/bin/lua
local mt = {}

local t = { clowns="yes"}
local methods = {}

function give_me_a_t(a)
    t = {x = a}
    return t
end

function mt.__tostring(a)
    return "collapse clowns coming 4 us"
end

function t.__tostring(a)
    return "rodack clowns foraging forever"
end

function schooltime()
    print("everything changes!")
end

function methods.magnitude(self)
    return self.x * 2
end

mt.__index = methods
mt.__call = schooltime
mt.__pairs = function() print("how are you") end
mt.__len = function() return 333 end
for key,value in pairs(mt) do
    print(key, value)
end

aa = give_me_a_t(5)

setmetatable(aa,mt);
print("magnitude = ")
-- called in three different ways -- 
print(aa:magnitude())
print(aa["magnitude"](aa))
print(aa.magnitude(aa))

print(aa)
print(mt)
print(t)
t() -- __call lets you call the table like a function, calls schooltime

print("metatable is = ")
print(getmetatable(t))

for k,v in ipairs(t) do
    print(k)
    print(v)
end

abc = function() print("how goes") end
print("function defintions are synctactic sugar for this: ", abc())


print("length = ", #aa)


