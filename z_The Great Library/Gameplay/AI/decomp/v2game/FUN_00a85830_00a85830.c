// FUN_00a85830 @ 00a85830 body=[[00a85830, 00a8587a] [00a8587e, 00a85898] [00a8589c, 00a858b0] [00a858b4, 00a858d9] [00a858dd, 00a85904]]


void FUN_00a85830(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d524;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e443a0;
  local_8 = 2;
  iVar1 = in_ECX[0x5e];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  iVar1 = in_ECX[0x5f];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (0xf < (uint)in_ECX[0x5b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x56]);
  }
  in_ECX[0x5b] = 0xf;
  in_ECX[0x5a] = 0;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  if (in_ECX[0x50] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x50]);
  }
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  FUN_007d9930();
  ExceptionList = local_10;
  return;
}

