// FUN_004449f0 @ 004449f0 body=[[004449f0, 00444d9a]]


void FUN_004449f0(char *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  undefined **local_2c [3];
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51eb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((char)param_1 != '\0') && (ExceptionList = &local_10, param_2 != (int *)0x0)) {
    iVar2 = (*param_2 + -43800000) / 0x18;
    iVar4 = 0;
    for (iVar2 = (iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0)) - DAT_00f1027c;
        -1 < iVar2; iVar2 = iVar2 - (&DAT_00f1027c)[iVar4]) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 == in_ECX[6]) {
      param_1 = (char *)((uint)param_1 & 0xffffff00);
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      in_ECX[6] = iVar4;
    }
  }
  pcVar1 = param_1;
  FUN_00444820();
  FUN_00444820(in_ECX + 1,pcVar1);
  param_2 = in_ECX + 2;
  FUN_00444970(param_2,pcVar1);
  local_14 = in_ECX + 3;
  FUN_00444970(local_14,pcVar1);
  local_18 = in_ECX + 4;
  FUN_00444970(local_18,pcVar1);
  local_1c = in_ECX + 5;
  FUN_00444970(local_1c,pcVar1);
  if (((char)param_1 == '\0') && (*in_ECX != 0)) {
    ExceptionList = local_10;
    return;
  }
  iVar2 = FUN_00aae9af(0x10);
  local_8 = 0;
  local_20 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
LAB_00444b56:
    local_8 = 0xffffffff;
    *in_ECX = iVar2;
    iVar2 = FUN_00aae9af(0x10);
    local_8 = 1;
    local_20 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      iVar4 = FUN_00aae9af(0x24);
      if (iVar4 == 0) goto LAB_00444bad;
      *(int *)(iVar2 + 4) = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
      *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x20) = 1;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x21) = 1;
    }
    local_8 = 0xffffffff;
    in_ECX[1] = iVar2;
    iVar2 = FUN_00aae9af(0x10);
    local_8 = 2;
    local_20 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      iVar4 = FUN_00aae9af(0x18);
      if (iVar4 == 0) {
        param_1 = (char *)0x0;
        std::exception::exception((exception *)local_2c,&param_1);
        local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_2c,&DAT_00e6fb20);
      }
      *(int *)(iVar2 + 4) = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
      *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x14) = 1;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x15) = 1;
    }
    local_8 = 0xffffffff;
    *param_2 = iVar2;
    piVar3 = (int *)FUN_00aae9af(0x10);
    local_8 = 3;
    param_2 = piVar3;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[2] = 0;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
LAB_00444bad:
        param_1 = (char *)0x0;
        std::exception::exception((exception *)local_2c,&param_1);
        local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_2c,&DAT_00e6fb20);
      }
      piVar3[1] = iVar2;
      *(int *)iVar2 = iVar2;
      *(int *)(piVar3[1] + 4) = piVar3[1];
      *(int *)(piVar3[1] + 8) = piVar3[1];
      *(undefined1 *)(piVar3[1] + 0x14) = 1;
      *(undefined1 *)(piVar3[1] + 0x15) = 1;
    }
    local_8 = 0xffffffff;
    *local_14 = (int)piVar3;
    piVar3 = (int *)FUN_00aae9af(0x10);
    local_8 = 4;
    param_2 = piVar3;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[2] = 0;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) goto LAB_00444b33;
      piVar3[1] = iVar2;
      *(int *)iVar2 = iVar2;
      *(int *)(piVar3[1] + 4) = piVar3[1];
      *(int *)(piVar3[1] + 8) = piVar3[1];
      *(undefined1 *)(piVar3[1] + 0x14) = 1;
      *(undefined1 *)(piVar3[1] + 0x15) = 1;
    }
    local_8 = 0xffffffff;
    *local_18 = (int)piVar3;
    piVar3 = (int *)FUN_00aae9af(0x10);
    local_8 = 5;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[2] = 0;
      param_2 = piVar3;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
        param_1 = (char *)0x0;
        std::exception::exception((exception *)local_2c,&param_1);
        goto LAB_00444b4f;
      }
      piVar3[1] = iVar2;
      *(int *)iVar2 = iVar2;
      *(int *)(piVar3[1] + 4) = piVar3[1];
      *(int *)(piVar3[1] + 8) = piVar3[1];
      *(undefined1 *)(piVar3[1] + 0x14) = 1;
      *(undefined1 *)(piVar3[1] + 0x15) = 1;
    }
    *local_1c = (int)piVar3;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  iVar4 = FUN_00aae9af(0x24);
  if (iVar4 != 0) {
    *(int *)(iVar2 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
    *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0x20) = 1;
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0x21) = 1;
    goto LAB_00444b56;
  }
LAB_00444b33:
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_2c,&param_1);
LAB_00444b4f:
  local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_2c,&DAT_00e6fb20);
}

