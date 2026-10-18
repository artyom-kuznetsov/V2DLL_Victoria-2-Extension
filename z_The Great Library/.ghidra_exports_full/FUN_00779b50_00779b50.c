// FUN_00779b50 @ 00779b50 body=[[00779b50, 00779c74]]


void FUN_00779b50(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  
  puVar4 = (undefined4 *)param_1[1];
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      iVar1 = *param_1;
      puVar4 = (undefined4 *)FUN_00aae9af(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = *unaff_EDI;
        puVar4[1] = unaff_EDI[1];
        puVar4[2] = 0;
        puVar4[3] = iVar1;
        *(undefined1 *)(puVar4 + 4) = 0;
      }
      iVar2 = param_1[2];
      *param_1 = (int)puVar4;
      param_1[2] = iVar2 + 1;
      if (iVar2 == 0) {
        param_1[1] = (int)puVar4;
        return;
      }
      *(undefined4 **)(iVar1 + 8) = puVar4;
      return;
    }
    cVar3 = FUN_0076d210(*puVar4,puVar4[1],*unaff_EDI,unaff_EDI[1]);
    if (cVar3 == '\0') break;
    puVar4 = (undefined4 *)puVar4[2];
  }
  puVar5 = (undefined4 *)param_1[1];
  if (puVar4 != puVar5) {
    iVar1 = puVar4[3];
    puVar5 = (undefined4 *)FUN_00aae9af(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = *unaff_EDI;
      puVar5[1] = unaff_EDI[1];
      puVar5[2] = puVar4;
      puVar5[3] = iVar1;
      *(undefined1 *)(puVar5 + 4) = 0;
    }
    puVar4[3] = puVar5;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar5;
    }
    param_1[2] = param_1[2] + 1;
    return;
  }
  puVar4 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = *unaff_EDI;
    puVar4[1] = unaff_EDI[1];
    puVar4[2] = puVar5;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
  }
  iVar1 = param_1[2];
  param_1[1] = (int)puVar4;
  param_1[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *param_1 = (int)puVar4;
    return;
  }
  puVar5[3] = puVar4;
  return;
}

