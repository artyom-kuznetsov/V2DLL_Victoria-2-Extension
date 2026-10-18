// FUN_004ef240 @ 004ef240 body=[[004ef240, 004ef3e7]]


void FUN_004ef240(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint local_28;
  int iStack_24;
  int local_14;
  int local_10;
  int local_c;
  
  uVar8 = *(uint *)(param_1 + 0x48);
  uVar7 = ((int)uVar8 >> 0x1f) << 0xf | uVar8 >> 0x11;
  if (uVar8 << 0xf != 0 || uVar7 != 0) {
    local_14 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 4;
    lVar2 = 0;
    local_c = 0;
    if (0 < local_14) {
      local_10 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x10) + local_10;
        iVar5 = *(int *)(iVar4 + 8);
        iVar3 = local_c;
        if ((*(char *)(*(int *)(iVar5 + 0x68) + 0x3d9) == '\0') && (iVar3 = iVar5, local_c != 0)) {
          uVar1 = *(uint *)(iVar4 + 0xc);
          uVar9 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,uVar8 << 0xf,
                           uVar7);
          lVar10 = __allmul(uVar9,param_2,param_3);
          lVar10 = lVar10 >> 0xf;
          lVar2 = lVar10 + lVar2;
          puVar6 = (uint *)FUN_00439780(iVar5,lVar10);
          FUN_0095a5f0((uint)lVar10 - *puVar6,
                       ((int)((ulonglong)lVar10 >> 0x20) - puVar6[1]) -
                       (uint)((uint)lVar10 < *puVar6));
          iVar3 = local_c;
        }
        local_c = iVar3;
        iStack_24 = (int)((ulonglong)lVar2 >> 0x20);
        local_28 = (uint)lVar2;
        local_10 = local_10 + 0x10;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      if (local_c != 0) {
        uVar8 = param_2 - local_28;
        iVar5 = (param_3 - iStack_24) - (uint)(param_2 < local_28);
        puVar6 = (uint *)FUN_00439780(local_c,uVar8,iVar5);
        FUN_0095a5f0(uVar8 - *puVar6,(iVar5 - puVar6[1]) - (uint)(uVar8 < *puVar6));
      }
    }
  }
  return;
}

