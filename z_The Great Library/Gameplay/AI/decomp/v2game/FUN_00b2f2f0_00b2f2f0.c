// FUN_00b2f2f0 @ 00b2f2f0 body=[[00b2f2f0, 00b2f317] [00b2f320, 00b2f369]]


undefined8 FUN_00b2f2f0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = 0;
  uVar5 = 0;
  iVar4 = 0;
  local_c = 0;
  local_8 = 0;
  local_14 = 0;
  local_10 = 0;
  if (1 < (int)param_2) {
    do {
      puVar1 = (uint *)(param_1 + uVar3 * 8);
      bVar6 = CARRY4(uVar5,*puVar1);
      uVar5 = uVar5 + *puVar1;
      uVar2 = *(uint *)(param_1 + 8 + uVar3 * 8);
      iVar4 = iVar4 + *(int *)(param_1 + 4 + uVar3 * 8) + (uint)bVar6;
      bVar6 = CARRY4(local_c,uVar2);
      local_c = local_c + uVar2;
      local_8 = local_8 + *(int *)(param_1 + 0xc + uVar3 * 8) + (uint)bVar6;
      uVar3 = uVar3 + 2;
    } while (uVar3 < param_2 - 1);
  }
  if (uVar3 < param_2) {
    local_14 = *(uint *)(param_1 + uVar3 * 8);
    local_10 = *(int *)(param_1 + 4 + uVar3 * 8);
  }
  return CONCAT44(local_8 + iVar4 + (uint)CARRY4(local_c,uVar5) + local_10 +
                  (uint)CARRY4(local_c + uVar5,local_14),local_c + uVar5 + local_14);
}

