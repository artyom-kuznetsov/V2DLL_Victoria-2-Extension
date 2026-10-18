// FUN_009b3cf0 @ 009b3cf0 body=[[009b3cf0, 009b3d94]]


void FUN_009b3cf0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((param_2 != 0) && (param_2 != iVar1)) {
    iVar1 = *(int *)(param_2 + 8);
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = *param_1;
      puVar3[1] = param_2;
      puVar3[2] = iVar1;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    *(undefined4 **)(param_2 + 8) = puVar3;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 4) = puVar3;
    }
    unaff_ESI[2] = unaff_ESI[2] + 1;
    return;
  }
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = *param_1;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = unaff_ESI[2];
  unaff_ESI[1] = puVar3;
  unaff_ESI[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *unaff_ESI = puVar3;
  return;
}

