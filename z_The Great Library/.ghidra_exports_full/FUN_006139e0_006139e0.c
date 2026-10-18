// FUN_006139e0 @ 006139e0 body=[[006139e0, 00613a77] [00613a7b, 00613a9f]]


void FUN_006139e0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  iVar2 = *(int *)(unaff_ESI + 0x44);
  if (iVar2 < 1) {
    if (iVar2 != 0) {
      return;
    }
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0x54) + 0x40))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  else {
    iVar2 = iVar2 + -1;
    ExceptionList = &local_10;
    *(int *)(unaff_ESI + 0x44) = iVar2;
    iVar1 = *(int *)(unaff_ESI + 0x34);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = *(int *)(iVar1 + 0x20);
    }
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0x54) + 0x40))(iVar1);
  }
  FUN_009b6400(*(undefined4 *)(unaff_ESI + 0x28));
  ExceptionList = local_10;
  return;
}

