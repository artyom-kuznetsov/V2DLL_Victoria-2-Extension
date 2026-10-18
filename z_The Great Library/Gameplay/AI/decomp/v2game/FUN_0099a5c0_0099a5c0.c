// FUN_0099a5c0 @ 0099a5c0 body=[[0099a5c0, 0099a626]]


void FUN_0099a5c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0xec);
  puVar3 = (undefined4 *)FUN_00aae9af(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = param_2;
    *puVar3 = &PTR_FUN_00e40cd8;
    puVar3[2] = param_1;
    puVar3[3] = iVar1;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0xf0);
  *(int *)(unaff_ESI + 0xf0) = iVar2 + 1;
  *(undefined4 **)(unaff_ESI + 0xec) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 0x10) = puVar3;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0xe8) = puVar3;
  return;
}

