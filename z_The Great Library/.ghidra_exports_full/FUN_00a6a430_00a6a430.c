// FUN_00a6a430 @ 00a6a430 body=[[00a6a430, 00a6a480]]


void FUN_00a6a430(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  
  iVar2 = in_ECX[1];
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *param_1;
    puVar4[1] = iVar2;
    *puVar4 = uVar1;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  in_ECX[1] = puVar4;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 8) = puVar4;
    return;
  }
  *in_ECX = puVar4;
  return;
}

