
;int foo(int data, int count){
;    int i, ret=0;
;
;    for(i=count;i>0;i--){
;        printf("%d", data++);
;        ret += data;
;    }
;    return ret;
;}

;int main(){
;    int ret;
;    ret = foo(1,3);
;    return 0;
;}

;ret    <- R6
;i      <- R5
;cfp
;ret addr
;ret val
;1 (data)
;3 (count)
.ORIG   x3000
    LEA R6, STACK_END
    ADD R5, R6, #0      ;main fp
    ;;Caller setup
    AND R0, R0, #0
    ADD R0, R0, #3
    ADD R6, R6, #-1
    STR R0, R6, #0      ;push count for foo
    AND R0, R0, #0
    ADD R0, R0, #1
    ADD R6, R6, #-1
    STR R0, R6, #0      ;push data for foo

    ;;Call the function
    JSR FOO
    ;;Caller tear down
    LDR R0, R6, #0
    STR R0, R5, #0
    HALT
FOO
    ;;Callee setup
   





    
    
    ;;Function logic
    
    
    AND R3, R3, #0      ;R3=ret(0)
LOOP
    LD  R0, ASCII_ZERO
    ADD R0, R2, R0
    OUT                 ;printf
    ADD R2, R2, #1      ;data++
    ADD R3, R3, R2      ;ret+=data
    ADD R1, R1, #-1
    BR?     LOOP
    ;;Callee tear down
    ;Push return value
    
    ;pop local var
    
    ;recover cfp
    
    
    ;recover return addr
    
    
    RET
.BLKW   #20
STACK_END   .FILL   #0
ASCII_ZERO  .FILL   x30
.END
