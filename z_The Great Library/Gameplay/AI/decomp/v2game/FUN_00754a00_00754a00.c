// FUN_00754a00 @ 00754a00 body=[[00754a00, 00754c0d] [00754c11, 00754c54] [00754c58, 00754de2]]


undefined4 *
FUN_00754a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00647d30(param_1,param_3);
  local_8 = 0;
  puVar1 = param_1 + 0x22;
  *puVar1 = CReloadDispatcher::vftable;
  *param_1 = CFrontEnd::vftable;
  *puVar1 = CFrontEnd::vftable;
  param_1[0x24] = 0;
  FUN_00648970(param_1 + 0x26);
  FUN_0075a8c0(FUN_00758200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_18 = 0x2d2d2d;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x2d2d2d;
  param_1[0x6f] = 0;
  param_1[0x75] = 0xf;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  local_8._0_1_ = 3;
  param_1[0x79] = param_2;
  param_1[0x7a] = param_4;
  FUN_0098b350(param_1 + 0x7b);
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  local_8._0_1_ = 5;
  FUN_0063f480(param_1 + 0xe0);
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  FUN_0055c6c0(DAT_012587e4,param_1 + 0x1c4,&DAT_00e0cb1c);
  param_1[0x1c8] = FUN_00757770;
  param_1[0x1c6] = CScrollbarObserverGlue<CFrontEnd>::vftable;
  param_1[0x1c7] = param_1;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  local_8._0_1_ = 9;
  param_1[0x1d7] = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)((int)param_1 + 0x762) = 0;
  param_1[0x1d9] = 0;
  *(undefined2 *)(param_1 + 0x1da) = 0;
  param_1[0x1db] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("interface/temp_frontend.gui",0x1b);
  local_8._0_1_ = 10;
  FUN_009a4bd0(local_34,puVar1);
  local_8._0_1_ = 9;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("click",5);
  local_8._0_1_ = 0xb;
  FUN_00408ed0(local_34,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    *(undefined1 *)(DAT_012588e8 + 0xd1c) = 0;
    FUN_00688050();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    piVar3 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
    param_1[0xdf] = piVar3;
    (**(code **)(*piVar3 + 4))();
    if (*(char *)((int)param_1 + 0x6d6) == '\0') {
      param_1[0x1ad] = 0;
      param_1[0x1ae] = 0;
      param_1[0x1af] = param_1[0x1ad];
      param_1[0x1b0] = param_1[0x1ae];
    }
    pcVar2 = *(code **)(param_1[0xe0] + 0x180);
    param_1[0x1b1] = 0x44610000;
    param_1[0x1b2] = 0x44610000;
    param_1[0x19a] = 0;
    param_1[0x19b] = 0x44610000;
    param_1[0x19c] = 0;
    (*pcVar2)(param_1 + 0x19d);
    (**(code **)(param_1[0xe0] + 0x17c))(param_1 + 0x19a);
    if (DAT_012588dc != 0) {
      *(undefined4 *)(DAT_012588dc + 0x3654) = 0;
    }
    *(undefined1 *)((int)param_1 + 0x6d5) = 1;
    FUN_004a0fa0();
    FUN_00682b40(DAT_012588e8);
    if (DAT_01262ef4 == 0) {
      iVar4 = FUN_00aae9af(0x44);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if (iVar4 == 0) {
        FUN_006a59b0(0);
        *(undefined1 *)(DAT_01262ef4 + 0x30) = 0;
      }
      else {
        uVar5 = FUN_006a4e30();
        FUN_006a59b0(uVar5);
        *(undefined1 *)(DAT_01262ef4 + 0x30) = 0;
      }
    }
    else {
      *(undefined1 *)(DAT_01262ef4 + 0x30) = 0;
    }
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

