// FUN_009dc0c0 @ 009dc0c0 body=[[009dc0c0, 009dc21f]]


undefined4 FUN_009dc0c0(void *param_1,size_t param_2)

{
  size_t sVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b49efb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  sVar1 = _fread(param_1,param_2,1,*(FILE **)(in_ECX + 0x34));
  if (sVar1 == 1) {
    ExceptionList = local_14;
    return 1;
  }
  iVar2 = _ferror(*(FILE **)(in_ECX + 0x34));
  if (iVar2 != 0) {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = 0;
    FUN_00409350();
    local_c = 0;
    FUN_00409350("Error reading datafile",0x16);
    FUN_009d77e0(0x159,local_74);
    local_c._0_1_ = 1;
    FUN_00408ed0();
    local_c._0_1_ = 2;
    FUN_00408ed0();
    local_c = CONCAT31(local_c._1_3_,1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  ExceptionList = local_14;
  return 0;
}

