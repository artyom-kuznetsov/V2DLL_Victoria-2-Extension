// FUN_0092f420 @ 0092f420 body=[[0092f420, 0092f493]]


void FUN_0092f420(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  undefined1 in_CL;
  
  *(undefined1 *)(in_EAX + 0x71) = 1;
  *(undefined1 *)(in_EAX + 0x60) = in_CL;
  iVar2 = DAT_012588e8;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    if ((*(int *)(DAT_012588e8 + 0xbc0) - *(int *)(DAT_012588e8 + 0xbbc) & 0xfffffffcU) == 0) {
      FUN_004e9b90();
      puVar1 = (uint *)(*(int *)(DAT_012588e8 + 0xb24) + 0x74);
      *puVar1 = *puVar1 | 0x100;
      return;
    }
    **(undefined4 **)(DAT_012588e8 + 0xbbc) = 0xffffffff;
    puVar1 = (uint *)(*(int *)(iVar2 + 0xb24) + 0x74);
    *puVar1 = *puVar1 | 0x100;
  }
  return;
}

