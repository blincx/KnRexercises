-- lua file io
--

-- print(red)
local t = {}
for line in io.lines("lua_all.lua") do
    t[#t + 1] = line
    --print(line)
end
local s = table.concat(t,"\n") .. "\n"

-- print(s)



--[[ _ENV

_ENV = {g = _G}
g.print(g.math.cos(13))
g.print(113)

--_ENV = _G]]--

require('pl')
print(pretty.write(debug.getinfo(2,"S")))

--pretty.dump(_G)

-- this is how it preloads the standard library
string = require("string")
math = require("math")

print(package.path)

