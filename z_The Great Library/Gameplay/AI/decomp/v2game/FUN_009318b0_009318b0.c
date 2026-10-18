// FUN_009318b0 @ 009318b0 body=[[009318b0, 00931abb]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_009318b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined **local_34 [3];
  undefined **local_28 [3];
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b421d6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CWar::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0x18d;
  param_1[3] = 43800000;
  param_1[3] = DAT_01259abc;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  _DAT_012588d0 = _DAT_012588d0 + 1;
  param_1[0x13] = CHistoryContainer::vftable;
  param_1[0x14] = 0x18d;
  param_1[0x15] = 43800000;
  param_1[0x15] = DAT_01259abc;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = CWarHistory::vftable;
  param_1[0x1b] = param_1;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x1f] = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 == 0) {
    local_1c = (char *)0x0;
    std::exception::exception((exception *)local_34,&local_1c);
    local_34[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00e6fb20);
  }
  param_1[0x1e] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1e];
  *(undefined4 *)(param_1[0x1e] + 8) = param_1[0x1e];
  *(undefined1 *)(param_1[0x1e] + 0x14) = 1;
  *(undefined1 *)(param_1[0x1e] + 0x15) = 1;
  local_8 = 4;
  local_18 = 0x2d2d2d;
  param_1[0x21] = 0x2d2d2d;
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  param_1[0x24] = param_3;
  param_1[0x25] = param_4;
  param_1[0x26] = param_5;
  FUN_0094be20();
  param_1[0x39] = 0;
  iVar1 = FUN_00aae9af(0x24);
  if (iVar1 != 0) {
    param_1[0x38] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x38] + 4) = param_1[0x38];
    *(undefined4 *)(param_1[0x38] + 8) = param_1[0x38];
    *(undefined1 *)(param_1[0x38] + 0x20) = 1;
    *(undefined1 *)(param_1[0x38] + 0x21) = 1;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    iVar1 = DAT_012588e8;
    _local_8 = CONCAT31(uStack_7,6);
    *(undefined2 *)(param_1 + 0x3f) = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = *(undefined4 *)(iVar1 + 0xb0c);
    FUN_00938300(param_2,param_3,unaff_EDI);
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_28,&local_14);
  local_28[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00e6fb20);
}

