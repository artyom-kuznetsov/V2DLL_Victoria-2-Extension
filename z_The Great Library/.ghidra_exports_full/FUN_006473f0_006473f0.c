// FUN_006473f0 @ 006473f0 body=[[006473f0, 0064744c]]


void FUN_006473f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f08e8 = DAT_013f08e8 + 1;
  }
  iVar1 = *(int *)(in_ECX + 8);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0xc);
  *(undefined4 **)(in_ECX + 8) = puVar3;
  *(int *)(in_ECX + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar3;
  return;
}

