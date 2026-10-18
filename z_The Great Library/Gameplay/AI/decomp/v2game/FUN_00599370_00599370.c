// FUN_00599370 @ 00599370 body=[[00599370, 005993ce]]


void FUN_00599370(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_c [8];
  
  puVar1 = (undefined4 *)FUN_00598a70(local_c);
  *(undefined4 *)(in_ECX + 0x7c) = *puVar1;
  uVar2 = FUN_005946a0();
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) & 0xfffffffcU)) {
    do {
      FUN_00597040(*(undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar3 * 4),in_ECX,param_1,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2);
  }
  return;
}

