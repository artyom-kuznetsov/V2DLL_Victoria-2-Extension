// FUN_00593e00 @ 00593e00 body=[[00593e00, 00593e79]]


void FUN_00593e00(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *in_ECX;
  undefined1 auStack_8c [16];
  undefined4 uStack_7c;
  char *pcStack_78;
  undefined1 **ppuStack_74;
  undefined1 *local_60;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_34;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b53c90;
  local_14 = ExceptionList;
  if (param_2 < 0x36b) {
    if (param_2 == 0x36a) {
      ppuStack_74 = (undefined1 **)(param_1 + 0x22c);
      pcStack_78 = (char *)0x593eff;
      ExceptionList = &local_14;
      iVar4 = FUN_00aaf0c5();
      in_ECX[0xc] = iVar4;
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2f9) {
      local_60 = auStack_8c;
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_005ab780();
      uStack_c = 0;
      ppuStack_74 = (undefined1 **)0x593ea6;
      FUN_0072d580();
      ppuStack_74 = (undefined1 **)0x593eab;
      iVar4 = FUN_005ab7f0();
      if (iVar4 != 0) {
        iVar4 = *in_ECX;
        ppuStack_74 = (undefined1 **)0x593eba;
        ppuStack_74 = (undefined1 **)FUN_005ab7f0();
        pcStack_78 = (char *)0x593ec4;
        (**(code **)(iVar4 + 0x2c))();
      }
      if (uStack_20 < 0x10) {
        ExceptionList = local_14;
        return;
      }
      ppuStack_74 = (undefined1 **)uStack_34;
                    /* WARNING: Subroutine does not return */
      pcStack_78 = &UNK_00593ed9;
      FUN_00aae91b();
    }
    if (param_2 == 0x352) {
      ppuStack_74 = &local_60;
      pcStack_78 = (char *)(param_1 + 0x228);
      uStack_7c = 0x593e5d;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60();
      in_ECX[0x15] = *piVar2;
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x6ad) {
    ppuStack_74 = (undefined1 **)(in_ECX + 0x16);
    pcStack_78 = (char *)param_1;
    uStack_7c = 0x593ff2;
    ExceptionList = &local_14;
    FUN_0042d650();
    ExceptionList = local_14;
    return;
  }
  pcStack_78 = (char *)(param_1 + 0x24);
  uStack_48 = 0xf;
  uStack_4c = 0;
  auStack_5c[0] = auStack_5c[0] & 0xffffff00;
  pcVar3 = pcStack_78;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ppuStack_74 = (undefined1 **)((int)pcVar3 - (param_1 + 0x25));
  uStack_7c = 0x593f59;
  ExceptionList = &local_14;
  FUN_00409350();
  uStack_c = 1;
  ppuStack_74 = (undefined1 **)0x593f66;
  FUN_005c1a10();
  ppuStack_74 = (undefined1 **)auStack_5c;
  pcStack_78 = (char *)0x593f70;
  piVar2 = (int *)FUN_005c2ad0();
  uStack_c = 0xffffffff;
  if (uStack_48 < 0x10) {
    uStack_48 = 0xf;
    uStack_4c = 0;
    auStack_5c[0] = auStack_5c[0] & 0xffffff00;
    if (piVar2 != (int *)0x0) {
      ppuStack_74 = (undefined1 **)0x593fab;
      cVar1 = (**(code **)(*piVar2 + 0x24))();
      if (cVar1 != '\0') {
        ppuStack_74 = (undefined1 **)(param_1 + 0x22c);
        pcStack_78 = (char *)0x593fbb;
        iVar4 = FUN_00aaf0c5();
        *(int *)(in_ECX[0x11] + piVar2[9] * 4) = iVar4 * 1000;
        ExceptionList = local_14;
        return;
      }
    }
    ExceptionList = local_14;
    return;
  }
  ppuStack_74 = (undefined1 **)auStack_5c[0];
                    /* WARNING: Subroutine does not return */
  pcStack_78 = &UNK_00593f8b;
  FUN_00aae91b();
}

