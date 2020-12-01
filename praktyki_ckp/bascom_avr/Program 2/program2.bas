$regfile = "m32def.dat"
$crystal = 16000000
Config Portb.0 = Output
Config Portb.1 = Output
Config Portb.2 = Output
Config Portb.3 = Output
Config Portb.4 = Output
Config Portb.5 = Output
Config Portb.6 = Output
Config Portb.7 = Output
Do
Reset Portb.0
Reset Portb.2
Reset Portb.4
Reset Portb.6
Wait 1
Set Portb.0
Set Portb.2
Set Portb.4
Set Portb.6
Reset Portb.1
Reset Portb.3
Reset Portb.5
Reset Portb.7
Wait 1
Set Portb.1
Set Portb.3
Set Portb.5
Set Portb.7
Loop
End