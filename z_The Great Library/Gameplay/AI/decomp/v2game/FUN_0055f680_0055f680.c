// FUN_0055f680 @ 0055f680 body=[[0055f680, 0055f6be] [0055f6c0, 0055f73c]]


/* WARNING: Removing unreachable block (ram,0x0055f6de) */

int FUN_0055f680(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int *local_8;
  
  iVar5 = *(int *)(in_EAX + 0x20) - *(int *)(in_EAX + 0x1c) >> 2;
  local_c = 0;
  if (0 < iVar5) {
    uVar1 = *(uint *)(param_1 + 0x10);
    piVar2 = *(int **)(in_EAX + 0x1c);
    local_8 = piVar2;
    do {
      uVar3 = *(uint *)(*local_8 + 0x34);
      uVar6 = uVar1;
      if (uVar3 <= uVar1) {
        uVar6 = uVar3;
      }
      iVar4 = FUN_00414bd0(uVar6);
      if (((iVar4 == 0) && (uVar3 <= uVar1)) && (uVar1 == uVar3)) {
        return piVar2[local_c];
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_c < iVar5);
  }
  return DAT_0125e38c;
}

