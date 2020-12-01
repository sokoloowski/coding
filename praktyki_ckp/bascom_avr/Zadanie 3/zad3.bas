$regfile = "m32def.dat"
$crystal = 16000000
Config Porta = Output
Config Portb = Output

Dim I As Byte

Set Porta.0
Set Porta.1
Set Porta.2
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

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B10000001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B11110011
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B01001001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B01100001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00110011
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00100101
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00000101
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B11110001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00000001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B11110011
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B00100001
Waitms 5
Set Porta.3
Next

For I = 0 To 100
Reset Porta.2
Portb = &B01001001
Waitms 5
Set Porta.2
Reset Porta.3
Portb = &B10000001
Waitms 5
Set Porta.3
Next
Set Porta.2
Reset Porta.3
Loop

End