// FUN_0046f370 @ 0046f370 body=[[0046f370, 0046f39a] [0046f3a0, 0046f464] [0046f46b, 0046f488]]


void FUN_0046f370(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(), 0 < iVar3)) {
    do {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
      iVar3 = **(int **)(iVar3 + 4);
      piVar1 = *(int **)(param_1 + 0x18);
      local_8 = iVar3;
      if (&local_8 < piVar1) {
        piVar4 = *(int **)(param_1 + 0x14);
        if (&local_8 < piVar4) goto LAB_0046f3ee;
        if (piVar1 == *(int **)(param_1 + 0x1c)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x18) =
               *(undefined4 *)(*(uint *)(param_1 + 0x14) + ((int)&local_8 - (int)piVar4 >> 2) * 4);
        }
      }
      else {
LAB_0046f3ee:
        if (piVar1 == *(int **)(param_1 + 0x1c)) {
          FUN_00a513f0();
        }
        if (*(int **)(param_1 + 0x18) != (int *)0x0) {
          **(int **)(param_1 + 0x18) = iVar3;
        }
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
      for (piVar1 = (int *)*piVar4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (*piVar1 == iVar3) {
          if (piVar1 != (int *)0x0) {
            if ((char)piVar4[3] == '\0') {
              iVar3 = piVar1[1];
              iVar2 = piVar1[2];
              if (iVar3 != 0) {
                *(int *)(iVar3 + 8) = iVar2;
              }
              if (iVar2 != 0) {
                *(int *)(iVar2 + 4) = iVar3;
              }
              if (piVar1 == (int *)*piVar4) {
                *piVar4 = iVar2;
              }
              if (piVar1 == (int *)piVar4[1]) {
                piVar4[1] = iVar3;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar1);
            }
            *(undefined1 *)(piVar1 + 3) = 1;
          }
          break;
        }
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))();
    } while (0 < iVar3);
  }
  return;
}

