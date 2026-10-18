// FUN_009a3a30 @ 009a3a30 body=[[009a3a30, 009a3adc] [009a3ae0, 009a3af4]]


undefined4 FUN_009a3a30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a0d4;
  local_10 = ExceptionList;
  uVar3 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xb8);
  local_8 = 0;
  local_18 = iVar1;
  if (iVar1 != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00e385c4,3);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    iVar2 = FUN_00973bd0(local_34);
    if (iVar2 == 0) {
      iVar2 = FUN_00973bd0(local_34);
    }
    uVar3 = FUN_009f4bc0(iVar1,in_ECX + 0x7c,iVar2);
  }
  if (((local_14 & 1) != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return uVar3;
}

