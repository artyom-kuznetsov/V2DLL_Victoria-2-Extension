// FUN_0095ad40 @ 0095ad40 body=[[0095ad40, 0095b0c8]]


/* WARNING: Removing unreachable block (ram,0x0095ae93) */
/* WARNING: Removing unreachable block (ram,0x0095afda) */

uint FUN_0095ad40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  int iStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b42039;
  local_14 = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x68) + 0x3d9) != '\0') {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 100);
  local_28 = *(undefined4 *)(iVar2 + 0x128);
  if (*(int *)(param_1 + 0x6c) ==
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 300) * 4) + 0xe64)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return 0;
  }
  ExceptionList = &local_14;
  if ((0 < *(int *)(*(int *)(iVar2 + 0x188) + 0x84)) &&
     (ExceptionList = &local_14, cVar5 = FUN_004b8c00(), cVar5 != '\0')) {
    ExceptionList = local_14;
    return 0;
  }
  (**(code **)(*(int *)(DAT_00f20c04 + 0xdc) + 0x18))(&local_38,param_2);
  uStack_30 = __alldiv(local_38 << 0x1e,
                       (((int)local_38 >> 0x1f) << 0xf | local_38 >> 0x11) << 0xf |
                       (local_38 & 0x1ffff) >> 2,0x1f40000,0);
  uVar4 = (ulonglong)uStack_30 >> 0x20;
  if ((DAT_013f1ce8 & 1) == 0) {
    DAT_013f1ce8 = DAT_013f1ce8 | 1;
    uStack_c = 0;
    if (DAT_0131bb34 == 0) {
      iStack_34 = FUN_00aae9af(0x188);
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      if (iStack_34 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0041a160();
      }
      FUN_00423700(uVar6);
    }
    DAT_013f1ce4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  }
  iVar2 = DAT_013f1ce4;
  lVar11 = FUN_00b31c36();
  if (CONCAT44((int)uVar4,(undefined4)uStack_30) < lVar11) {
    if (*(int *)(*(int *)(param_1 + 100) + 0x24) <
        ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + iVar2) {
      ExceptionList = local_14;
      return 0;
    }
    puVar7 = (undefined8 *)FUN_00408d50(0x3c23d70a);
    uStack_30 = *puVar7;
  }
  iVar2 = *(int *)(param_1 + 100);
  uVar10 = *(uint *)(*(int *)(iVar2 + 0x9c) + 0x240);
  lVar11 = __alldiv(uVar10 << 0x1e,((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2,0x1f40000,0);
  iStack_34 = *(int *)(DAT_012587e4 + 4);
  local_28 = *(undefined4 *)(iVar2 + 0x128);
  uVar10 = *(uint *)(*(int *)(*(int *)(iStack_34 + *(int *)(iVar2 + 300) * 4) + 0xa60) + 0x248);
  uVar12 = __alldiv(uVar10 << 0x1e,((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2,0x1f40000,0);
  iStack_24 = (int)((ulonglong)uVar12 >> 0x20);
  lVar13 = __allmul(*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x18),
                    *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1c),uStack_30);
  lVar11 = __allmul(lVar13 >> 0xf,lVar11 + 0x8000);
  lVar11 = __allmul(lVar11 >> 0xf,(uint)uVar12 + 0x8000,
                    iStack_24 + (uint)(0xffff7fff < (uint)uVar12));
  uVar10 = *(uint *)(param_1 + 0x58);
  lVar11 = __allmul(lVar11 >> 0xf,uVar10 << 0xf,((int)uVar10 >> 0x1f) << 0xf | uVar10 >> 0x11);
  lVar11 = lVar11 >> 0xf;
  uVar8 = (uint)lVar11 >> 0xf | (int)((ulonglong)lVar11 >> 0x20) << 0x11;
  if (0 < lVar11) {
    if (((int)uVar10 < 0xb) && (uVar8 == 0)) {
      ExceptionList = local_14;
      return uVar10;
    }
    if ((int)uVar10 < 100) {
      if (((int)(DAT_013f1ce4 + (DAT_013f1ce4 >> 0x1f & 3U)) >> 2) + DAT_013f1ce4 <=
          *(int *)(*(int *)(param_1 + 100) + 0x24)) {
        ExceptionList = local_14;
        return uVar10;
      }
      if (1 < (int)uVar8) {
        ExceptionList = local_14;
        return uVar8;
      }
      ExceptionList = local_14;
      return 1;
    }
  }
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = *(int *)(param_1 + 0x6c);
  if (*(int *)(*(int *)(iVar2 + 0x188) + 0x84) < 1) {
    if (*(char *)(*(int *)(iVar3 + 0x50) + 0x18) != '\0') goto LAB_0095b079;
    iVar9 = (int)uVar8 / 10;
  }
  else {
    if (*(char *)(*(int *)(iVar3 + 0x50) + 0x18) != '\0') goto LAB_0095b079;
    iVar9 = (int)uVar8 / 100;
  }
  iVar9 = iVar9 + ((int)uVar8 >> 0x1f);
  uVar8 = iVar9 - (iVar9 >> 0x1f);
LAB_0095b079:
  uVar10 = *(uint *)(iVar2 + 0x148);
  while ((*(uint *)(iVar2 + 0x148) <= uVar10 && (uVar10 < *(uint *)(iVar2 + 0x14c)))) {
    piVar1 = (int *)(uVar10 + 4);
    uVar10 = uVar10 + 8;
    if (iVar3 == *(int *)(*(int *)(iStack_34 + *piVar1 * 4) + 0xe64)) {
      uVar8 = (int)uVar8 / 100;
    }
  }
  ExceptionList = local_14;
  return uVar8;
}

