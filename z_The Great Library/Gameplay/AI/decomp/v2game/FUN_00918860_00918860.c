// FUN_00918860 @ 00918860 body=[[00918860, 009189c1] [009189c5, 009189e6] [009189ea, 00918a0c] [00918a10, 00918a40] [00918a44, 00918c88]]


void FUN_00918860(undefined4 *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  int *piVar12;
  undefined8 uVar13;
  int iStack_a8;
  int iStack_a4;
  uint uStack_8c;
  undefined1 local_88;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4b87;
  pvStack_14 = ExceptionList;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("TERMS",5);
  local_c = 0;
  uVar8 = FUN_00929480(local_34);
  puStack_10._0_1_ = 1;
  uStack_5c = 0xf;
  uStack_60 = 0;
  auStack_70[0] = auStack_70[0] & 0xffffff00;
  FUN_00408ed0(&uStack_8c,0,0xffffffff);
  puStack_10._0_1_ = 2;
  uStack_40 = 0xf;
  uStack_44 = 0;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  FUN_00408ed0(uVar8,0,0xffffffff);
  puStack_10._0_1_ = 3;
  iVar10 = param_1[1];
  puVar9 = (undefined1 *)FUN_00aae9af(0x44);
  puStack_10._0_1_ = 4;
  uVar7 = puStack_10._0_1_;
  puStack_10._0_1_ = 4;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar7;
  }
  else {
    *(undefined4 *)(puVar9 + 0x14) = 0xf;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    *puVar9 = 0;
    FUN_00408ed0(auStack_70,0,0xffffffff);
    puStack_10._0_1_ = 5;
    *(undefined4 *)(puVar9 + 0x30) = 0xf;
    *(undefined4 *)(puVar9 + 0x2c) = 0;
    puVar9[0x1c] = 0;
    FUN_00408ed0(auStack_54,0,0xffffffff);
    *(int *)(puVar9 + 0x38) = iVar10;
    *(undefined4 *)(puVar9 + 0x3c) = 0;
    puVar9[0x40] = 0;
  }
  iVar11 = param_1[2];
  param_1[1] = puVar9;
  param_1[2] = iVar11 + 1;
  if (iVar11 == 0) {
    *param_1 = puVar9;
  }
  else {
    *(undefined1 **)(iVar10 + 0x3c) = puVar9;
  }
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_54[0]);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_70[0]);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  auStack_70[0] = auStack_70[0] & 0xffffff00;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  puStack_10 = (undefined1 *)0xffffffff;
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_8c);
  }
  local_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  iVar10 = FUN_00936fc0(*(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                    *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                                  *(int *)(in_ECX + 0x14) * 4) + 0x34),in_ECX + 8,
                        (undefined4 *)(in_ECX + 0x10),0);
  cVar2 = *(char *)(in_ECX + 0x31);
  if (((0x32 < iVar10) &&
      (iVar10 = FUN_0083de70(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),1),
      iVar10 == 100)) || (cVar2 != '\0')) {
    iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
    *(int *)(iVar10 + 0x680) =
         *(int *)(iVar10 + 0x680) + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x448);
    if (*(int *)(iVar10 + 0x680) < 0) {
      *(undefined4 *)(iVar10 + 0x680) = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar10 + 0xa60) + 0x28);
      if (iVar11 < *(int *)(iVar10 + 0x680)) {
        *(int *)(iVar10 + 0x680) = iVar11;
      }
    }
    if (DAT_0131bb34 == 0) {
      iVar10 = FUN_00aae9af(0x188);
      puStack_10 = (undefined1 *)0x6;
      if (iVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_0041a160();
      }
      FUN_00423700(uVar8);
    }
    iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
    piVar12 = *(int **)(iVar10 + 0x9d8);
    iVar11 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    while ((*(int **)(iVar10 + 0x9d8) <= piVar12 && (piVar12 < *(int **)(iVar10 + 0x9dc)))) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar12 * 4);
      piVar12 = piVar12 + 1;
      if (0 < iVar11) {
        iStack_a8 = 0;
        iStack_a4 = iVar11;
        do {
          iVar5 = *(int *)(iStack_a8 + *(int *)(iVar3 + 0x194));
joined_r0x00918bcc:
          iVar6 = iVar5;
          if (iVar6 != 0) {
            uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x444);
            iVar5 = *(int *)(iVar6 + 0x27c);
            uVar13 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
            puVar1 = (uint *)(iVar6 + 0x120);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + (uint)uVar13;
            *(int *)(iVar6 + 0x124) =
                 *(int *)(iVar6 + 0x124) + (int)((ulonglong)uVar13 >> 0x20) +
                 (uint)CARRY4(uVar4,(uint)uVar13);
            if (*(int *)(iVar6 + 0x124) < 1) goto code_r0x00918c12;
            goto LAB_00918c3e;
          }
          iStack_a8 = iStack_a8 + 0x10;
          iStack_a4 = iStack_a4 + -1;
        } while (iStack_a4 != 0);
      }
    }
  }
  ExceptionList = pvStack_18;
  return;
code_r0x00918c12:
  if (*(int *)(iVar6 + 0x124) < 0) {
    *(undefined4 *)(iVar6 + 0x120) = 0;
    *(undefined4 *)(iVar6 + 0x124) = 0;
  }
  if ((-1 < *(int *)(iVar6 + 0x124)) &&
     ((0 < *(int *)(iVar6 + 0x124) || (0x50000 < *(uint *)(iVar6 + 0x120))))) {
LAB_00918c3e:
    *(undefined4 *)(iVar6 + 0x120) = 0x50000;
    *(undefined4 *)(iVar6 + 0x124) = 0;
  }
  goto joined_r0x00918bcc;
}

