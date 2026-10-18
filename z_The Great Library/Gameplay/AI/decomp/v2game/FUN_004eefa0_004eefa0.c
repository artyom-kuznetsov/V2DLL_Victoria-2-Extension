// FUN_004eefa0 @ 004eefa0 body=[[004eefa0, 004eefdc] [004eefe0, 004ef058] [004ef060, 004ef130]]


/* WARNING: Removing unreachable block (ram,0x004ef0d4) */

void FUN_004eefa0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_ac;
  undefined1 local_a8 [124];
  undefined4 local_2c;
  longlong local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  local_ac = 0;
  _memset(local_a8,0,0x7c);
  iVar4 = *(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) >> 4;
  if (0 < iVar4) {
    piVar3 = (int *)(*(int *)(in_EAX + 0x10) + 0xc);
    do {
      *(int *)(local_a8 + *(int *)(*(int *)(piVar3[-1] + 0x68) + 0x28) * 4 + -4) =
           *(int *)(local_a8 + *(int *)(*(int *)(piVar3[-1] + 0x68) + 0x28) * 4 + -4) + *piVar3;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x128);
  local_24 = __allmul(uVar2 << 0xf,((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11,param_3,param_4);
  local_24 = local_24 >> 0xf;
  if ((local_24 != 0) &&
     (local_18 = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 5, 0 < local_18)) {
    local_8 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x108) + local_8;
      iVar4 = *(int *)(iVar7 + 0x1c);
      local_14 = *(int *)(iVar7 + 0x10);
      local_10 = *(int *)(iVar7 + 0x14);
      uVar2 = *(uint *)(local_a8 + *(int *)(*(int *)(iVar7 + 8) + 0x28) * 4 + -4);
      uVar8 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,local_24);
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_2c = (undefined4)uVar8;
      if ((local_14 != 0x8000) || (local_10 != 0)) {
        uVar2 = *(uint *)(iVar7 + 0x18);
        lVar9 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
        uVar8 = CONCAT44(uVar6,local_2c);
        if (lVar9 < CONCAT44(uVar6,local_2c)) {
          uVar8 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
        }
      }
      local_2c = (undefined4)uVar8;
      lVar9 = __allmul(uVar8,local_14,local_10);
      uVar5 = (uint)(lVar9 >> 0xf);
      puVar1 = (uint *)(param_2 + iVar4 * 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar3 = (int *)(param_2 + 4 + iVar4 * 8);
      *piVar3 = *piVar3 + (int)((ulonglong)(lVar9 >> 0xf) >> 0x20) + (uint)CARRY4(uVar2,uVar5);
      local_8 = local_8 + 0x20;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

