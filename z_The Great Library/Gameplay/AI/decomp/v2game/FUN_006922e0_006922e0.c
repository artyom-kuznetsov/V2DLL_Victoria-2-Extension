// FUN_006922e0 @ 006922e0 body=[[006922e0, 00692365] [00692369, 0069238b] [0069238f, 006923b2]]


void FUN_006922e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("goto_edit",9);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x40))(local_30);
  puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))(local_4c);
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar1 = FUN_00aaf0c5(puVar2);
  local_11 = iVar1 == 0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 0xffffffff;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_006923c0(in_ECX,0);
  ExceptionList = local_10;
  return;
}

