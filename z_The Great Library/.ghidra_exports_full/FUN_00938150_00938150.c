// FUN_00938150 @ 00938150 body=[[00938150, 0093822c] [00938230, 009382f2]]


void FUN_00938150(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar10 = param_3;
  iVar8 = param_1;
  for (puVar5 = *(undefined4 **)(param_1 + 0x2c);
      (*(undefined4 **)(param_1 + 0x2c) <= puVar5 && (puVar5 < *(undefined4 **)(param_1 + 0x30)));
      puVar5 = puVar5 + 2) {
    if (puVar5[1] == param_3) {
      *puVar5 = param_4;
      puVar5[1] = param_5;
    }
  }
  for (puVar5 = *(undefined4 **)(param_1 + 0x3c);
      (*(undefined4 **)(param_1 + 0x3c) <= puVar5 && (puVar5 < *(undefined4 **)(param_1 + 0x40)));
      puVar5 = puVar5 + 2) {
    if (puVar5[1] == param_3) {
      *puVar5 = param_4;
      puVar5[1] = param_5;
    }
  }
  param_1 = param_3;
  piVar6 = (int *)FUN_0093d080(&param_1);
  if (*piVar6 != *(int *)(iVar8 + 0xe0)) {
    param_1 = iVar10;
    local_c = param_5;
    param_1 = FUN_0093cfb0();
    uVar7 = FUN_0093cfb0();
    FUN_0042b600(uVar7,param_1);
    param_1 = param_3;
    FUN_0093d520(&local_10,&param_1);
    FUN_0093d170(local_10,local_c);
  }
  puVar5 = *(undefined4 **)(iVar8 + 0xe0);
  puVar2 = (undefined4 *)*puVar5;
  while (puVar2 != puVar5) {
    iVar8 = puVar2[4];
    iVar10 = 0;
    if (0 < (int)(puVar2[5] - iVar8 & 0xffffffc0U)) {
      iVar9 = 0;
      do {
        if (*(int *)(iVar8 + 0x1c + iVar9) == param_3) {
          *(undefined4 *)(iVar8 + 0x18 + iVar9) = param_4;
          *(undefined4 *)(iVar8 + 0x1c + iVar9) = param_5;
        }
        if (*(int *)(iVar8 + 0x24 + iVar9) == param_3) {
          *(undefined4 *)(iVar8 + 0x20 + iVar9) = param_4;
          *(undefined4 *)(iVar8 + 0x24 + iVar9) = param_5;
        }
        if (*(int *)(iVar8 + 0x14 + iVar9) == param_3) {
          *(undefined4 *)(iVar8 + 0x10 + iVar9) = param_4;
          *(undefined4 *)(iVar8 + 0x14 + iVar9) = param_5;
        }
        iVar8 = puVar2[4];
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x40;
      } while (iVar10 < puVar2[5] - iVar8 >> 6);
    }
    if (*(char *)((int)puVar2 + 0x21) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x21);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x21);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x21);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x21);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return;
}

