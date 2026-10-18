// FUN_006e0150 @ 006e0150 body=[[006e0150, 006e0253]]


void FUN_006e0150(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e412;
  local_10 = ExceptionList;
  uVar1 = param_1[1];
  if ((in_ECX < uVar1) && (uVar2 = *param_1, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_006e0350();
    }
    puVar3 = (undefined1 *)param_1[1];
    iVar4 = ((int)(in_ECX - uVar2) / 0x30) * 0x30 + *param_1;
    local_8 = 0;
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      FUN_00408ed0(iVar4,0,0xffffffff);
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_006e0350();
    }
    puVar3 = (undefined1 *)param_1[1];
    local_8 = 1;
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
      *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
      *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
      *(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
    }
  }
  param_1[1] = param_1[1] + 0x30;
  ExceptionList = local_10;
  return;
}

