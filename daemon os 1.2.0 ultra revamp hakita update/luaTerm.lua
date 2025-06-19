
os.execute("clear")
os.execute("lolcat luaTermlogo")

repeat
-- do something
io.write("<luaterm>$ ")
shell_input = io.read("*l")

if shell_input == "exit" then
	print("good night! ")
	os.execute("./main")
elseif shell_input == "title" then
	os.execute("lolcat luaTermlogo")
elseif shell_input == "hardexit" then
	os.exit()

else 
	os.execute(shell_input)

end
os.execute("pwd")
until false

