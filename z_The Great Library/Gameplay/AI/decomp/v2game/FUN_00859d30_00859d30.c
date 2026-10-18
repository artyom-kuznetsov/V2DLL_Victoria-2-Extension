// FUN_00859d30 @ 00859d30 body=[[00859d30, 00859dc6]]


void FUN_00859d30(undefined4 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = in_EAX * 0x10;
  piVar1 = &DAT_01318b20 + in_EAX * 4;
  if (param_2 == '\0') {
    iVar2 = *(int *)(&DAT_01318b24 + iVar4);
    puVar5 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = param_1;
      puVar5[1] = iVar2;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    iVar3 = *(int *)(&DAT_01318b28 + iVar4);
    *(undefined4 **)(&DAT_01318b24 + iVar4) = puVar5;
    *(int *)(&DAT_01318b28 + iVar4) = iVar3 + 1;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar5;
      return;
    }
    *piVar1 = (int)puVar5;
    return;
  }
  iVar2 = *piVar1;
  puVar5 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = param_1;
    puVar5[1] = 0;
    puVar5[2] = iVar2;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar3 = *(int *)(&DAT_01318b28 + iVar4);
  *piVar1 = (int)puVar5;
  *(int *)(&DAT_01318b28 + iVar4) = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 4) = puVar5;
    return;
  }
  *(undefined4 **)(&DAT_01318b24 + iVar4) = puVar5;
  return;
}

