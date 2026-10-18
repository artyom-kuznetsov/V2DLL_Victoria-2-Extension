// FUN_0046f020 @ 0046f020 body=[[0046f020, 0046f07f] [0046f083, 0046f0c3]]


int FUN_0046f020(int param_1)

{
  int iVar1;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("news_list_entry",0xf);
  local_8 = 0;
  iVar1 = (**(code **)(*DAT_01258a80 + 0x48))(local_34);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return (int)(short)((uint)*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xe8) >> 0x10) /
         *(int *)(iVar1 + 0xac);
}

