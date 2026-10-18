// FUN_005b8450 @ 005b8450 body=[[005b8450, 005b84fb]]


void FUN_005b8450(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_ESI;
  
  iVar1 = param_1[3];
  while (iVar1 != 0) {
    iVar1 = *unaff_ESI;
    uVar2 = *(undefined4 *)(*param_1 + 0x58);
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
    param_1 = (int *)param_1[3];
    iVar1 = param_1[3];
  }
  uVar2 = *(undefined4 *)(*param_1 + 0x58);
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

