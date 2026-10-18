// FUN_009a52c0 @ 009a52c0 body=[[009a52c0, 009a53cf] [009a53d9, 009a53de] [009a53e2, 009a544a]]


int FUN_009a52c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  int *local_6c;
  char *local_68;
  int *local_64;
  undefined4 local_60;
  undefined **local_58 [3];
  undefined **local_4c [3];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  int local_24 [4];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3e430;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar3 = FUN_009a59b0(in_ECX);
  if (iVar3 != *(int *)(param_1 + 4)) {
    cVar2 = FUN_0098ab20();
    if (cVar2 == '\0') {
      ExceptionList = local_14;
      return iVar3 + 0x28;
    }
  }
  local_60 = 0;
  local_64 = (int *)FUN_00aae9af(0xc);
  if (local_64 == (int *)0x0) {
    local_6c = (int *)0x0;
    std::exception::exception((exception *)local_4c,(char **)&local_6c);
    local_4c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_4c,&DAT_00e6fb20);
  }
  *local_64 = (int)local_64;
  local_64[1] = (int)local_64;
  local_c = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = 0;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_c._0_1_ = 1;
  local_6c = local_24;
  local_24[1] = 0;
  local_24[0] = FUN_00aae9af(0xc);
  if (local_24[0] == 0) {
    local_68 = (char *)0x0;
    std::exception::exception((exception *)local_58,&local_68);
    local_58[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_58,&DAT_00e6fb20);
  }
  *(int *)local_24[0] = local_24[0];
  *(int *)(local_24[0] + 4) = local_24[0];
  local_c._0_1_ = 2;
  FUN_009a5b50();
  local_c = CONCAT31(local_c._1_3_,3);
  uVar4 = FUN_009a60a0(local_40);
  FUN_009a5c20(iVar3,uVar4);
  FUN_009a56d0();
  piVar1 = (int *)*local_64;
  *local_64 = (int)local_64;
  local_64[1] = (int)local_64;
  if (piVar1 != local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64);
}

