// FUN_0050e3f0 @ 0050e3f0 body=[[0050e3f0, 0050e449]]


void FUN_0050e3f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0xa0c);
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
  iVar2 = *(int *)(unaff_ESI + 0xa10);
  *(int *)(unaff_ESI + 0xa10) = iVar2 + 1;
  *(undefined4 **)(unaff_ESI + 0xa0c) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0xa08) = puVar3;
  return;
}

