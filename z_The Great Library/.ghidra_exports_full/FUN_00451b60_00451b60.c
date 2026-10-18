// FUN_00451b60 @ 00451b60 body=[[00451b60, 00451b8e] [00451b90, 00451c0a]]


void FUN_00451b60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  
  iVar4 = DAT_012587e4;
  puVar6 = (uint *)(DAT_012587e4 + 4);
  piVar7 = (int *)*puVar6;
  iVar1 = piVar7[*(int *)(in_EAX + 4)];
  if (*(char *)(iVar1 + 0x31) != '\0') {
    while (((int *)*puVar6 <= piVar7 && (piVar7 < *(int **)(iVar4 + 8)))) {
      iVar2 = *piVar7;
      piVar7 = piVar7 + 1;
      if (((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
          (iVar3 = *(int *)(iVar2 + 0x20), iVar3 != 0)) &&
         ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
           (*(char *)(iVar2 + 0x1e) != 'B')) && (iVar3 != *(int *)(iVar1 + 0x20))))) {
        iVar2 = *(int *)(iVar1 + 0x141c);
        iVar5 = *(int *)(iVar1 + 0x1418);
        if (iVar5 != iVar2) {
          do {
            if (*(int *)(iVar5 + 4) == iVar3) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar2);
          if (iVar5 != iVar2) {
            FUN_004d61d0();
          }
        }
      }
    }
  }
  return;
}

