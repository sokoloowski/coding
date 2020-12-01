$regfile = "m32def.dat"
$crystal = 16000000
Config Porta = Output
Config Portb = Output

Reset Porta.0
Reset Porta.1
Reset Porta.2
Reset Porta.3

Do
Portb = &B10000001
Wait 1
Portb = &B11110011
Wait 1
Portb = &B01001001
Wait 1
Portb = &B01100001
Wait 1
Portb = &B00110011
Wait 1
Portb = &B00100101
Wait 1
Portb = &B00000101
Wait 1
Portb = &B11110001
Wait 1
Portb = &B00000001
Wait 1
Portb = &B00100001
Wait 1
Loop
End