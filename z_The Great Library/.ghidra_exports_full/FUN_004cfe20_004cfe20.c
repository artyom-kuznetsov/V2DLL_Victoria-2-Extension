// FUN_004cfe20 @ 004cfe20 body=[[004cfe20, 004cff1b] [004cff20, 004d0045]]


undefined4 FUN_004cfe20(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_28;
  int local_24;
  int local_c;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0xf0) + 0x28);
  if (*(int *)(*(int *)(param_1 + 0x118) + iVar1 * 4) != 0) {
    local_24 = param_3;
    piVar8 = *(int **)(param_1 + 0x48);
    local_c = 0;
    local_28 = param_2;
    uVar4 = 0;
    piVar7 = piVar8;
    while ((piVar8 <= piVar7 && (piVar7 < *(int **)(param_1 + 0x4c)))) {
      iVar2 = *piVar7;
      piVar7 = piVar7 + 1;
      for (iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x194) +
                           iVar1 * 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x27c)) {
        uVar4 = uVar4 + *(int *)(iVar2 + 0x58);
      }
    }
    while ((*(int **)(param_1 + 0x48) <= piVar8 && (piVar8 < *(int **)(param_1 + 0x4c)))) {
      iVar2 = *piVar8;
      piVar8 = piVar8 + 1;
      iVar2 = *(int *)(iVar1 * 0x10 +
                      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x194));
      iVar3 = local_c;
      while (local_c = iVar3, iVar3 = iVar2, iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x27c);
        if (local_c != 0) {
          uVar5 = *(uint *)(iVar3 + 0x58);
          uVar11 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,uVar4 << 0xf,
                            ((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11);
          lVar12 = __allmul(uVar11,param_2,param_3);
          lVar12 = lVar12 >> 0xf;
          uVar5 = (uint)lVar12;
          iVar9 = (int)((ulonglong)lVar12 >> 0x20);
          bVar10 = local_28 < uVar5;
          local_28 = local_28 - uVar5;
          local_24 = (local_24 - iVar9) - (uint)bVar10;
          puVar6 = (uint *)FUN_00439780(iVar3,lVar12);
          FUN_0095a5f0(uVar5 - *puVar6,(iVar9 - puVar6[1]) - (uint)(uVar5 < *puVar6));
          iVar3 = local_c;
        }
      }
    }
    if (local_c != 0) {
      puVar6 = (uint *)FUN_00439780(local_c,local_28,local_24);
      FUN_0095a5f0(local_28 - *puVar6,(local_24 - puVar6[1]) - (uint)(local_28 < *puVar6));
      return 1;
    }
  }
  return 0;
}

