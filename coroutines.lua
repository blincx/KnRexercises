require('socket')
require('pl')

function receive (connection)
    connection:settimeout(0)

    local s, status, partial = connection:receive(2^10)
    if status == "timeout" then
        coroutine.yield(connection)
    end
    return s or partial, status
end


function download(host,file)
    local c = assert(socket.connect(host,80))
    local count = 0
    print("sending GET request to " .. host .. "for " .. file)
    c:send("GET " .. file .. " HTTP/1.0\r\n\r\n")
    while true do
        local s, status = receive(c)
        count = count + #s
        if status == "closed" then break end
    end
    c:close()
    print(file,count)
end

threads = {}

function get(host, file)
    local co = coroutine.create(function ()
        download(host,file)
    end)
    table.insert(threads,co)
end

function dispatch ()
    local i = 1
    print("length of threads = 2")
    while true do
        print("threads = " .. pretty.write(threads))
        if threads[i] == nil then
            --print("A0")
            if threads[1] == nil then break end
            i = 1
        end
        local status, res = coroutine.resume(threads[i])
        if not res then
            table.remove(threads, i)
        else
            i = i + 1
        end
    end
end


host = "www.w3.org"
b = get(host, "/TR/html401/html40.txt")

get(host, "/TR/2002/REC-xhtml1-20020801/xhtml11.pdf")
get(host, "/TR/REC-html32.html")
get(host, "/TR/2000/REC-DOM-Level-2-Core-20001113/DOM2-Core.txt")

dispatch()


