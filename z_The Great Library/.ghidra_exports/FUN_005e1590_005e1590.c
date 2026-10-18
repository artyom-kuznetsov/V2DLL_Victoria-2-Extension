// FUN_005e1590 @ 005e1590  (requested 005E1590, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_005e1590(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  int local_a4;
  uint auStack_94 [4];
  undefined4 uStack_84;
  uint uStack_80;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9fa93;
  local_a4 = 0;
  ppvVar4 = &local_14;
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  local_14 = ExceptionList;
  iVar3 = local_a4;
  do {
    ExceptionList = ppvVar4;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_14;
      return;
    }
    local_c = 0xffffffff;
    puVar1 = (undefined4 *)puVar2[0xb];
    local_40 = *puVar2;
    local_3c = puVar2[1];
    local_38 = puVar2[2];
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00408ed0(puVar2 + 3,0,0xffffffff);
    local_c = 0;
    iVar6 = DAT_01258a94;
    if (local_3c < 0x1269) {
      iVar6 = DAT_01258a98;
    }
    if ((iVar6 == 0) || (iVar6 = FUN_009c1d40(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + -8;
    }
    local_a4 = iVar3;
    local_40 = iVar6;
    if ((iVar6 != 0) && (local_a4 = iVar6, iVar3 != 0)) {
      FUN_005d5bc0(iVar3);
      FUN_0068aa10(iVar6);
      cVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x144))();
      local_a4 = iVar3;
      if (cVar5 != '\0') {
        uStack_64 = 0xf;
        uStack_68 = 0;
        auStack_78[0] = auStack_78[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_c._0_1_ = 3;
        uStack_48 = 0xf;
        uStack_4c = 0;
        auStack_5c[0] = auStack_5c[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_c._0_1_ = 4;
        uStack_80 = 0xf;
        uStack_84 = 0;
        auStack_94[0] = auStack_94[0] & 0xffffff00;
        FUN_00409350("subunit_merge",0xd);
        local_c = CONCAT31(local_c._1_3_,5);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(auStack_94,auStack_5c,auStack_78,0);
        if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_94[0]);
        }
        uStack_80 = 0xf;
        uStack_84 = 0;
        auStack_94[0] = auStack_94[0] & 0xffffff00;
        if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_5c[0]);
        }
        uStack_48 = 0xf;
        uStack_4c = 0;
        auStack_5c[0] = auStack_5c[0] & 0xffffff00;
        if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_78[0]);
        }
        uStack_64 = 0xf;
        uStack_68 = 0;
        auStack_78[0] = auStack_78[0] & 0xffffff00;
      }
    }
    local_c = 0xffffffff;
    ppvVar4 = ExceptionList;
    puVar2 = puVar1;
    iVar3 = local_a4;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
  } while( true );
}

