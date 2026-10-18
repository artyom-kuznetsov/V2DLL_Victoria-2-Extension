// FUN_00a65e60 @ 00a65e60 body=[[00a65e60, 00a65ea8] [00a65eb0, 00a65edc] [00a65f4b, 00a65f82]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a65e60(void)

{
  DWORD DVar1;
  int in_ECX;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b547d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xb8) = 0;
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))();
  local_8 = 0;
  for (uVar2 = *(uint *)(*(int *)(in_ECX + 0x18) + 0x20);
      uVar2 < (uint)(*(int *)(*(int *)(in_ECX + 0x18) + 0x24) * 0xe8 +
                    *(int *)(*(int *)(in_ECX + 0x18) + 0x20)); uVar2 = uVar2 + 0xe8) {
    FUN_00a8a450();
    FUN_00a8a360();
  }
  local_8 = 0xffffffff;
  DVar1 = timeGetTime();
  DAT_012586d0 = DVar1 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  ExceptionList = local_10;
  return;
}

