// FUN_00987c40 @ 00987c40 body=[[00987c40, 00987cd4]]


void FUN_00987c40(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  int *local_8;
  
  piVar4 = DAT_00f20c10;
  local_8 = (int *)0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00f20c10 == (int *)0x0) {
    ExceptionList = &local_10;
    iVar5 = FUN_00aae9af(0xc);
    local_8 = piVar4;
    if (iVar5 == 0) {
      DAT_00f20c10 = (int *)0x0;
    }
    else {
      DAT_00f20c10 = (int *)FUN_009880e0();
    }
  }
  piVar4 = DAT_00f20c10;
  local_8 = (int *)0xffffffff;
  uVar1 = *param_1;
  uVar2 = DAT_00f20c10[1];
  puVar6 = (undefined4 *)FUN_00aae9af(8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(piVar4[2] + (uVar1 % uVar2) * 4);
    *puVar6 = param_1;
    puVar6[1] = uVar3;
  }
  *(undefined4 **)(piVar4[2] + (uVar1 % uVar2) * 4) = puVar6;
  *piVar4 = *piVar4 + 1;
  ExceptionList = local_10;
  return;
}

