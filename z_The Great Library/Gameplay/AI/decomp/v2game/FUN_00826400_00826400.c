// FUN_00826400 @ 00826400 body=[[00826400, 0082644f]]


void FUN_00826400(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x48);
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
  iVar2 = *(int *)(in_ECX + 0x4c);
  *(int *)(in_ECX + 0x4c) = iVar2 + 1;
  *(undefined4 **)(in_ECX + 0x48) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(in_ECX + 0x44) = puVar3;
  return;
}

