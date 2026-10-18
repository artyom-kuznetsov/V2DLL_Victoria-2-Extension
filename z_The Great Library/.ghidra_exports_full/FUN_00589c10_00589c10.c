// FUN_00589c10 @ 00589c10 body=[[00589c10, 00589c83]]


undefined4 FUN_00589c10(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  if (((-1 < *(int *)(in_ECX + 0x3c)) && (0 < *(int *)(in_ECX + 0x48))) &&
     (*(int *)(in_ECX + 0x44) != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + *(int *)(in_ECX + 0x3c) * 4);
    iVar2 = *(int *)(iVar1 + 0x80);
    if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) &&
       ((iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8), iVar2 == 0 ||
        (*(int *)(iVar2 + 0xc) != iVar1)))) {
      cVar3 = FUN_004cb370(in_ECX + 0x40);
      if (cVar3 != '\0') {
        cVar3 = FUN_004cd190(iVar1);
        if (cVar3 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

