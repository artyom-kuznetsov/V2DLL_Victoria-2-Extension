// FUN_00a66b30 @ 00a66b30 body=[[00a66b30, 00a66c8f]]


void FUN_00a66b30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 local_20;
  char local_1f;
  int *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ce26;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffee8;
  if (*(char *)((int)param_1 + 0x36) == '\0') {
    piVar1 = (int *)(in_ECX + 0x108);
    LOCK();
    iVar3 = *piVar1;
    ExceptionList = &pvStack_10;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    param_1[0xe] = iVar3;
    iVar3 = *(int *)(in_ECX + 0x100);
    local_1c = (int *)(iVar3 + 0x80);
    LOCK();
    local_18 = (undefined4 *)*local_1c;
    *local_1c = *local_1c + 1;
    UNLOCK();
    local_14 = &stack0xfffffee8;
    FUN_00a6a9f0(iVar3 + 0x180 + ((int)local_18 * 3 & 7U) * 0x14,&param_1,local_18,in_ECX + 0xfc);
    FUN_00a66d63();
    return;
  }
  ExceptionList = &pvStack_10;
  local_18 = (undefined4 *)FUN_00aae9af(0x3c);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[0xd] = 0xf;
    local_18[0xc] = 0;
    *(undefined1 *)(local_18 + 8) = 0;
  }
  puVar2 = local_18;
  local_8 = 0;
  iVar3 = FUN_00aae9af(0x3c);
  local_8._0_1_ = 1;
  if (iVar3 == 0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = (undefined4 *)FUN_009d5450(iVar3,puVar2,1,0,0);
  }
  local_2c = &PTR_FUN_00e38528;
  local_28 = 0;
  local_1f = '\x01';
  local_20 = *(char *)((int)local_24 + 0x13) != '\0';
  local_8._0_1_ = 2;
  (**(code **)(*param_1 + 0x1c))();
  FUN_009a0940(&local_2c);
  (**(code **)(*param_1 + 4))(&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = &PTR_FUN_00e38528;
  if ((local_24 != (undefined4 *)0x0) && (local_1f != '\0')) {
    (**(code **)*local_24)(1);
  }
  local_8 = 0xffffffff;
  FUN_00a66ca5();
  return;
}

