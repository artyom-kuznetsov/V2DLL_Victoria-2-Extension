// FUN_007f1550 @ 007f1550 body=[[007f1550, 007f15d9]]


void FUN_007f1550(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (piVar2 != *(int **)(param_1 + 0x20)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(iVar1 + 0xc) + 0x134) != 0) {
          FUN_006430b0(iVar1,*(int *)(iVar1 + 0xc),param_2);
        }
        FUN_00643950(*(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x40) + 0x2238) +
                      *(int *)(*(int *)(*piVar2 + 8) + 0xb4) * 4));
        FUN_00643b10(*(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x40) + 0x2238) +
                      *(int *)(*(int *)(*piVar2 + 8) + 0xb4) * 4));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x20));
  }
  return;
}

