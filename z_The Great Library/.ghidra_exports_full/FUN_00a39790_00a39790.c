// FUN_00a39790 @ 00a39790 body=[[00a39790, 00a397f7]]


void FUN_00a39790(void)

{
  int iVar1;
  int unaff_ESI;
  undefined **local_14 [3];
  char *local_8;
  
  *(undefined4 *)(unaff_ESI + 8) = 0;
  iVar1 = FUN_00aae9af(0x30);
  if (iVar1 != 0) {
    *(int *)(unaff_ESI + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x2c) = 1;
    *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x2d) = 1;
    return;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

