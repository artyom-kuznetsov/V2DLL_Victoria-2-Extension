// Catch_All@0098a6c4 @ 0098a6c4 body=[[0098a6c4, 0098a6d4] [0098a6d8, 0098a6f1]]


void Catch_All_0098a6c4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (7 < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  puVar1[5] = 7;
  puVar1[4] = 0;
  *(undefined2 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

