// FUN_00718b60 @ 00718b60 body=[[00718b60, 00718c0a] [00718c0e, 00718c1d]]


void FUN_00718b60(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
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
  FUN_00718f30();
  FUN_0066bd60(4,0);
  iVar1 = *(int *)(in_ECX + 0x24);
  if (0x10 < (int)(*(int *)(iVar1 + 0xd84) - *(int *)(iVar1 + 0xd80) & 0xfffffffcU)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 0xd80) + 0x10) + 0x1c))();
    if (cVar2 != '\0') {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("topbarbutton_pops",0x11);
      local_8 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_2c);
      (**(code **)(*piVar3 + 0x48))(2);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

