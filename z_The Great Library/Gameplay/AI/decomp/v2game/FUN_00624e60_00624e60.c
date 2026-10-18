// FUN_00624e60 @ 00624e60 body=[[00624e60, 00624efc]]


void FUN_00624e60(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = (**(code **)(*param_1 + 0x80))();
  puVar3 = (undefined4 *)FUN_0062f7b0(in_ECX,&param_1,uVar2);
  piVar1 = (int *)*puVar3;
  *puVar3 = 0;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  piVar4 = (int *)(**(code **)(*piVar1 + 0x38))(*(undefined4 *)(in_ECX + 0x54));
  (**(code **)(*piVar4 + 0x28))();
  FUN_006480e0(piVar4);
  local_8 = 0xffffffff;
  (**(code **)*piVar1)(1);
  ExceptionList = local_10;
  return;
}

