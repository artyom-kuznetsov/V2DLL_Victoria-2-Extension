// FUN_009adbf0 @ 009adbf0 body=[[009adbf0, 009adc8a] [009adc91, 009adca4] [009adca8, 009adcc7] [009adccb, 009adce1] [009adce8, 009add1b]]


void FUN_009adbf0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e313;
  local_10 = ExceptionList;
  local_18 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 8) + local_18 * 4);
          puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
        puVar3 = (undefined4 *)*puVar2;
        if (puVar3 != (undefined4 *)0x0) {
          local_8 = 1;
          piVar5 = (int *)puVar3[8];
          iVar4 = puVar3[9] - (int)piVar5 >> 2;
          if (iVar4 != 0) {
            piVar1 = piVar5 + iVar4;
            for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
              iVar4 = *piVar5;
              if (iVar4 != 0) {
                ExceptionList = &local_10;
                FUN_009aa1c0(iVar4 + 0x10);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(iVar4);
              }
            }
          }
          if (puVar3[8] == 0) {
            ExceptionList = &local_10;
            puVar3[8] = 0;
            puVar3[9] = 0;
            puVar3[10] = 0;
            local_8 = 0xffffffff;
            if ((uint)puVar3[5] < 0x10) {
              puVar3[5] = 0xf;
              puVar3[4] = 0;
              *(undefined1 *)puVar3 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(puVar3);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*puVar3);
          }
          ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar3[8]);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(uint *)(param_1 + 4));
  }
  return;
}

