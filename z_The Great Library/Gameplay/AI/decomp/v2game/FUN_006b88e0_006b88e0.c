// FUN_006b88e0 @ 006b88e0 body=[[006b88e0, 006b895e]]


void FUN_006b88e0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x5b8);
  puVar3 = (undefined8 *)FUN_00aae9af(0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = param_1[2];
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 3);
    *(int *)((int)puVar3 + 0x1c) = iVar1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 0x24) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x5bc);
  *(int *)(in_ECX + 0x5bc) = iVar2 + 1;
  *(undefined8 **)(in_ECX + 0x5b8) = puVar3;
  if (iVar2 != 0) {
    *(undefined8 **)(iVar1 + 0x20) = puVar3;
    return;
  }
  *(undefined8 **)(in_ECX + 0x5b4) = puVar3;
  return;
}

