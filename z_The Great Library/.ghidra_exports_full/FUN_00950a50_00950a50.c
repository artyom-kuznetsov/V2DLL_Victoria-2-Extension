// FUN_00950a50 @ 00950a50 body=[[00950a50, 00950c10]]


undefined4 * FUN_00950a50(int param_1,undefined4 *param_2)

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
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x198);
        }
        else if (iVar2 == 0x264) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x42c);
        }
        else if (iVar2 == 0x6c2) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x458);
        }
      }
      else if (iVar2 < 0xa30) {
        if (iVar2 == 0xa2f) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x178);
        }
        else {
          switch(iVar2) {
          case 0x8a2:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x168);
            break;
          case 0x8a3:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x19c);
            break;
          case 0x8a4:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x174);
            break;
          case 0x8a5:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x180);
            break;
          case 0x8a7:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x184);
            break;
          case 0x8a8:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x18c);
            break;
          case 0x8a9:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 400);
            break;
          case 0x8aa:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x16c);
            break;
          case 0x8da:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x194);
            break;
          case 0x942:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x170);
            break;
          case 0x975:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1a0);
            break;
          case 0x976:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1a4);
          }
        }
      }
      else if (iVar2 == 0xa30) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x17c);
      }
      else if (iVar2 == 0xa38) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x188);
      }
      else if (iVar2 == 0xa4c) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1a8);
      }
      iVar6 = iVar6 + iVar4;
    }
  }
  uVar5 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0x104) * (longlong)iVar6,1000,0);
  *param_2 = uVar5;
  return param_2;
}

