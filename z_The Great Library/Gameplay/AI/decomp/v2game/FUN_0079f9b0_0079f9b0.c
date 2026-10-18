// FUN_0079f9b0 @ 0079f9b0 body=[[0079f9b0, 0079fa65] [0079fa69, 0079fa7d]]


void FUN_0079f9b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43788;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x28;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    iVar2 = param_1 + 4 + iVar3 * 0x28;
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      local_3c = *(undefined4 *)(iVar2 + -0x2c);
      local_38 = *(undefined4 *)(iVar2 + -0x28);
      local_34 = *(undefined4 *)(iVar2 + -0x24);
      iVar3 = iVar3 + -1;
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      FUN_00408ed0(iVar2 + -0x20,0,0xffffffff);
      local_8 = 0;
      FUN_0079fef0(param_1,iVar3,iVar1,&local_3c,param_3);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      iVar2 = iVar2 + -0x28;
    } while (0 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

