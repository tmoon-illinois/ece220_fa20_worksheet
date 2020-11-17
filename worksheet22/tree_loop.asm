.ORIG x3000
; main function 
LEA R6, STACK_START
LD  R4, SIZE
ADD R4, R4, #-1

; create a bst tree
LOOP
LEA R3, ARRAY
ADD R3, R3, R4
LDR R0, R3, #0 
LEA R1, TREE_ROOT_PTR
ADD R6, R6, #-2   ; push 2 parameters
STR R0, R6, #1
STR R1, R6, #0
JSR BST_INSERT
ADD R6, R6, #3    ; caller teardown
ADD R4, R4, #-1
BRzp    LOOP

; setup for maxDepth
LD R1, TREE_ROOT_PTR
ADD R6, R6, #-1
STR R1, R6, #0
JSR maxDepth
LDR R0, R6, #0
; print out the result (assume <9)
LD  R1, ASCII_ZERO
ADD R0, R0, R1 
OUT
HALT

; unused <- R5, R6
; R5 save
; R7 save
; return value
; root
; v

BST_INSERT
; callee setup
ADD R6, R6, #-4
STR R5, R6, #1
ADD R5, R6, #0
STR R7, R5, #2

BST_INSERT_TAIL_TARGET

LDR R0, R5, #4
LDR R0, R0, #0   ; *root
BRnp GO_LEFT_OR_RIGHT
ADD R0, R0, #3   ; R0 is 0, that's why we're here
ADD R6, R6, #-1  ; push 3 on the stack
STR R0, R6, #0
JSR MALLOC
LDR R0, R6, #0   ; output of malloc
ADD R6, R6, #2   ; caller teardown
LDR R1, R5, #4   ; root
STR R0, R1, #0   ; *root = malloc()
LDR R2, R5, #5   ; v
STR R2, R0, #0   ; (*root)->val = v;
AND R2, R2, #0
STR R2, R0, #1   ; (*root)->left = NULL;
STR R2, R0, #2   ; (*root)->right = NULL;
LDR R7, R5, #2   ; callee teardown
LDR R5, R5, #1
ADD R6, R6, #3
RET

GO_LEFT_OR_RIGHT
LDR R0, R5, #4   ; get root
LDR R1, R5, #5   ; v
NOT R1, R1
ADD R1, R1, #1   ; -v
LDR R2, R0, #0   ; *root
LDR R3, R2, #0   ; (*root)->val
ADD R3, R3, R1   ; (*root)->val - v
BRp GO_LEFT      ; if left, add 1 to R2, else add 2 to R2
; adding 1 gets us &((*root)->left)
; adding 2 gets us &((*root)->right)
ADD R2, R2, #1
GO_LEFT
ADD R2, R2, #1
STR R2, R5, #4
BRnzp BST_INSERT_TAIL_TARGET   ; tail recursion optimization

MALLOC
LDR R0, R6, #0
LD R1, NEXT_FREE_BLOCK
ADD R6, R6, #-1
STR R1, R6, #0
ADD R1, R1, R0
ST R1, NEXT_FREE_BLOCK
RET


; right
; left
; CFP
; return addr
; return value
; root
maxDepth
; callee setup
    ADD R6, R6, #-5
    STR R5, R6, #2
    ADD R5, R6, #1
    STR R7, R5, #2

;    if(root == NULL)
;            return -1;
;    Your code here


;    left = maxDepth(root->left);
;    Your code here

;    right = maxDepth(root->right);
;    Your code here

;    if(left > right)       return left + 1;
;    else                   return right +1;
;    Your code here

DONE
    STR R0, R5, #3      ;set return value
; callee teardown
    ADD R6, R6, #4
    LDR R7, R5, #2
    LDR R5, R5, #1
    RET

SIZE    .FILL   #5
ARRAY   .FILL   #4
.FILL   #5
.FILL   #6
.FILL   #1
.FILL   #7
ASCII_ZERO  .FILL x30
TREE_ROOT_PTR .FILL x0
STACK_END .BLKW #100
STACK_START .FILL x0
NEXT_FREE_BLOCK   .FILL THIS_MUST_BE_LAST
THIS_MUST_BE_LAST .FILL x0
.END

