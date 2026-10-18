// FUN_004b5f60 @ 004b5f60 body=[[004b5f60, 004b5fcf]]


void FUN_004b5f60(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  int *unaff_EDI;
  
  pcVar1 = *(code **)(*unaff_EDI + 0x20);
  unaff_EDI[0x12] = unaff_ESI;
  (*pcVar1)();
  for (puVar4 = *(undefined4 **)(unaff_ESI + 0xd8); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    if ((int *)*puVar4 == unaff_EDI) {
      return;
    }
  }
  iVar2 = *(int *)(unaff_ESI + 0xdc);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = unaff_EDI;
    puVar4[1] = iVar2;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = *(int *)(unaff_ESI + 0xe0);
  *(undefined4 **)(unaff_ESI + 0xdc) = puVar4;
  *(int *)(unaff_ESI + 0xe0) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(unaff_ESI + 0xd8) = puVar4;
    return;
  }
  *(undefined4 **)(iVar2 + 8) = puVar4;
  return;
}

