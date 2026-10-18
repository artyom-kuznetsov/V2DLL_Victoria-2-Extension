// FUN_00a46fd0 @ 00a46fd0 body=[[00a46fd0, 00a47094] [00a470a6, 00a470c9]]


undefined4 * FUN_00a46fd0(undefined4 *param_1,Alignment **param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  char acStack_54 [8];
  undefined4 uStack_4c;
  Alignment *pAStack_48;
  undefined ***pppuStack_44;
  undefined **local_20 [3];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d948;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  *param_1 = 0;
  pppuStack_44 = (undefined ***)0xa47002;
  puVar1 = (undefined4 *)FUN_00aae9af();
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 **)*param_1 = param_1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_2 = &pAStack_48;
    local_8 = 1;
    uStack_4c = 0xa4703e;
    FUN_00816010();
    param_2 = (Alignment **)acStack_54;
    local_58 = 0xa4704d;
    FUN_0099e240();
    local_58 = 0xa47057;
    piVar2 = (int *)FUN_0099e240();
    param_2 = (Alignment **)&local_60;
    local_60 = 0;
    local_5c = 0;
    if (((int *)*piVar2 != (int *)0x0) &&
       (puVar1 = *(undefined4 **)*piVar2, puVar1 != (undefined4 *)0x0)) {
      local_60 = *puVar1;
    }
    local_58 = piVar2[2];
    FUN_00a47490(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (Alignment **)0x0;
  pppuStack_44 = (undefined ***)0xa470b5;
  std::exception::exception((exception *)local_20,(char **)&param_2);
  pppuStack_44 = local_20;
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  pAStack_48 = &UNK_00a470ca;
  __CxxThrowException_8();
}

