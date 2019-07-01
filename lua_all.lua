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

for i = 1, 4 do print("whose eating cheese now ", ab[i]) end



bb = 10
if (bb ~= 11) then print "whoa" end

bbs = "thats when strings are " .. tostring(bb) .. " on the Princeton"
print(bbs)

-- ways to initiate tables

ts = {x=10,y=20}

-- or
ts = {}; ts.x=10; ts.y=20;

-- yes!!!

ts = {cheese="howooweo",gophers="falseflag.disinfo"}
tes = {['cheese']=100,['getoboys']=2000}

print(ts["cheese"])
print(ts.cheese)
print(tes.cheese)

tes.cheese = nil -- removes from table

-- what_the_user_typed_in = io.read()
-- print('You typed in ' .. what_the_user_typed_in)

-- wackiness of tables

polyline = { color = "blue",
             thickness = 2,
             npoints = 4,
             {x=0, y=0}, --  polyline[1]
             {x=-10, y=0},-- polyline[2]
             {x=-10, y=1},-- polyline[3]
         }
print("polyline[3].x = ")
print(polyline[3].x)

j = 10 -- global var
local j = 20 -- local var

print(j)

-- blocks

xb = 3000
xt = 300000

do
    local xb = 22
    local xt = 33
    print("local xb= " .. tostring(xb))
end

-- repeat until

repeat
    line = io.read()
until line ~= ""
print(line)

-- while

local i = 1
while ab[i] do
    print(a[i])
    i = i + 1
end

print(nil == false) -- =false

-- if then else ifelse

aa = io.read()

if aa == "1" then
    print("TOAST")
elseif aa == "2" then
    print("BUTTERED")
elseif aa == "3" then
    print("WHATSSSS")
else
    print("WTFFFF")
end

for i = 10, 1, -1 do print(i) end

function aaal()
    local isa = 1000
    print "how were the documents shared?"

    function weio()
        print "wildcard!"
        return
    end
end


aaal()
weio()

goto toast

print("we're skipping this with a goto, baby!")

::toast::
print("we're in toast baby!")

dofile '1.lua' -- if only 1 arg, dont need parens

--[[ lua offers a special syntax for object-oriented calls,  
   the colon operator! ]]

-- obj:foo(x) = obj.foo(x) 
--

-- multiple value return example
s, e = string.find("hello luasers", "lua")
print(s,e)

-- variadic args
function variadicprint(...)
    print(...)
end

variadicprint("oiwjo",121212,"weoio","no motivation","woooooo")

-- ok, calling a function with a struct
-- this is for multiple named arguments
--


function _Window(...) 
    return "hi"
end

function Window (options)
    if type(options.title) ~= "string" then
        error("no title")
    elseif type(options.width) ~= "number" then
        error("no width")
    end

    -- everything else is optional
    _Window(options.title, 
            options.x or 0, -- default value
            options.y or 0, -- default value
            options.width, options.height,
            options.background or "white",
            options.border -- default is false (nil)
            )
end

w = Window{ x=0, y=0, width=300, height=200, title = "Lua", background="blue", border = true }

-- this is calling Window with the struct passing the named argument list
--

local function howdat()
    print "Lua supports local functions!"
end

howdat()








