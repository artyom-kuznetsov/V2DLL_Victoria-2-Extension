// FUN_009b6700 @ 009b6700 body=[[009b6700, 009b6759]]


void FUN_009b6700(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x198);
  puVar3 = (undefined1 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *puVar3 = param_1;
    *(int *)(puVar3 + 4) = iVar1;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[0xc] = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x19c);
  *(int *)(unaff_ESI + 0x19c) = iVar2 + 1;
  *(undefined1 **)(unaff_ESI + 0x198) = puVar3;
  if (iVar2 != 0) {
    *(undefined1 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined1 **)(unaff_ESI + 0x194) = puVar3;
  return;
}

