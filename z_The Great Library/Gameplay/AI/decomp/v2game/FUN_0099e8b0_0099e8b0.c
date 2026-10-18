// FUN_0099e8b0 @ 0099e8b0 body=[[0099e8b0, 0099e8ec]]


void FUN_0099e8b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      for (iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
        (*(code *)*param_2)();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

