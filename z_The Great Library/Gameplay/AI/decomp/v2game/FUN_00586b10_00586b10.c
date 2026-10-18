// FUN_00586b10 @ 00586b10 body=[[00586b10, 00586b39]]


void FUN_00586b10(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  puVar1 = *(undefined4 **)(DAT_012588e8 + 0xb3c);
  for (iVar2 = *(int *)(in_ECX + 0x44); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  FUN_009387f0(*puVar1,in_ECX + 0x3c,*(undefined1 *)(in_ECX + 0x48));
  return;
}

