// FUN_0048f620 @ 0048f620 body=[[0048f620, 0048f6d1]]


void FUN_0048f620(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_EAX;
  undefined4 *puVar4;
  int *unaff_ESI;
  
  iVar1 = in_EAX[2];
  while (iVar1 != -1) {
    iVar1 = *unaff_ESI;
    uVar2 = *in_EAX;
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = uVar2;
      puVar4[1] = 0;
      puVar4[2] = iVar1;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar3 = unaff_ESI[2];
    *unaff_ESI = (int)puVar4;
    unaff_ESI[2] = iVar3 + 1;
    if (iVar3 == 0) {
      unaff_ESI[1] = (int)puVar4;
    }
    else {
      *(undefined4 **)(iVar1 + 4) = puVar4;
    }
    in_EAX = (undefined4 *)(in_EAX[2] * 0x10 + *param_1);
    iVar1 = in_EAX[2];
  }
  uVar2 = *in_EAX;
  iVar1 = *unaff_ESI;
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar2;
    puVar4[1] = 0;
    puVar4[2] = iVar1;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = unaff_ESI[2];
  *unaff_ESI = (int)puVar4;
  unaff_ESI[2] = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar4;
    return;
  }
  unaff_ESI[1] = (int)puVar4;
  return;
}

