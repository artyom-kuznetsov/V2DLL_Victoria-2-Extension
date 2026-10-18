// FUN_00825da0 @ 00825da0 body=[[00825da0, 00825def]]


void FUN_00825da0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = 0;
    puVar3[2] = iVar1;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x5c);
  *(int *)(in_ECX + 0x5c) = iVar2 + 1;
  *(undefined4 **)(in_ECX + 0x54) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar3;
    return;
  }
  *(undefined4 **)(in_ECX + 0x58) = puVar3;
  return;
}

