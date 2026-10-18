// FUN_005cfb80 @ 005cfb80 body=[[005cfb80, 005cfcee] [005cfcf2, 005cfd23] [005cfd27, 005cfd39]]


void FUN_005cfb80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_ECX;
  int *in_EDX;
  uint local_3c;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cac0;
  local_10 = ExceptionList;
  if (in_EDX[0x1d] != 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *in_ECX = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_EDX + 0x38))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_EDX + 0x2c))();
    if (*(int *)(iVar2 + 0x1b4) != 0) {
      iVar2 = (**(code **)(*in_EDX + 0x2c))();
      if (*(char *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x1b4) + 0xdc) + 0x5c) + 0x2a) == '\0') {
        FUN_009885d0();
        ExceptionList = local_10;
        return;
      }
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[0x31] * 4);
  iVar2 = __alldiv((longlong)in_EDX[0x2c] *
                   (longlong)
                   (*(int *)(*(int *)(iVar2 + 0xa60) + 0x58) + 1000 +
                    *(int *)(*(int *)(iVar2 + 0xbcc) + 0x3c) +
                   *(int *)(*(int *)(in_EDX[0x36] + 0x48) + 0x18)));
  FUN_00401000();
  iVar3 = FUN_00b31c00();
  __alldiv((longlong)iVar3 * (longlong)iVar2);
  FUN_00988a50();
  local_8 = 0;
  FUN_00988fa0();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  FUN_00408ed0();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

