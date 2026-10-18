// FUN_0088d9e0 @ 0088d9e0 body=[[0088d9e0, 0088da71] [0088da75, 0088da85]]


void FUN_0088d9e0(undefined4 param_1,int param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
  local_8 = 0;
  if (param_2 == 0x403) {
    ExceptionList = &local_10;
    FUN_009a1ce0();
  }
  else {
    if (param_2 != 0x449) {
      return;
    }
    ExceptionList = &local_10;
    FUN_009a1750(local_34,0);
    ppppuVar1 = (undefined4 ****)local_34[0];
    if (local_20 < 0x10) {
      ppppuVar1 = local_34;
    }
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,ppppuVar1);
    *(undefined4 *)(in_ECX + 0x20) = *puVar2;
    *(undefined4 *)(in_ECX + 0x24) = puVar2[1];
  }
  if (local_20 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

