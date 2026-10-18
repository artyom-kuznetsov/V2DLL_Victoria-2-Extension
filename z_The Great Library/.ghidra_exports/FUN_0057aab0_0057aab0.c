// FUN_0057aab0 @ 0057aab0  (requested 0057AAB0, first bytes: 55 8B EC 56 57 8B F1 8B)


void FUN_0057aab0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
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
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  in_ECX[1] = puVar3;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *in_ECX = puVar3;
  return;
}

