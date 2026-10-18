// FUN_005f8110 @ 005f8110 body=[[005f8110, 005f825e] [005f8262, 005f8337]]


undefined4 * FUN_005f8110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb918f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00647d30(param_1,param_3);
  param_1[0x22] = CReloadDispatcher::vftable;
  *param_1 = CBackEndIdler::vftable;
  param_1[0x22] = CBackEndIdler::vftable;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = param_3;
  param_1[0x27] = param_2;
  param_1[0x28] = param_4;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_0098b350(param_1 + 0x2f);
  local_8._0_1_ = 3;
  param_1[0x8e] = 0;
  FUN_0063f480(param_1 + 0x8f);
  FUN_005fccc0(FUN_005fb560,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_005fccc0(&LAB_005fb680,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 6;
  param_1[0x194] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("interface/backend.gui",0x15);
  local_8._0_1_ = 7;
  FUN_009a4bd0(local_2c,param_1 + 0x22);
  local_8._0_1_ = 6;
  if (local_18 < 0x10) {
    *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_004a0fa0();
    FUN_00682b40(DAT_012588e8);
    if (DAT_01262ef4 == 0) {
      iVar1 = FUN_00aae9af(0x44);
      local_8._0_1_ = 8;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_006a4e30();
      }
      local_8._0_1_ = 6;
      FUN_006a59b0(uVar2);
    }
    piVar3 = DAT_00f20c18;
    *(undefined1 *)(DAT_01262ef4 + 0x30) = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_00aae9af(4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
        DAT_00f20c18 = piVar3;
      }
      else {
        *piVar3 = (int)&PTR_FUN_00e38b28;
        DAT_00f20c18 = piVar3;
      }
    }
    piVar4 = (int *)(**(code **)(*piVar3 + 4))();
    piVar3 = (int *)param_1[0x29];
    if ((piVar4 != piVar3) && (piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)(1);
    }
    param_1[0x29] = piVar4;
    (**(code **)(*piVar4 + 4))();
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

