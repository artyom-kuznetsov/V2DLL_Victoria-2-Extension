// FUN_00ada510 @ 00ada510 body=[[00ada510, 00ada5a9]]


void FUN_00ada510(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3735c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = (*(code *)PTR_FUN_00f01b08)
                    (0x24,600,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00aef060();
  }
  iVar2 = param_1[1];
  uVar4 = iVar2 + 1;
  uStack_4 = 0xffffffff;
  param_1[1] = uVar4;
  if ((uint)param_1[2] < uVar4) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*param_1 + -4 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar3;
  }
  ExceptionList = local_c;
  return;
}

