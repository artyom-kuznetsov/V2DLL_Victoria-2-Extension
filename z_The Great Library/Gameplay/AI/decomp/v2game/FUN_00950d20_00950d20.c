// FUN_00950d20 @ 00950d20 body=[[00950d20, 00950ee0]]


undefined4 * FUN_00950d20(int param_1,undefined4 *param_2)

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
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1dc);
        }
        else if (iVar2 == 0x264) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x430);
        }
        else if (iVar2 == 0x6c2) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x45c);
        }
      }
      else if (iVar2 < 0xa30) {
        if (iVar2 == 0xa2f) {
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1bc);
        }
        else {
          switch(iVar2) {
          case 0x8a2:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1ac);
            break;
          case 0x8a3:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1e0);
            break;
          case 0x8a4:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1b8);
            break;
          case 0x8a5:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1c4);
            break;
          case 0x8a7:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1c8);
            break;
          case 0x8a8:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1d0);
            break;
          case 0x8a9:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1d4);
            break;
          case 0x8aa:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1b0);
            break;
          case 0x8da:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1d8);
            break;
          case 0x942:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1b4);
            break;
          case 0x975:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1e4);
            break;
          case 0x976:
            iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1e8);
          }
        }
      }
      else if (iVar2 == 0xa30) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1c0);
      }
      else if (iVar2 == 0xa38) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1cc);
      }
      else if (iVar2 == 0xa4c) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1ec);
      }
      iVar6 = iVar6 + iVar4;
    }
  }
  uVar5 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0x10c) * (longlong)iVar6,1000,0);
  *param_2 = uVar5;
  return param_2;
}

