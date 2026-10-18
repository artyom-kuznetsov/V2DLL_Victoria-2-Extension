// FUN_00aaa000 @ 00aaa000 body=[[00aaa000, 00aaa073]]


void FUN_00aaa000(void)

{
  int iVar1;
  int in_ECX;
  undefined **local_14 [3];
  char *local_8;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 != 0) {
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    *(undefined1 *)(*(int *)(in_ECX + 4) + 0x14) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 4) + 0x15) = 1;
    *(undefined4 *)(in_ECX + 0x10) = DAT_00ef2004;
    return;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

