// FUN_005c03c0 @ 005c03c0 body=[[005c03c0, 005c043a]]


void FUN_005c03c0(int param_1)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x60);
  iVar2 = *(int *)(in_EAX + 100);
  if ((((char)uVar1 == 'R') && ((char)((uint)uVar1 >> 8) == 'E')) &&
     ((char)((uint)uVar1 >> 0x10) == 'B')) {
    if (*(int *)(in_EAX + 0x30) == 0) {
      if (*(int *)(in_EAX + 0x74) == 0) goto LAB_005c0410;
      iVar2 = *(int *)(*(int *)(in_EAX + 0x74) + 0xdc);
    }
    else {
      iVar2 = *(int *)(*(int *)(in_EAX + 0x30) + 100);
    }
    iVar2 = *(int *)(iVar2 + 300);
  }
LAB_005c0410:
  *(undefined4 *)(in_EAX + 0x38) =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xbcc) + 0x310) +
        *(int *)(param_1 + 0x24) * 4);
  return;
}

