// FUN_00a78530 @ 00a78530 body=[[00a78530, 00a78592]]


void FUN_00a78530(char *param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  undefined **local_10 [3];
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(unaff_ESI + 4);
    puVar1[1] = *(undefined4 *)(unaff_ESI + 4);
    puVar1[2] = *(undefined4 *)(unaff_ESI + 4);
    *(undefined2 *)(puVar1 + 4) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *(undefined4 *)param_1;
    }
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

