// FUN_0047cf30 @ 0047cf30 body=[[0047cf30, 0047cf8a]]


void FUN_0047cf30(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  puVar3 = (undefined8 *)FUN_00aae9af(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = *param_1;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 1);
    *(int *)((int)puVar3 + 0xc) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 0x14) = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  in_ECX[1] = puVar3;
  if (iVar2 != 0) {
    *(undefined8 **)(iVar1 + 0x10) = puVar3;
    return;
  }
  *in_ECX = puVar3;
  return;
}

