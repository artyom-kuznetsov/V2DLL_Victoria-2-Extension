// FUN_009f4900 @ 009f4900 body=[[009f4900, 009f49e1]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_009f4900(char *param_1)

{
  int iVar1;
  undefined **local_20 [3];
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  local_14 = &DAT_013203a0;
  _DAT_013203b4 = 0xf;
  _DAT_013203b0 = 0;
  DAT_013203a0 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  _DAT_013203c0 = 0;
  _DAT_013203c8 = 0;
  _DAT_013203d0 = 0;
  _DAT_013203d8 = 0;
  _DAT_013203e4 = 0;
  iVar1 = FUN_00aae9af(0x58);
  if (iVar1 != 0) {
    DAT_013203e0 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(DAT_013203e0 + 4) = DAT_013203e0;
    _DAT_013203ec = 0;
    ExceptionList = local_10;
    return &DAT_013203a0;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_20,&param_1);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

