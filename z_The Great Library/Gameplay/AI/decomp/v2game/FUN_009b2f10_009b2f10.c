// FUN_009b2f10 @ 009b2f10 body=[[009b2f10, 009b2f7d]]


void FUN_009b2f10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
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
  iVar2 = *(int *)(in_ECX + 0x10);
  *(undefined4 **)(in_ECX + 0xc) = puVar3;
  *(int *)(in_ECX + 0x10) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 8) = puVar3;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar3;
  }
  if (in_ECX != 0) {
    FUN_004136e0(in_ECX + 4);
    return;
  }
  FUN_004136e0(0);
  return;
}

