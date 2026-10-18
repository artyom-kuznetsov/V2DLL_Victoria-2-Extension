// FUN_00640d90 @ 00640d90 body=[[00640d90, 00640ee1]]


void FUN_00640d90(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b70046;
  local_10 = ExceptionList;
  if (param_2 != 0x26b) {
    ExceptionList = &local_10;
    FUN_009ce470(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0xb0);
  piVar5 = (int *)0x0;
  local_8 = 0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_009eca80(iVar2);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar5 + 0xc))(param_1);
  iVar2 = *(int *)(in_ECX + 0x150);
  uVar3 = (**(code **)(*piVar5 + 0x18))(piVar5);
  (**(code **)(iVar2 + 0x18))(uVar3);
  uVar3 = (**(code **)(*piVar5 + 0x18))();
  iVar2 = *(int *)(in_ECX + 0x2a8);
  puVar4 = (undefined1 *)FUN_00aae9af(0x28);
  local_8 = 1;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar4 + 0x14) = 0xf;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    FUN_00408ed0(uVar3,0,0xffffffff);
    *(int *)(puVar4 + 0x1c) = iVar2;
    *(undefined4 *)(puVar4 + 0x20) = 0;
    puVar4[0x24] = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x2ac);
  *(undefined1 **)(in_ECX + 0x2a8) = puVar4;
  *(int *)(in_ECX + 0x2ac) = iVar1 + 1;
  if (iVar1 != 0) {
    *(undefined1 **)(iVar2 + 0x20) = puVar4;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 **)(in_ECX + 0x2a4) = puVar4;
  ExceptionList = local_10;
  return;
}

