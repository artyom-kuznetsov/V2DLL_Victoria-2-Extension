// FUN_00950780 @ 00950780 body=[[00950780, 00950940]]


undefined4 * FUN_00950780(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(), cVar3 != '\0')) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      iVar4 = 0;
      if (iVar2 < 0x8a2) {
        if (iVar2 == 0x8a1) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x154);
        }
        else if (iVar2 == 0x264) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x428);
        }
        else if (iVar2 == 0x6c2) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x454);
        }
      }
      else if (iVar2 < 0xa30) {
        if (iVar2 == 0xa2f) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x134);
        }
        else {
          switch(iVar2) {
          case 0x8a2:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x124);
            break;
          case 0x8a3:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x158);
            break;
          case 0x8a4:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x130);
            break;
          case 0x8a5:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x13c);
            break;
          case 0x8a7:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x140);
            break;
          case 0x8a8:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x148);
            break;
          case 0x8a9:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x14c);
            break;
          case 0x8aa:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x128);
            break;
          case 0x8da:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x150);
            break;
          case 0x942:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 300);
            break;
          case 0x975:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x15c);
            break;
          case 0x976:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x160);
          }
        }
      }
      else if (iVar2 == 0xa30) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x138);
      }
      else if (iVar2 == 0xa38) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x144);
      }
      else if (iVar2 == 0xa4c) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x164);
      }
      iVar6 = iVar6 + iVar4;
    }
  }
  uVar5 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0x108) * (longlong)iVar6,1000,0);
  *param_2 = uVar5;
  return param_2;
}

