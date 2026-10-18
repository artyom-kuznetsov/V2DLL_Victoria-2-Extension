// FUN_00a7c4f0 @ 00a7c4f0 body=[[00a7c4f0, 00a7c53a] [00a7c541, 00a7c556] [00a7c55c, 00a7c574]]


void FUN_00a7c4f0(void)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_00b3a21b;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar4 = *(int *)(in_ECX + 0x50);
  if (iVar4 != 0) {
    iVar1 = *(int *)(in_ECX + 0x54);
    ppvVar3 = &local_10;
    for (; ExceptionList = ppvVar3, iVar4 != iVar1; iVar4 = iVar4 + 0x60) {
      FUN_00a7c4f0();
      ppvVar3 = ExceptionList;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x50));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  if (*(int *)(in_ECX + 0x40) == 0) {
    *(undefined4 *)(in_ECX + 0x40) = 0;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
    ExceptionList = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 0x40));
}

