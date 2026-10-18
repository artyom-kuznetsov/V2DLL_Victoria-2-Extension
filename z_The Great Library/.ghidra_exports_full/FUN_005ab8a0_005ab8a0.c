// FUN_005ab8a0 @ 005ab8a0 body=[[005ab8a0, 005ab962]]


void FUN_005ab8a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  while( true ) {
    if (iVar1 == 0) {
      FUN_009e6cc0(param_2);
      return;
    }
    cVar3 = FUN_0059b780();
    if (cVar3 == '\0') break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  iVar2 = param_1[1];
  if (iVar1 == iVar2) {
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = *param_2;
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar1 = param_1[2];
    param_1[1] = puVar4;
    param_1[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *param_1 = puVar4;
      return;
    }
    *(undefined4 **)(iVar2 + 8) = puVar4;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = *param_2;
    puVar4[1] = iVar1;
    puVar4[2] = iVar2;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  *(undefined4 **)(iVar1 + 8) = puVar4;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar2 + 4) = puVar4;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

