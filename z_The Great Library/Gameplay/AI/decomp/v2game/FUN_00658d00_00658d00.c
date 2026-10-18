// FUN_00658d00 @ 00658d00 body=[[00658d00, 00658d96] [00658da0, 00658dfb]]


void FUN_00658d00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  
  if (((*(char *)(DAT_012588e8 + 0xd11) == '\0') || (*(char *)(in_ECX + 0x20) != '\0')) ||
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x70) != '\0')) {
    if (param_1 != 0) {
      iVar1 = *(int *)(in_ECX + 3000);
      piVar4 = (int *)FUN_00aae9af(0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = param_1;
        piVar4[1] = iVar1;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0xbbc);
      *(int **)(in_ECX + 3000) = piVar4;
      *(int *)(in_ECX + 0xbbc) = iVar2 + 1;
      if (iVar2 != 0) {
        *(int **)(iVar1 + 8) = piVar4;
        return;
      }
      *(int **)(in_ECX + 0xbb4) = piVar4;
      return;
    }
    for (puVar3 = *(undefined4 **)(in_ECX + 0x1600); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      iVar1 = *(int *)(in_ECX + 3000);
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = *puVar3;
        puVar5[1] = iVar1;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0xbbc);
      *(undefined4 **)(in_ECX + 3000) = puVar5;
      *(int *)(in_ECX + 0xbbc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(in_ECX + 0xbb4) = puVar5;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar5;
      }
    }
  }
  return;
}

