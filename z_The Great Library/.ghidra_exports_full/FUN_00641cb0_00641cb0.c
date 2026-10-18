// FUN_00641cb0 @ 00641cb0 body=[[00641cb0, 00641eee]]


int FUN_00641cb0(int param_1,char *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  uint uVar4;
  undefined4 in_EDX;
  uint uVar5;
  undefined **local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b70023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(char **)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = in_ECX;
  *(undefined4 *)(param_1 + 0x10) = in_EDX;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar2 = FUN_00aae9af(0x18);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x40) = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(param_1 + 0x40);
    *(int *)(*(int *)(param_1 + 0x40) + 8) = *(int *)(param_1 + 0x40);
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x14) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x15) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0x4e4f4e;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    param_2 = (char *)(param_1 + 0xac);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined ***)param_2 = CCityGroup::vftable;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    local_8 = 7;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    iVar2 = FUN_00475500();
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar2 + 0x104);
    local_8 = 8;
    uVar1 = local_8;
    local_8 = 8;
    *(int *)(param_1 + 0x88) = DAT_012588d8;
    DAT_012588d8 = DAT_012588d8 + 1;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) % 0xf;
    if (DAT_0125ce80 == 0) {
      param_2 = (char *)FUN_00aae9af(0x3c);
      local_8 = 9;
      if (param_2 == (char *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004dada0();
      }
      local_8 = 8;
      FUN_004dc340(uVar3);
      uVar1 = local_8;
    }
    local_8 = uVar1;
    param_2 = (char *)0x0;
    iVar2 = *(int *)(param_1 + 0x58);
    uVar5 = *(int *)(DAT_0125ce80 + 0x20) - *(int *)(DAT_0125ce80 + 0x1c) >> 2;
    uVar4 = iVar2 - *(int *)(param_1 + 0x54) >> 2;
    if (uVar4 < uVar5) {
      FUN_0043cb20(param_1 + 0x54,iVar2,&param_2);
    }
    else if (uVar5 < uVar4) {
      FUN_0054ab90(param_1 + 0x54,*(int *)(param_1 + 0x54) + uVar5 * 4,iVar2);
    }
    iVar2 = *(int *)(param_1 + 0x68);
    uVar4 = iVar2 - *(int *)(param_1 + 100) >> 2;
    param_2 = (char *)0xffffffff;
    if (uVar4 < uVar5) {
      FUN_0043cb20(param_1 + 100,iVar2,&param_2);
    }
    else if (uVar5 < uVar4) {
      FUN_0054ab90(param_1 + 100,*(int *)(param_1 + 100) + uVar5 * 4,iVar2);
    }
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_1c,&param_2);
  local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_00e6fb20);
}

