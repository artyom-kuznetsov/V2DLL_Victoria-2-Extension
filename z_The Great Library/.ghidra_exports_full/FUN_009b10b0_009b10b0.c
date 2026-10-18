// FUN_009b10b0 @ 009b10b0 body=[[009b10b0, 009b10fa]]


void FUN_009b10b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x5c);
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
  iVar2 = *(int *)(unaff_ESI + 0x60);
  *(int *)(unaff_ESI + 0x60) = iVar2 + 1;
  *(undefined4 **)(unaff_ESI + 0x5c) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0x58) = puVar3;
  return;
}

