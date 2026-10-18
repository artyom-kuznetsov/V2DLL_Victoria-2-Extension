// FUN_00951610 @ 00951610 body=[[00951610, 00951813]]


undefined4 * FUN_00951610(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((*(int *)(in_EAX + 0xc) != 0) &&
     (cVar2 = (**(code **)(**(int **)(in_EAX + 0xc) + 0x1c))(), cVar2 != '\0')) {
    piVar4 = *(int **)(*(int *)(in_EAX + 0xc) + 0x120);
    while (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[2];
      iVar3 = 0;
      if (iVar1 < 0x8a2) {
        if (iVar1 == 0x8a1) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2a8);
        }
        else if (iVar1 == 0x264) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x43c);
        }
        else if (iVar1 == 0x6c2) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x468);
        }
      }
      else if (iVar1 < 0xa30) {
        if (iVar1 == 0xa2f) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x288);
        }
        else {
          switch(iVar1) {
          case 0x8a2:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x278);
            break;
          case 0x8a3:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2ac);
            break;
          case 0x8a4:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x284);
            break;
          case 0x8a5:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x290);
            break;
          case 0x8a7:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x294);
            break;
          case 0x8a8:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x29c);
            break;
          case 0x8a9:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2a0);
            break;
          case 0x8aa:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x27c);
            break;
          case 0x8da:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2a4);
            break;
          case 0x942:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x280);
            break;
          case 0x975:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2b0);
            break;
          case 0x976:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2b4);
          }
        }
      }
      else if (iVar1 == 0xa30) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x28c);
      }
      else if (iVar1 == 0xa38) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x298);
      }
      else if (iVar1 == 0xa4c) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2b8);
      }
      iVar6 = iVar6 + iVar3;
    }
  }
  iVar6 = __alldiv((longlong)*(int *)(*(int *)(in_EAX + 0xc) + 0x11c) * (longlong)iVar6,1000,0);
  piVar4 = (int *)FUN_0092d780();
  uVar5 = __alldiv((longlong)iVar6 * (longlong)*piVar4,1000,0);
  *param_1 = uVar5;
  return param_1;
}

