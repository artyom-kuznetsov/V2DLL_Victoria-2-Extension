// FUN_008b2080 @ 008b2080 body=[[008b2080, 008b210b] [008b210f, 008b2123]]


undefined4 FUN_008b2080(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30 [5];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  uStack_3c = param_1;
  uStack_40 = 0;
  local_14 = local_5c;
  iVar1 = *(int *)(in_ECX + 8);
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  puVar2 = local_30;
  (**(code **)(*(int *)(iVar1 + 0x98) + 0x20))(puVar2,in_ECX + 0xc,0);
  local_8 = 0;
  FUN_00989330(puVar2);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

