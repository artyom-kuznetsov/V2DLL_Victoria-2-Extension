// FUN_00790c60 @ 00790c60 body=[[00790c60, 00790d30]]


void FUN_00790c60(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b973e6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0x78);
  uVar2 = 0;
  local_c = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00aae9af(0x30);
    local_c._0_1_ = 1;
    if (iVar3 != 0) {
      iVar3 = *(int *)(in_ECX + 600);
      puVar4 = (undefined4 *)FUN_00790ae0(in_ECX,local_20);
      FUN_00788d70(*(undefined4 *)(iVar3 + 0xc0),*(undefined4 *)(iVar3 + 0xc4),*puVar4,puVar4[1]);
    }
    local_c = (uint)local_c._1_3_ << 8;
    uVar2 = FUN_006186f0(iVar1,0);
  }
  local_c = 0xffffffff;
  FUN_006480e0(uVar2);
  ExceptionList = local_14;
  return;
}

