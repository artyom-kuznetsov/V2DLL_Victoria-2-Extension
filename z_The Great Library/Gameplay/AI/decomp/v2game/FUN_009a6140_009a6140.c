// FUN_009a6140 @ 009a6140 body=[[009a6140, 009a61ed]]


undefined1 * FUN_009a6140(undefined1 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined **local_20 [3];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e3e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  piVar1 = (int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_14 = piVar1;
  iVar2 = FUN_00aae9af(0xc);
  if (iVar2 != 0) {
    *piVar1 = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(*piVar1 + 4) = *piVar1;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_009a5b50();
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_20,&param_2);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

