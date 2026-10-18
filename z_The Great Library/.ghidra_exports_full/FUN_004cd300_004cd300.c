// FUN_004cd300 @ 004cd300 body=[[004cd300, 004cd4a9]]


int FUN_004cd300(int param_1)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  switch(*(undefined4 *)(in_EAX + 0x80)) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = *(int *)(DAT_012586dc + 0x40);
    iVar7 = *(int *)(iVar2 + 300) / 1000;
    iVar3 = FUN_004cb1d0();
    if (4 < iVar3) {
      iVar7 = iVar7 + (*(int *)(iVar2 + 0x130) / 1000) * (iVar3 + -4);
    }
    return iVar7;
  default:
    return 0;
  }
  iVar2 = FUN_004cb1d0();
  if (iVar2 != 0) {
    return *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x120) / 1000;
  }
  piVar5 = *(int **)(in_EAX + 8);
  iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x124) / 1000;
  bVar1 = false;
  if (piVar5 != (int *)0x0) {
    do {
      if (bVar1) goto LAB_004cd3fb;
      iVar7 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4) + 0x5c);
      iVar3 = (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24;
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = (int *)(*(int *)(iVar7 + 200) + 4);
        do {
          if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4) + 300) ==
              *(int *)(param_1 + 4)) {
            bVar1 = true;
            break;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 9;
        } while (iVar6 < iVar3);
      }
      piVar5 = (int *)piVar5[2];
    } while (piVar5 != (int *)0x0);
    if (bVar1) {
LAB_004cd3fb:
      iVar2 = iVar2 + *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x128) / 1000;
    }
  }
  return iVar2;
}

