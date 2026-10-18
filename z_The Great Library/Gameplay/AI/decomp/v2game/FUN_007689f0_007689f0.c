// FUN_007689f0 @ 007689f0 body=[[007689f0, 00768a93]]


/* WARNING: Removing unreachable block (ram,0x00768a2b) */

void FUN_007689f0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_3 + 0x50);
    do {
      uVar2 = *(uint *)(param_2 + 0x50);
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar1;
      }
      iVar3 = FUN_00414bd0(uVar4);
    } while (((((iVar3 != 0) || (uVar2 < uVar1)) || (uVar2 != uVar1)) ||
             ((*(int *)(param_2 + 0x68) != *(int *)(param_3 + 0x68) ||
              (*(int *)(param_2 + 0x5c) != *(int *)(param_3 + 0x5c))))) &&
            (param_2 = *(int *)(param_2 + 0xa8), param_2 != 0));
    *param_1 = param_2;
    return;
  }
  *param_1 = 0;
  return;
}

