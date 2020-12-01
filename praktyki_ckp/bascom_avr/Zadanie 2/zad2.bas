$regfile = "m32def.dat"
$crystal = 16000000
Config Porta = Output
Config Portb = Output

Reset Porta.0
Set Porta.1
Set Porta.2
Set Porta.3

Do
Portb = &B11110011
Waitms 5
Set Porta.0
Reset Porta.1
Portb = &B01001001
Waitms 5
Set Porta.1
Reset Porta.2
Portb = &B01100001
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00110011
Waitms 5
Set Porta.3
Reset Porta.0
Loop
End