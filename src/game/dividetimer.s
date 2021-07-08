.globl dividetimer
dividetimer:
    li      $t6, 30
    divu    $a0, $t6
    li      $t7, 60
    li      $t8, 100
    mfhi    $t9
    mflo    $t0
    multu   $t9, $t8
    nop
    nop
    mflo    $t1
    divu    $t1, $t6
    nop
    nop
    mflo    $t2
    divu    $t0, $t7
    sw      $t2, ($a3)
    nop
    mfhi    $t3
    mflo    $t4
    sw      $t3, ($a2)
    sw      $t4, ($a1)
    jr      $ra