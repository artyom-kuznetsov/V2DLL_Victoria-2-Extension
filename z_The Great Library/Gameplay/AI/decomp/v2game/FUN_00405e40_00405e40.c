// FUN_00405e40 @ 00405e40 body=[[00405e40, 00405ed0] [00405ed4, 00405f14]]


void FUN_00405e40(void)

{
  int *piVar1;
  undefined4 uVar2;
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
  ExceptionList = &local_10;
  FUN_004063e0();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("mi_text",7);
  local_8 = 0;
  (**(code **)(**(int **)(unaff_ESI + 0x1d0) + 0x40))();
  piVar1 = (int *)FUN_005c2ad0(local_2c);
  uVar2 = (**(code **)(*piVar1 + 0x48))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x10))(uVar2);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0xc) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x144) = 0;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_18 = 0xf;
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x34))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x20))(*(undefined4 *)(unaff_ESI + 0xc));
  ExceptionList = local_10;
  return;
}

