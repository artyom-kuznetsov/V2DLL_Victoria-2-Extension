// FUN_005dcea0 @ 005dcea0 body=[[005dcea0, 005dcf72] [005dcf76, 005dd12d] [005dd131, 005dd14d] [005dd151, 005dd16d] [005dd171, 005dd185]]


void FUN_005dcea0(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  undefined8 uVar6;
  int local_98;
  int local_94;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 auStack_38 [5];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9566e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_98 = FUN_00aae9af(0x144);
  piVar5 = (int *)0x0;
  local_c = 0;
  if (local_98 != 0) {
    piVar5 = (int *)FUN_005b61c0(local_98);
  }
  local_c = 0xffffffff;
  local_94 = DAT_00f096c4;
  local_98 = 0x25;
  DAT_00f096c4 = DAT_00f096c4 + 1;
  (**(code **)(*piVar5 + 0x18))(&local_98);
  local_94 = *(undefined4 *)(in_ECX + 0x3c);
  uVar4 = FUN_00537800(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4),
                       auStack_38);
  puStack_10 = (undefined1 *)0x1;
  FUN_00408ed0(uVar4,0,0xffffffff);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_38[0]);
  }
  iVar2 = *(int *)(in_ECX + 0x40);
  piVar5[0x23] = *(int *)(in_ECX + 0x3c);
  piVar5[0x24] = iVar2;
  piVar5[0x2c] = *(int *)(in_ECX + 0x44);
  FUN_005b8030(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40));
  uVar3 = *(uint *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
  uVar6 = __alldiv(uVar3 << 0x1e,
                   (((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2,
                   0x1f40000,0);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  puVar1 = (uint *)(iVar2 + 2000);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - (uint)uVar6;
  *(int *)(iVar2 + 0x7d4) =
       (*(int *)(iVar2 + 0x7d4) - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(uVar3 < (uint)uVar6);
  if ((*(int *)(iVar2 + 0x7d4) < 1) && (*(int *)(iVar2 + 0x7d4) < 0)) {
    *(undefined4 *)(iVar2 + 2000) = 0;
    *(undefined4 *)(iVar2 + 0x7d4) = 0;
  }
  local_94 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_0050e760(piVar5,1);
  local_94 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4));
  if ((*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) &&
     ((**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(7),
     *(char *)(DAT_012588e8 + 0xd11) != '\0')) {
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10 = (undefined1 *)0x2;
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10._0_1_ = 3;
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    FUN_00409350("MILITARY_CREATE_GENERAL",0x17);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(auStack_8c,auStack_70,auStack_54,0);
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_8c[0]);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_70[0]);
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_54[0]);
    }
  }
  ExceptionList = pvStack_18;
  return;
}

