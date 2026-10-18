// FUN_006f7e40 @ 006f7e40 body=[[006f7e40, 006f7e88]]


void FUN_006f7e40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe44);
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    FUN_006f7cd0(uVar2);
  }
  return;
}

