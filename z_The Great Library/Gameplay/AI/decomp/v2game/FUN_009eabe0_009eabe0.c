// FUN_009eabe0 @ 009eabe0 body=[[009eabe0, 009eac0c] [009eac10, 009ead10] [009ead14, 009eadca] [009eadce, 009eade2]]


undefined4 FUN_009eabe0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 *in_stack_00000024;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  int *piStack_38;
  undefined *local_34;
  int *local_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  puVar6 = &DAT_0131cb70;
  ExceptionList = &local_10;
  while( true ) {
    uVar4 = puVar6[4];
    puStack_28 = (undefined4 *)in_stack_00000018;
    if (uVar4 <= in_stack_00000018) {
      puStack_28 = (undefined4 *)uVar4;
    }
    piStack_2c = (int *)0x9eac3a;
    iVar3 = FUN_00414bd0();
    bVar7 = false;
    if (iVar3 == 0) {
      if (in_stack_00000018 < uVar4) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(in_stack_00000018 != uVar4);
      }
      bVar7 = uVar4 == 0;
    }
    if ((bVar7) && ((&DAT_00f20c60)[local_14] != 0)) break;
    local_14 = local_14 + 1;
    puVar6 = puVar6 + 7;
    if (0x132036f < (int)puVar6) {
LAB_009eac9e:
      puStack_28 = (undefined4 *)0xffffffff;
      piStack_2c = (int *)0x0;
      local_30 = &param_2;
      local_34 = (undefined *)0x9eacbf;
      FUN_00408ed0();
      puVar2 = in_stack_00000024;
      if (local_14 == 0x200) {
        puStack_28 = (undefined4 *)in_stack_00000024;
        in_stack_00000024 = local_44;
        local_30 = (int *)0xf;
        local_34 = (undefined *)0x0;
        local_44[0] = 0;
        FUN_00408ed0(&param_2,0,0xffffffff);
        iVar3 = FUN_009eafc0();
        (&DAT_00f20c60)[DAT_00fc0c60] = iVar3;
        if (iVar3 == 0) {
          if (0xf < in_stack_0000001c) {
            puStack_28 = (undefined4 *)param_2;
                    /* WARNING: Subroutine does not return */
            piStack_2c = (int *)&UNK_009ead11;
            FUN_00aae91b();
          }
          ExceptionList = local_10;
          return 0;
        }
      }
      piStack_2c = (int *)(&DAT_00f20c60)[DAT_00fc0c60];
      puStack_28 = &local_18;
      local_18 = 0;
      local_30 = (int *)0x9ead44;
      (**(code **)(*piStack_2c + 0x20))();
      iVar3 = DAT_00fc0c60;
      iVar5 = DAT_00fc0c60 * 0x10;
      (&DAT_00f40c60)[DAT_00fc0c60 * 4] = 0;
      (&DAT_00f40c64)[iVar5] = 0;
      if (puVar2 == (undefined1 *)0x1) {
        iVar5 = 0x200;
        do {
          local_34 = (undefined *)(&DAT_00f20c60)[iVar3];
          local_30 = &DAT_00f20c60 + iVar5 + iVar3;
          piStack_38 = DAT_00f20c5c;
          uStack_3c = 0x9ead85;
          (**(code **)(*DAT_00f20c5c + 0x14))();
          iVar3 = DAT_00fc0c60;
          iVar1 = iVar5 + DAT_00fc0c60;
          iVar5 = iVar5 + 0x200;
          (&DAT_00f40c60)[iVar1 * 4] = 0;
          (&DAT_00f40c64)[iVar1 * 0x10] = 0;
        } while (iVar5 < 0x8000);
      }
      *(int *)(&DAT_00fc0c88 + param_1 * 4) = iVar3;
      DAT_00fc0c60 = iVar3 + 1;
      if (0xf < in_stack_0000001c) {
        local_30 = (int *)param_2;
                    /* WARNING: Subroutine does not return */
        local_34 = &UNK_009eadcb;
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  piStack_2c = (int *)(&DAT_00f20c60)[local_14];
  puStack_28 = &DAT_00f20c60 + DAT_00fc0c60;
  local_30 = DAT_00f20c5c;
  local_34 = (undefined *)0x9eac9e;
  (**(code **)(*DAT_00f20c5c + 0x14))();
  goto LAB_009eac9e;
}

