// FUN_00779dc0 @ 00779dc0 body=[[00779dc0, 00779efa]]


void FUN_00779dc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar3 = iVar1;
    do {
      if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 4) * 4) + 0x1408) <=
          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[1] * 4) + 0x1408)) {
        if (iVar3 != iVar1) {
          iVar1 = *(int *)(iVar3 + 0xc);
          puVar2 = (undefined4 *)FUN_00aae9af(0x14);
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            *puVar2 = *unaff_EDI;
            puVar2[1] = unaff_EDI[1];
            puVar2[2] = iVar3;
            puVar2[3] = iVar1;
            *(undefined1 *)(puVar2 + 4) = 0;
          }
          *(undefined4 **)(iVar3 + 0xc) = puVar2;
          if (iVar1 != 0) {
            *(undefined4 **)(iVar1 + 8) = puVar2;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        puVar2 = (undefined4 *)FUN_00aae9af(0x14);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = *unaff_EDI;
          puVar2[1] = unaff_EDI[1];
          puVar2[2] = iVar1;
          puVar2[3] = 0;
          *(undefined1 *)(puVar2 + 4) = 0;
        }
        iVar3 = param_1[2];
        param_1[1] = (int)puVar2;
        param_1[2] = iVar3 + 1;
        if (iVar3 != 0) {
          *(undefined4 **)(iVar1 + 0xc) = puVar2;
          return;
        }
        *param_1 = (int)puVar2;
        return;
      }
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != 0);
  }
  iVar1 = *param_1;
  puVar2 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *unaff_EDI;
    puVar2[1] = unaff_EDI[1];
    puVar2[2] = 0;
    puVar2[3] = iVar1;
    *(undefined1 *)(puVar2 + 4) = 0;
  }
  iVar3 = param_1[2];
  *param_1 = (int)puVar2;
  param_1[2] = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar2;
    return;
  }
  param_1[1] = (int)puVar2;
  return;
}

