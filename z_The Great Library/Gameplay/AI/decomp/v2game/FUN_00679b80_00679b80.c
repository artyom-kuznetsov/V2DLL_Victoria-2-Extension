// FUN_00679b80 @ 00679b80 body=[[00679b80, 00679bd7]]


void FUN_00679b80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  puVar3 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = iVar1;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[1] = puVar3;
  in_ECX[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 0xc) = puVar3;
    return;
  }
  *in_ECX = puVar3;
  return;
}

