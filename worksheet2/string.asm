.ORIG       x3000


LOOP    
            

POLL    
            LDI     R1,DSRAddr
            BRzp    POLL
            
            ADD     R0,R0,#1    ;increase string pointer

STOP    
            HALT
            ;PUTS
MyStr       .STRINGZ    "ECE220"
DSRAddr     .FILL   xFE04
DDRAddr     .FILL   xFE06
.END
