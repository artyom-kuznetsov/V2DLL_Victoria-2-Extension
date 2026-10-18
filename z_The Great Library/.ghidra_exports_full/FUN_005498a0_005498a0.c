// FUN_005498a0 @ 005498a0 body=[[005498a0, 005498bb] [005498c0, 0054991d]]


/* WARNING: Removing unreachable block (ram,0x005498d6) */

void FUN_005498a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    do {
      uVar2 = *(uint *)(param_2 + 0x10);
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      iVar4 = FUN_00414bd0(uVar3);
    } while ((((iVar4 != 0) || (uVar2 < uVar1)) || (uVar2 != uVar1)) &&
            (param_2 = *(int *)(param_2 + 0x20), param_2 != 0));
  }
  *param_1 = param_2;
  return;
}

