// FUN_004e02e0 @ 004e02e0 body=[[004e02e0, 004e03c3] [004e03d0, 004e0486]]


void FUN_004e02e0(int param_1,int param_2)

{
  uint uVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_180 [24];
  uint local_168;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cf4d;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  iVar4 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar2, iVar5 = iVar4 + 0x160, iVar5 != param_2) {
      local_1c = iVar5;
      local_18 = iVar5;
      FUN_004dff10(local_180,iVar5);
      uVar6 = local_168;
      local_8 = 0;
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar3 = local_168;
      if (uVar1 <= local_168) {
        uVar3 = uVar1;
      }
      uVar3 = FUN_00414bd0(uVar3);
      if (uVar3 == 0) {
        if (uVar6 < uVar1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar6 != uVar1);
        }
      }
      if ((int)uVar3 < 0) {
        FUN_004e0900(param_1,iVar4 + 0x2c0,param_1);
        FUN_004dcf00(local_180);
      }
      else {
        iVar4 = iVar4 + 0x168;
        while( true ) {
          uVar1 = *(uint *)(iVar4 + -0x150);
          uVar3 = uVar6;
          if (uVar1 <= uVar6) {
            uVar3 = uVar1;
          }
          uVar3 = FUN_00414bd0(uVar3);
          if (uVar3 == 0) {
            if (uVar6 < uVar1) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (uint)(uVar6 != uVar1);
            }
          }
          if (-1 < (int)uVar3) break;
          iVar5 = iVar4 + -0x168;
          FUN_004dcf00(iVar5);
          iVar4 = iVar4 + -0x160;
          uVar6 = local_168;
          local_18 = iVar5;
        }
        FUN_004dcf00(local_180);
        iVar5 = local_1c;
      }
      local_8 = 0xffffffff;
      FUN_004dd290(local_180);
      ppvVar2 = ExceptionList;
      iVar4 = iVar5;
    }
  }
  ExceptionList = local_10;
  return;
}

