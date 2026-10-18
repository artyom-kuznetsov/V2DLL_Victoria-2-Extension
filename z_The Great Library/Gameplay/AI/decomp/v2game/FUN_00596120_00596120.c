// FUN_00596120 @ 00596120 body=[[00596120, 00596186] [0059618a, 005961c9] [005961cd, 005961f6]]


void FUN_00596120(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_ESI;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [5];
  uint local_34;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fa60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0072d4e0(&local_54,in_ECX);
  local_8 = 0;
  *(undefined4 *)(unaff_ESI + 8) = local_54;
  *(undefined4 *)(unaff_ESI + 0xc) = local_50;
  *(undefined4 *)(unaff_ESI + 0x10) = local_4c;
  FUN_00408ed0(local_48,0,0xffffffff);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  *(undefined4 *)(unaff_ESI + 0x5c) = 3;
  *(undefined4 *)(unaff_ESI + 0x68) = *(undefined4 *)(in_ECX[0xe] + 0x2c);
  uVar2 = (**(code **)(*in_ECX + 0x20))(local_2c);
  local_8 = 1;
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar1 = in_ECX[0x1d];
  *(undefined4 *)(unaff_ESI + 0x88) = *(undefined4 *)(iVar1 + 0xc0);
  *(undefined4 *)(unaff_ESI + 0x8c) = *(undefined4 *)(iVar1 + 0xc4);
  ExceptionList = local_10;
  return;
}

