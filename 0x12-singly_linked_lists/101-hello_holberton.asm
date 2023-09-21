globalmain

externprintf
main:
movedi,format 
xoreax,eax 
callprintf
moveax,0 
ret
format:db`Hello, Holberton\n`,0
