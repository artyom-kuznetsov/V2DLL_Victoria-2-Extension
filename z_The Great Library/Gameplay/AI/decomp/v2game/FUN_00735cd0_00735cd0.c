// FUN_00735cd0 @ 00735cd0 body=[[00735cd0, 00735d38] [00735d3c, 00735d9e] [00735da2, 00735db9]]


int FUN_00735cd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93920;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("queue_unit_entry",0x10);
  local_8 = 0;
  iVar1 = (**(code **)(*DAT_01258a80 + 0x48))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_18 = *(undefined4 *)(iVar1 + 0xa8);
  iVar1 = *(int *)(iVar1 + 0xac);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("queue",5);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 0x7c))(local_50);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return (int)(short)((uint)*(undefined4 *)(iVar2 + 0xe8) >> 0x10) / iVar1;
}

