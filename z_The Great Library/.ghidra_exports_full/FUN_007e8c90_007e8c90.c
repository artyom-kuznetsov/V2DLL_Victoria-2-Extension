// FUN_007e8c90 @ 007e8c90 body=[[007e8c90, 007e8d3f]]


void FUN_007e8c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  undefined4 local_8;
  
  iVar2 = (**(code **)(*unaff_ESI + 0x38))();
  if (*(int *)(*(int *)(iVar2 + 0x20d8) + param_1 * 4) != 0) {
    FUN_00644a70(iVar2,unaff_EDI,1);
  }
  local_8 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x134) - *(int *)(unaff_EDI + 0x130) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(unaff_EDI + 0x130) + local_8 * 4) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(unaff_EDI + 0x130) + local_8 * 4);
        iVar2 = (**(code **)(*unaff_ESI + 0x38))();
        if (*(int *)(*(int *)(iVar2 + 0x20d8) + param_1 * 4) != 0) {
          FUN_00644a70(iVar2,uVar1,1);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(unaff_EDI + 0x134) - *(int *)(unaff_EDI + 0x130) >> 2);
    *(int *)(unaff_EDI + 0x148) = param_1;
    return;
  }
  *(int *)(unaff_EDI + 0x148) = param_1;
  return;
}

