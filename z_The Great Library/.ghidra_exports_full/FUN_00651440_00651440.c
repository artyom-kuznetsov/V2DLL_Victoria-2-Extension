// FUN_00651440 @ 00651440 body=[[00651440, 0065147d] [00651480, 006515e0] [006515e4, 00651658] [0065165c, 0065168d]]


void FUN_00651440(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void **ppvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *in_ECX;
  int iVar11;
  bool bVar12;
  undefined1 auStack_58 [8];
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45330;
  iVar1 = *(int *)(DAT_012588e8 + 0x18);
  ppvVar6 = &local_14;
  puVar5 = (undefined4 *)in_ECX[0x586];
  local_14 = ExceptionList;
  iVar9 = DAT_012588e8;
  do {
    ExceptionList = ppvVar6;
    if ((iVar1 == 0) || (puVar5 == (undefined4 *)0x0)) {
      ExceptionList = local_14;
      DAT_012588e8 = iVar9;
      return;
    }
    puVar2 = (undefined4 *)puVar5[2];
    iVar11 = *(int *)(iVar9 + 0x18);
    piVar3 = (int *)*puVar5;
    DAT_012588e8 = iVar9;
    if (iVar11 != 0) {
      do {
        iVar4 = *(int *)(iVar11 + 0x1c);
        iVar7 = (**(code **)(**(int **)(iVar9 + 0xb24) + 0x44))();
        if (iVar4 == *(int *)(iVar7 + 0x6c)) goto LAB_006514d7;
        iVar11 = *(int *)(iVar11 + 0x3c);
      } while (iVar11 != 0);
    }
    iVar11 = iVar9 + 0x28;
LAB_006514d7:
    uVar10 = *(uint *)(iVar11 + 0x10);
    uVar8 = *(uint *)(iVar1 + 0x10);
    if (uVar10 < *(uint *)(iVar1 + 0x10)) {
      uVar8 = uVar10;
    }
    iVar9 = FUN_00414bd0(uVar8);
    bVar12 = false;
    if (iVar9 == 0) {
      if (uVar10 < *(uint *)(iVar1 + 0x10)) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = (uint)(uVar10 != *(uint *)(iVar1 + 0x10));
      }
      bVar12 = uVar10 == 0;
    }
    if (!bVar12) {
      iVar9 = *(int *)(iVar1 + 0x24);
      if ((iVar9 == *(int *)(DAT_012588e8 + 0xb60)) ||
         (iVar11 = (**(code **)(*in_ECX + 0x58))(auStack_58),
         *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 4) * 4)
                                   + 0xbe8) + iVar9 * 4) + 0x20) != 0)) {
        uStack_20 = 0xf;
        uStack_24 = 0;
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        FUN_00409350("shield",6);
        uStack_c = 0;
        (**(code **)(*piVar3 + 0x48))(auStack_34);
        FUN_009a8b10();
        uStack_c = 0xffffffff;
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        *(undefined1 *)(iVar1 + 0x29) = 1;
      }
      else {
        uStack_3c = 0xf;
        uStack_40 = 0;
        auStack_50[0] = auStack_50[0] & 0xffffff00;
        FUN_00409350("shield",6);
        uStack_c = 1;
        (**(code **)(*piVar3 + 0x48))(auStack_50);
        FUN_009a8bc0();
        uStack_c = 0xffffffff;
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        auStack_50[0] = auStack_50[0] & 0xffffff00;
        *(undefined1 *)(iVar1 + 0x29) = 0;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x3c);
    ppvVar6 = ExceptionList;
    puVar5 = puVar2;
    iVar9 = DAT_012588e8;
  } while( true );
}

