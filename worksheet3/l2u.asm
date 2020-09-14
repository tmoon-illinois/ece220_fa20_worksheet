        .ORIG       x3000
        LEA     R0, MyStr
        JSR     L2U
        HALT
;; L2U: convert lowercase to uppercase
;input: R0 (starting addr of string)
;output: none
L2U:
        ST      R0, SAVER0_L2U
        ST      R1, SAVER1_L2U
        ST      R2, SAVER2_L2U
LOOP
        
        
        LD      R2, NEG_a       ;load NEG_a
        
        LD      R2, NEG_z       ;load NEG_z
        
        
        ; lower case here
        LD      R2, DIFF_L2U


NEXTCHAR
        
        BRnzp   LOOP
NULL
        LD      R0, SAVER0_L2U
        LD      R1, SAVER1_L2U
        LD      R2, SAVER2_L2U
        RET


MyStr   .STRINGZ    "Ece220"
NEG_a   .FILL   #-97            ;additive inverse of ASCII 'a'
NEG_z  .FILL   #-122            ;additive inverse of ASCII 'z'
DIFF_L2U    .FILL   #-32        ;difference between uppercase and lowercase
SAVER0_L2U  .BLKW   #1
SAVER1_L2U  .BLKW   #1
SAVER2_L2U  .BLKW   #1
        .END
