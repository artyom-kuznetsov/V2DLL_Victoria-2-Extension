// FUN_008fb010 @ 008fb010 body=[[008fb010, 008fb0ab]]


undefined4 FUN_008fb010(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_008a88d0();
  iVar1 = DAT_012588e8;
  puVar5 = (uint *)(DAT_012588e8 + 0xbe0);
  piVar3 = *(int **)(DAT_012588e8 + 0xbe0);
  while (((int *)*puVar5 <= piVar3 && (piVar3 < *(int **)(iVar1 + 0xbe4)))) {
    piVar4 = piVar3 + 1;
    local_48 = *(undefined4 *)(*piVar3 + 0x1c);
    local_44 = *(undefined4 *)(*piVar3 + 0x20);
    iVar6 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar7 = 0;
    if (iVar6 < 1) {
      return 1;
    }
    while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar7 * 4) + 0x18))(local_50),
          piVar3 = piVar4, cVar2 != '\0') {
      iVar7 = iVar7 + 1;
      if (iVar6 <= iVar7) {
        return 1;
      }
    }
  }
  return 0;
}

