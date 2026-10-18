// FUN_0040e690 @ 0040e690 body=[[0040e690, 0040e737] [0040e73b, 0040e781]]


void FUN_0040e690(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4de63;
  local_14 = ExceptionList;
  iVar3 = 0;
  if ((*(int *)(in_ECX + 0x390) != 0) && (*(char *)(*(int *)(in_ECX + 0x390) + 0x1f0) == '\0')) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x260);
    local_c = 0;
    if (iVar1 != 0) {
      iVar3 = FUN_00401670(iVar1,*(undefined4 *)(in_ECX + 0x80));
    }
    local_c = 0xffffffff;
    uVar2 = FUN_004063b0(*(undefined4 *)(in_ECX + 0x390));
    local_c = 1;
    FUN_00403580(iVar3,uVar2);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    FUN_00407b10();
    *(undefined1 *)(iVar3 + 0x1cc) = 1;
    FUN_0068f390();
    FUN_004123a0(in_ECX);
    FUN_0040f4d0();
  }
  ExceptionList = local_14;
  return;
}

