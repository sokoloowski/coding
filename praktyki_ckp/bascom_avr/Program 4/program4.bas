$regfile = "m32def.dat"
$crystal = 16000000
Config Portb = Output
Dim I As Byte
Dim T As Byte
T = 200
For I = 1 To 20
Portb = &B00000000
Waitms T
Portb = &B11111111
Waitms T
T = T - 10
Next
End