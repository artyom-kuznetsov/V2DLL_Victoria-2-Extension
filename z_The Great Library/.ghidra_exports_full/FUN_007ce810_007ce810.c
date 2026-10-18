// FUN_007ce810 @ 007ce810 body=[[007ce810, 007ce83a] [007ce840, 007ce8e5]]


void FUN_007ce810(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = in_ECX - param_1 >> 2;
  iVar3 = local_8 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar3) {
    local_c = iVar3 * 2 + 2;
    do {
      local_18 = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
      param_1 = iVar3 + -1;
      local_c = local_c + -2;
      bVar5 = local_c == local_8;
      iVar3 = local_c;
      local_14 = param_1;
      if (local_c < local_8) {
        do {
          iVar4 = iVar3;
          local_10 = (uint *)FUN_007c7d90();
          puVar2 = (uint *)FUN_007c7d90();
          if (((int)puVar2[1] <= (int)local_10[1]) &&
             (((int)puVar2[1] < (int)local_10[1] || (*puVar2 < *local_10)))) {
            iVar4 = iVar4 + -1;
          }
          iVar3 = iVar4 * 2 + 2;
          *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + iVar4 * 4);
          param_1 = iVar4;
        } while (iVar3 < local_8);
        bVar5 = iVar3 == local_8;
      }
      iVar3 = local_14;
      if (bVar5) {
        *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + -4 + local_8 * 4);
        param_1 = local_8 + -1;
      }
      FUN_007d1e30(iVar1,param_1,local_14,&local_18,param_2);
    } while (0 < iVar3);
  }
  return;
}

