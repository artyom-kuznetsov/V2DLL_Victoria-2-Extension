// FUN_00669500 @ 00669500 body=[[00669500, 006695c9] [006695d0, 00669609] [00669610, 00669838]]


undefined4 FUN_00669500(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  iVar2 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar4 = *(int *)(DAT_012588e8 + 0xb0c);
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x2f1) = 0;
  if (*(char *)(iVar2 + 0xd11) != '\0') {
    ExceptionList = pvVar1;
    return 1;
  }
  iVar2 = FUN_00475500();
  iVar2 = *(int *)(iVar2 + 0x15c);
  if (iVar2 == 0) {
    iVar2 = FUN_00475500();
    switch(*(int *)(iVar2 + 0x160) + -1) {
    case 0:
      break;
    case 1:
      iVar4 = (iVar4 + -43800000) / 0x18;
      iVar3 = 0;
      iVar2 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
      if (-1 < iVar2) {
        do {
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 - (&DAT_00f1027c)[iVar3];
        } while (-1 < iVar2);
        if (iVar3 != 0) {
          iVar2 = 0;
          iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
          if (iVar4 < 0) {
            ExceptionList = local_10;
            return 1;
          }
          do {
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 - (&DAT_00f1027c)[iVar2];
          } while (-1 < iVar4);
          if (iVar2 != 6) {
            ExceptionList = local_10;
            return 1;
          }
        }
      }
      break;
    case 2:
      iVar4 = (iVar4 + -43800000) / 0x18;
      iVar2 = 0;
      for (iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
          -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar2]) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      break;
    case 3:
      iVar4 = (iVar4 + -43800000) / 0x18;
      iVar2 = 0;
      iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
      if (-1 < iVar4) {
        do {
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 - (&DAT_00f1027c)[iVar2];
        } while (-1 < iVar4);
        if (iVar2 != 0) {
          ExceptionList = local_10;
          return 1;
        }
      }
      iVar4 = FUN_00424a50();
      if (iVar4 % 5 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      break;
    default:
      goto switchD_00669569_default;
    }
  }
  else {
    iVar3 = FUN_00424930();
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar4 = (iVar4 + -43800000) / 0x18;
    iVar3 = 0;
    for (iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
        -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar3]) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 % iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  if ((char)in_ECX[0x17] != '\0') {
    iVar4 = (**(code **)(*in_ECX + 0x44))();
    if (*(char *)(iVar4 + 0x34) != '\0') {
      iVar4 = FUN_00aae9af(0x40);
      uVar5 = 0;
      local_8 = 0;
      if (iVar4 != 0) {
        uVar5 = FUN_0072d2f0(iVar4,1);
      }
      local_8 = 0xffffffff;
      iVar4 = (**(code **)(*in_ECX + 0x44))();
      (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar5);
      ExceptionList = local_10;
      return 1;
    }
    if ((char)in_ECX[0x17] != '\0') {
      ExceptionList = local_10;
      return 1;
    }
  }
  *(undefined1 *)(in_ECX + 0x2f1) = 1;
switchD_00669569_default:
  ExceptionList = local_10;
  return 1;
}

