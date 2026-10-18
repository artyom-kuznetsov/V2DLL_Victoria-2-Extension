// FUN_004e2c70 @ 004e2c70 body=[[004e2c70, 004e2cda]]


void FUN_004e2c70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  undefined4 *puVar5;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x14);
  uVar2 = *(undefined4 *)(in_EAX + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0x84);
  puVar5 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = uVar2;
    puVar5[1] = uVar1;
    puVar5[2] = iVar3;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
  }
  iVar4 = *(int *)(unaff_ESI + 0x88);
  *(undefined4 **)(unaff_ESI + 0x84) = puVar5;
  *(int *)(unaff_ESI + 0x88) = iVar4 + 1;
  if (iVar4 != 0) {
    *(undefined4 **)(iVar3 + 0xc) = puVar5;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0x80) = puVar5;
  return;
}

