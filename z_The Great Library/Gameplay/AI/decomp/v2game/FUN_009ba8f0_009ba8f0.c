// FUN_009ba8f0 @ 009ba8f0 body=[[009ba8f0, 009bad10]]


void FUN_009ba8f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_1d5 [5];
  undefined1 local_1d0 [28];
  undefined1 local_1b4 [408];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b56d2c;
  local_14 = ExceptionList;
  if (param_2 < 0x156) {
    if (param_2 == 0x155) {
      ExceptionList = &local_14;
      iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x34);
      if (iVar2 != 0) {
        ExceptionList = local_14;
        return;
      }
      FUN_009a1140();
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x2e:
      ExceptionList = &local_14;
      FUN_009a1e10();
      if (*(int *)(in_ECX + 0x38) < 0x400) {
        FUN_009885d0();
        local_c = 0;
        FUN_004015b0(local_1d0,499,0x1000);
        local_c._0_1_ = 1;
        uVar1 = FUN_00987d20(0x400);
        uVar1 = FUN_00455470(uVar1);
        FUN_00401280(uVar1);
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
        *(int *)(in_ECX + 0x38) = 0x400;
      }
      if (0x2cf < *(int *)(in_ECX + 0x3c)) {
        ExceptionList = local_14;
        return;
      }
      FUN_009885d0();
      local_c = 2;
      FUN_004015b0(local_1b4,0x1f8,0x1000);
      local_c = CONCAT31(local_c._1_3_,3);
      uVar1 = FUN_00987d20(0x2d0);
      uVar1 = FUN_00455470(uVar1);
      FUN_00401280(uVar1);
      local_14 = (void *)CONCAT31(local_14._1_3_,2);
      FUN_00401650();
      FUN_00408ad0();
      *(undefined4 *)(in_ECX + 0x3c) = 0x2d0;
      ExceptionList = pvStack_1c;
      return;
    case 0x2f:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x44);
      ExceptionList = local_14;
      return;
    case 0x5f:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x60:
      ExceptionList = &local_14;
      FUN_009a1bb0(local_1d5);
      ExceptionList = local_14;
      return;
    case 0x61:
switchD_009ba93f_caseD_61:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x62:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x50);
      ExceptionList = local_14;
      return;
    case 0x6e:
      ExceptionList = &local_14;
      FUN_009a1bb0(local_1d5);
      ExceptionList = local_14;
      return;
    case 0x70:
      ExceptionList = &local_14;
      FUN_009a1bb0(local_1d5);
      ExceptionList = local_14;
      return;
    case 0x75:
      ExceptionList = &local_14;
      FUN_009a1de0();
      ExceptionList = local_14;
      return;
    case 0x11d:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x32);
      ExceptionList = local_14;
      return;
    case 0x11e:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x33);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x162:
    case 0x163:
      goto switchD_009ba93f_caseD_61;
    case 0x168:
      ExceptionList = &local_14;
      FUN_009a1c10();
      if (*(int *)(in_ECX + 0x58) < 1) {
        *(undefined4 *)(in_ECX + 0x58) = 0x100;
      }
      if (0x1000 < *(int *)(in_ECX + 0x58)) {
        *(undefined4 *)(in_ECX + 0x58) = 0x1000;
      }
      uVar1 = FUN_00a1df30();
      *(undefined4 *)(in_ECX + 0x58) = uVar1;
      ExceptionList = local_14;
      return;
    case 0x183:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x184:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x1bd:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x45);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

