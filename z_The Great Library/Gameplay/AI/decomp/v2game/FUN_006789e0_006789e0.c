// FUN_006789e0 @ 006789e0 body=[[006789e0, 00678a39]]


void FUN_006789e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xdb4);
  iVar2 = *(int *)(in_ECX + 0xbcc);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar1;
    puVar4[1] = 0;
    puVar4[2] = iVar2;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0xbd4);
  *(undefined4 **)(in_ECX + 0xbcc) = puVar4;
  *(int *)(in_ECX + 0xbd4) = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 4) = puVar4;
    return;
  }
  *(undefined4 **)(in_ECX + 0xbd0) = puVar4;
  return;
}

