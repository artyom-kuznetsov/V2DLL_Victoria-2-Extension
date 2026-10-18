// FUN_00501b80 @ 00501b80 body=[[00501b80, 00501c37]]


void FUN_00501b80(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5f8f8;
  local_1c = 0;
  local_8 = 0;
  piVar1 = (int *)*param_2;
  puVar4 = (undefined4 *)0x0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (puVar3 = puVar4, piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    piVar1 = (int *)piVar1[2];
    uVar2 = *(undefined4 *)(iVar5 + 0x50);
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = uVar2;
      puVar4[1] = puVar3;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar5 = local_1c + 1;
    bVar6 = local_1c != 0;
    local_1c = iVar5;
    if (bVar6) {
      puVar3[2] = puVar4;
    }
  }
  FUN_00409c60(param_3);
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

