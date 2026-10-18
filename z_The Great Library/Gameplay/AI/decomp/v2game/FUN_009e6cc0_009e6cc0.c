// FUN_009e6cc0 @ 009e6cc0 body=[[009e6cc0, 009e6d0a]]


void FUN_009e6cc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = *param_1;
    puVar3[1] = 0;
    puVar3[2] = iVar1;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = unaff_ESI[2];
  unaff_ESI[2] = iVar2 + 1;
  *unaff_ESI = (int)puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar3;
    return;
  }
  unaff_ESI[1] = (int)puVar3;
  return;
}

