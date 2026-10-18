// FUN_004e2ce0 @ 004e2ce0 body=[[004e2ce0, 004e2d38]]


void FUN_004e2ce0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x84);
  puVar3 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = *in_EAX;
    puVar3[1] = in_EAX[1];
    puVar3[2] = iVar1;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x88);
  *(undefined4 **)(unaff_ESI + 0x84) = puVar3;
  *(int *)(unaff_ESI + 0x88) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 0xc) = puVar3;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0x80) = puVar3;
  return;
}

