// FUN_00548c20 @ 00548c20 body=[[00548c20, 00548c6b]]


int FUN_00548c20(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    cVar2 = FUN_00548cc0();
    iVar4 = in_ECX;
    if (cVar2 == '\0') {
      iVar4 = 0;
    }
    iVar3 = __fclose_nolock(*(FILE **)(in_ECX + 0x54));
    if (iVar3 == 0) goto LAB_00548c4a;
  }
  iVar4 = 0;
LAB_00548c4a:
  *(undefined1 *)(in_ECX + 0x50) = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  FUN_00549030();
  *(undefined4 *)(in_ECX + 0x54) = 0;
  uVar1 = DAT_013f0824;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = uVar1;
  return iVar4;
}

