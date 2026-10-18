// FUN_00549920 @ 00549920 body=[[00549920, 00549929] [00549930, 00549977]]


void FUN_00549920(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_EAX;
  undefined4 *puVar4;
  undefined4 *unaff_ESI;
  
  for (puVar1 = (undefined4 *)*in_EAX; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]
      ) {
    iVar2 = unaff_ESI[1];
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = *puVar1;
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar3 = unaff_ESI[2];
    unaff_ESI[1] = puVar4;
    unaff_ESI[2] = iVar3 + 1;
    if (iVar3 == 0) {
      *unaff_ESI = puVar4;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
  }
  return;
}

