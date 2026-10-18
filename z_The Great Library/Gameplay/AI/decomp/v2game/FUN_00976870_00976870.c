// FUN_00976870 @ 00976870 body=[[00976870, 00976935]]


/* WARNING: Removing unreachable block (ram,0x009768cb) */

int FUN_00976870(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_8;
  
  iVar6 = *in_EAX;
  iVar3 = (in_EAX[1] - iVar6) / 0x50;
  local_8 = 0;
  if (0 < iVar3) {
    uVar1 = *(uint *)(param_1 + 0x10);
    puVar7 = (uint *)(iVar6 + 0x40);
    do {
      uVar2 = *puVar7;
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar1;
      }
      iVar5 = FUN_00414bd0(uVar4);
      if (((iVar5 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return local_8 * 0x50 + iVar6;
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0x14;
    } while (local_8 < iVar3);
  }
  iVar6 = FUN_00976450();
  return iVar6;
}

