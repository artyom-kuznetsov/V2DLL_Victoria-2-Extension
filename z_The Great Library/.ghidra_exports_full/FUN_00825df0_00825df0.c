// FUN_00825df0 @ 00825df0 body=[[00825df0, 00825e49]]


void FUN_00825df0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x148);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = 0;
    puVar3[2] = iVar1;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x150);
  *(int *)(unaff_ESI + 0x150) = iVar2 + 1;
  *(undefined4 **)(unaff_ESI + 0x148) = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar3;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0x14c) = puVar3;
  return;
}

