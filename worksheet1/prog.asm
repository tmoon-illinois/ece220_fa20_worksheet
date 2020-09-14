        .ORIG   x3000

; count number of bits to be flipped to convert A to B
; R0: number A
; R1: nunber B
; R5: result 
; R4: XOR(A,B)
; R6: counter (16)
        
        
        AND     R5, R5, #0

        ; perform XOR(A,B) = AB' + A'B
        ; R4 stores XOR result
        LD      R6, COUNT

LOOP
        ADD     R5, R5, #1  ; else, increment R5
ZERO

        LD      R6, ASC_ZERO

        HALT

VAL1    .FILL   x1102
VAL2    .FILL   x1003
;VAL1    .FILL   xF063
;VAL2    .FILL   xA160
COUNT   .FILL   #16
ASC_ZERO    .FILL   x0030
        .END
