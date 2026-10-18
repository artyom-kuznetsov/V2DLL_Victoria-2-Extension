// FUN_004b3c40 @ 004b3c40 body=[[004b3c40, 004b3df5]]


void FUN_004b3c40(int param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int *unaff_ESI;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x9c) + 8) + 1000;
  cVar2 = *(char *)(*(int *)(param_1 + 0x5c) + 0x2a);
  *unaff_ESI = iVar4;
  if (cVar2 == '\0') goto LAB_004b3db1;
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 == *(int *)(param_1 + 300)) {
    if (*(int *)(param_1 + 0x134) != iVar3) {
LAB_004b3cb0:
      if ((*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(param_2 + 4) * 4) + 0xbe8) +
                            *(int *)(param_1 + 0x134) * 4) + 0x20) == 0) &&
         (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(param_2 + 4) * 4) + 0xbe8) +
                            *(int *)(param_1 + 0x134) * 4) + 0x60) == '\0')) {
        cVar2 = FUN_0042bb00();
        if ((cVar2 == '\0') &&
           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(param_1 + 0x134) * 4) + 0xbe8) +
                             *(int *)(param_2 + 4) * 4) + 0x20) == 0)) {
          cVar2 = FUN_00416e40();
          if (((cVar2 == '\0') &&
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                  *(int *)(param_1 + 0x134) * 4) + 0xbe8) +
                                *(int *)(param_2 + 4) * 4) + 0x20) == 0)) &&
             (*(int *)(param_1 + 0x110) == 0)) goto LAB_004b3db1;
        }
      }
      goto LAB_004b3d90;
    }
    FUN_00401000(0x451c4800);
    iVar3 = FUN_00b31c00();
    lVar1 = (longlong)iVar3 * (longlong)iVar4;
  }
  else {
    if (*(int *)(param_1 + 0x134) != iVar3) goto LAB_004b3cb0;
LAB_004b3d90:
    lVar1 = __allmul(iVar4,iVar4 >> 0x1f,2000,0);
  }
  iVar4 = __alldiv(lVar1,1000,0);
  *unaff_ESI = iVar4;
LAB_004b3db1:
  iVar4 = __alldiv((longlong)*unaff_ESI *
                   (longlong)
                   (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(param_2 + 4) * 4) + 0xbcc) + 0x2c) + 1000),
                   1000,0);
  *unaff_ESI = iVar4;
  return;
}

