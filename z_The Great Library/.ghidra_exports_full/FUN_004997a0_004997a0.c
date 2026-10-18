// FUN_004997a0 @ 004997a0 body=[[004997a0, 00499893]]


void FUN_004997a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b4e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(undefined4 **)(param_1 + 0x2130) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(param_1 + 0x2130))();
  }
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar2 = (undefined4 *)FUN_00992740(iVar1,param_1 + 0x20d8,0);
  }
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)FUN_00aae9af();
  local_8 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00e3ba2c;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[6] = 0;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    FUN_009d9790();
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x2130) = puVar3;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)();
  }
  ExceptionList = local_10;
  return;
}

